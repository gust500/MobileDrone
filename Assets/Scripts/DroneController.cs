using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class DroneController : MonoBehaviour
{
    enum DroneState
    {
        DRONE_STATE_IDLE,
        DRONE_STATE_START_MANUAL_CONTROL,
        DRONE_STATE_MANUAL_CONTROL,
        DRONE_STATE_STOP_MANUAL_CONTROL,
        DRONE_STATE_RETURN_ORIGINAL_POSITION
    }
    DroneState droneState;
    public bool isManualControl;


    private float rotationMultiplierHorizontal = 0;
    private float rotationMultiplierVertical = 0;

    Animator anim;

    private Vector3 originalAutoDronePosition;
    private Vector3 originalManualDronePosition;
    private Quaternion originalManualDroneRotation;
    public double latitudeDrone; //39.7545206f 39.7325029f
    public double longitudeDrone; //-8.8016551f -8.820128f
    public double altitudeDrone; //5
    public string droneColor; // #ff0000
    public float droneBattery;
    public string droneID;
    public string droneName;
    public float zoomDrone;
    public string droneCurrentState = "motorsOFF";
    public int status;
    public bool droneFunctional;
    private float batteryperMinute; //20 minutos * 60
    private GameObject droneInformations;
    private GameObject droneRealInfo;
    private GameObject batteryObject;
    private Sprite[] batteryImages;
    public bool manualControl;
    private GameObject canvasJoyStickLeft;
    private GameObject canvasJoyStickRight;

    private GameObject[] joySticks;
    private bool joySticksClicked;
    private Rigidbody rigidbody;
    private float moveSpeed;
    private FixedJoystick joyStickDirection;
    private FixedJoystick joyStickUpDownandRotation;
    private WS_Client ws_client;

    private GameManager gameManager;

    private float t;

    private string sceneName;

    public bool isCameraViewActive = false;

    // Start is called before the first frame update
    void Start()
    {
        //Initialization

        sceneName = SceneManager.GetActiveScene().name;

        //battery
        batteryObject = GameObject.Find("Canvas/Battery");
        batteryImages = new Sprite[4];
        for (int i = 0; i < 4; i++)
        {
            batteryImages[i] = Resources.Load<Sprite>("battery" + (i + 1));
        }
        //batteryperMinute = 20;
        //battery = batteryperMinute * 60;

        if (sceneName == "Visualization")
        {
            //drone controller
            canvasJoyStickLeft = GameObject.Find("CanvasJoyStickLeft");
            canvasJoyStickRight = GameObject.Find("CanvasJoyStickRight");
            joyStickDirection = GameObject.Find("CanvasJoyStickRight/JoystickDirection").GetComponent<FixedJoystick>();
            joyStickUpDownandRotation = GameObject.Find("CanvasJoyStickLeft/JoystickUpDown").GetComponent<FixedJoystick>();
            ws_client = GameObject.Find("GameManager").GetComponent<WS_Client>();
            rigidbody = GetComponent<Rigidbody>();
            manualControl = false;
            canvasJoyStickLeft.transform.GetChild(0).transform.localScale = new Vector3(0, 0, 0);
            canvasJoyStickRight.transform.GetChild(0).transform.localScale = new Vector3(0, 0, 0);
            originalManualDronePosition = new Vector3(0, 0, 0);
            originalManualDroneRotation = new Quaternion(0, 0, 0, 0);
            isManualControl = false;
            isCameraViewActive = false;
            gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
        }

        //drone animation, information and speed
        moveSpeed = 10;
        if (gameObject.tag == "virtualDrone")
        {
            droneInformations = transform.GetChild(0).GetChild(0).gameObject;
        }
        else if (gameObject.tag == "realDroneObject")
        {
            droneRealInfo = GameObject.Find("Canvas/DroneRealInfo");
        }
        anim = GetComponent<Animator>();
        droneState = DroneState.DRONE_STATE_IDLE;
    }

    // Update is called once per frame
    void Update()
    {

        //Update drone informations (battery, Latitude and longitude)
        if (sceneName == "Visualization")
        {
            batteryManager();
        }
        if (gameObject.tag == "virtualDrone" && droneInformations != null)
        {
            droneInformations.transform.GetChild(0).GetComponent<TextMeshPro>().text = "lat: " + latitudeDrone + "\nlong: " + longitudeDrone;
        }
        else if (gameObject.tag == "realDroneObject" && droneRealInfo != null && droneRealInfo.transform.localScale == new Vector3(1, 1, 1))
        {
            droneRealInfo.transform.GetChild(0).GetComponent<TextMeshProUGUI>().text = "lat: " + latitudeDrone;
            droneRealInfo.transform.GetChild(1).GetComponent<TextMeshProUGUI>().text = "long: " + longitudeDrone;
            droneRealInfo.transform.GetChild(2).GetComponent<TextMeshProUGUI>().text = "alt: " + altitudeDrone;
        }
    }

    void FixedUpdate()
    {
        string sceneName = SceneManager.GetActiveScene().name;

        if (sceneName == "Visualization")
        {
            //JoyStick rotation
            if (droneState != DroneState.DRONE_STATE_IDLE)
            {
                if (gameObject.tag == "realDroneObject" || (gameObject.tag == "virtualDrone" && !anim.GetBool("MoveUp")))
                    updateDrone();
            }

            if (manualControl)
            {
                //JoyStick Controller
                joySticks = GameObject.FindGameObjectsWithTag("joyStick");
                int joyStickType = 0;
                foreach (GameObject joyStick in joySticks)
                {
                    //JoyStickType = 1 -> Left JoyStick Pressed
                    //JoyStickType = 2 -> Right JoyStick Pressed
                    //JoyStickType = 3 -> Left and Right JoyStick Pressed
                    joySticksClicked = joyStick.GetComponent<JoyStickManager>().joyStickClicked;
                    if (joyStick.gameObject.name.Equals("JoystickUpDown") && joySticksClicked)
                    {
                        //JoyStickUpDown Pressed (Left JoyStick)
                        if (joyStickType > 0) joyStickType = 3;
                        else joyStickType = 1;
                    }
                    else if (joyStick.gameObject.name.Equals("JoystickDirection") && joySticksClicked)
                    {
                        //JoyStickUpDown Pressed (Right JoyStick)
                        if (joyStickType > 0) joyStickType = 3;
                        else joyStickType = 2;
                    }
                }

                //Attribute velocity to the drone depending of which joyStick was pressed
                if (joyStickType == 1) //joyStickUpDown
                    rigidbody.velocity = new Vector3(0, joyStickUpDownandRotation.Vertical * moveSpeed, 0);
                else if (joyStickType == 2) //joystickDirection
                    rigidbody.velocity = new Vector3(joyStickDirection.Horizontal * moveSpeed, 0, joyStickDirection.Vertical * moveSpeed);
                else if (joyStickType == 3) //joystickDirection and joyStickUpDown
                    rigidbody.velocity = new Vector3(joyStickDirection.Horizontal * moveSpeed, joyStickUpDownandRotation.Vertical * moveSpeed, joyStickDirection.Vertical * moveSpeed);
                else
                    rigidbody.velocity = new Vector3(0, 0, 0);


                if (gameObject.tag == "virtualDrone")
                {
                    //Convert drone position (X,Z) to Lat/Long
                    Vector2 droneGPSPosition = LocalToGPS(new Vector2(Input.location.lastData.latitude, Input.location.lastData.longitude), transform.position);

                    latitudeDrone = droneGPSPosition.x; //latitude
                    longitudeDrone = droneGPSPosition.y; //longitude
                    altitudeDrone = transform.position.y;
                }
                else if (gameObject.tag == "realDroneObject")
                {
                    ws_client.SendInformationArdupilot(this.gameObject, joyStickDirection, joyStickUpDownandRotation, "virtualSticksInput");
                }


                //Attribute rotation to the drone depending of which joyStick was pressed
                if (joyStickDirection.Horizontal == 0 && joyStickDirection.Vertical == 0)
                {
                    if (rotationMultiplierHorizontal != 0)
                    {
                        if (rotationMultiplierHorizontal > 0) rotationMultiplierHorizontal -= 0.05f;
                        if (rotationMultiplierHorizontal < 0) rotationMultiplierHorizontal += 0.05f;
                    }
                    if (rotationMultiplierVertical != 0)
                    {
                        if (rotationMultiplierVertical > 0) rotationMultiplierVertical -= 0.05f;
                        if (rotationMultiplierVertical < 0) rotationMultiplierVertical += 0.05f;
                    }
                }
            }
        }
    }

    Vector2 LocalToGPS(Vector2 phoneGPS, Vector3 droneLocalPosition)
    {
        const double EarthRadius = 6371000; // Earth's average radius in meters

        double latRad = phoneGPS.x * Math.PI / 180;
        double lonRad = phoneGPS.y * Math.PI / 180;

        double deltaLat = -droneLocalPosition.z / EarthRadius; // Note the negative sign
        double deltaLon = droneLocalPosition.x / (EarthRadius * Math.Cos(latRad));

        double droneLatRad = latRad + deltaLat;
        double droneLonRad = lonRad + deltaLon;

        double droneLat = droneLatRad * 180 / Math.PI;
        double droneLon = droneLonRad * 180 / Math.PI;

        return new Vector2((float)droneLat, (float)droneLon);
    }
    private void batteryManager()
    {
        //show battery informations on drone (battery per minute, battery percentage and battery image)
        if (gameObject.GetComponent<TargetManagement>().isDroneDetected) //transform.GetChild(0).localScale != new Vector3(0, 0, 0))
        {
            Debug.Log("ID: " + droneID + " | Battery: " + droneBattery);
            if (droneBattery > 0)
            {
                //battery -= Time.deltaTime;
                /*batteryObject.transform.GetChild(0).GetComponent<TextMeshProUGUI>().text =
                    Mathf.RoundToInt(battery / 60) + " minutes " +
                    "(" + Mathf.RoundToInt(batteryDrone / 1200 * 100) + "%)";*/

                batteryObject.transform.GetChild(2).GetComponent<TextMeshProUGUI>().text = Math.Round(droneBattery, 2) + "%";

                if (droneBattery <= 15) //batteryDrone <= (batteryperMinute * 60 / 4))
                {
                    batteryObject.transform.GetChild(1).GetComponent<TextMeshProUGUI>().color = Color.red;
                    batteryObject.transform.GetChild(0).GetComponent<Image>().sprite = batteryImages[2];
                }
                else if (droneBattery <= 50) // batteryDrone <= (batteryperMinute * 60 / 2))
                {
                    batteryObject.transform.GetChild(1).GetComponent<TextMeshProUGUI>().color = Color.yellow;
                    batteryObject.transform.GetChild(0).GetComponent<Image>().sprite = batteryImages[1];
                }
                else if (droneBattery <= 100) //batteryDrone <= (batteryperMinute * 60))
                {
                    batteryObject.transform.GetChild(1).GetComponent<TextMeshProUGUI>().color = Color.green;
                    batteryObject.transform.GetChild(0).GetComponent<Image>().sprite = batteryImages[0];
                }
            }
            else
            {
                batteryObject.transform.GetChild(1).GetComponent<TextMeshProUGUI>().color = Color.red;
                batteryObject.transform.GetChild(1).GetComponent<TextMeshProUGUI>().text = "No battery";
                batteryObject.transform.GetChild(0).GetComponent<Image>().sprite = batteryImages[3];
            }
        }
    }

    public void changeControl()
    {
        //Change control Mode: Auto or Manual
        if (manualControl)
        {
            //Auto control
            canvasJoyStickLeft.transform.GetChild(0).transform.localScale = new Vector3(0, 0, 0);
            canvasJoyStickRight.transform.GetChild(0).transform.localScale = new Vector3(0, 0, 0);
            rigidbody.isKinematic = true;
            InitiateAutoControl();
            manualControl = false;
        }
        else
        {
            //Manual Control
            if (gameObject.tag == "virtualDrone")
            {
                droneInformations.transform.GetChild(0).GetComponent<TextMeshPro>().text = "";
            }
            InitiateManualControl();
        } 
    }

    #region Drone Animation and Rotation
    public void InitiateManualControl()
    {
        isManualControl = true;
        //anim.SetBool("MoveUp", true);
        gameManager.EnableManualControlButton(false);
        originalManualDronePosition = transform.position;
        originalManualDroneRotation = transform.rotation;
        droneState = DroneState.DRONE_STATE_START_MANUAL_CONTROL;
    }

    public void InitiateAutoControl()
    {
        //anim.SetBool("MoveDown", true);
        gameManager.EnableAutoControlButton(false);
        droneState = DroneState.DRONE_STATE_STOP_MANUAL_CONTROL;
    }
    private void updateDrone()
    {
        switch (droneState)
        {
            case DroneState.DRONE_STATE_IDLE:
                break;
            case DroneState.DRONE_STATE_START_MANUAL_CONTROL:
                if (gameObject.tag == "virtualDrone")
                {
                    rigidbody.isKinematic = false;
                }
                canvasJoyStickLeft.transform.GetChild(0).transform.localScale = new Vector3(1, 1, 1);
                canvasJoyStickRight.transform.GetChild(0).transform.localScale = new Vector3(1, 1, 1);
                manualControl = true;
                gameManager.EnableAutoControlButton(true);
                droneState = DroneState.DRONE_STATE_MANUAL_CONTROL;
                break;
            case DroneState.DRONE_STATE_MANUAL_CONTROL:
                if (gameObject.tag == "virtualDrone")
                {
                    Vector3 rotation = transform.localRotation.eulerAngles;
                    if (joyStickUpDownandRotation.Horizontal == 0 && joyStickUpDownandRotation.Vertical == 0)
                    {
                        if (joyStickDirection.Horizontal != 0 || joyStickDirection.Vertical != 0)
                        {
                            rotationMultiplierHorizontal = joyStickDirection.Horizontal;
                            rotationMultiplierVertical = joyStickDirection.Vertical;
                        }

                        float angleZ = -30.0f * rotationMultiplierHorizontal * 60.0f * Time.deltaTime; //30 degree * speedX [-1.0, 1.0]
                        float angleX = 30.0f * rotationMultiplierVertical * 60.0f * Time.deltaTime; //30 degree * speedZ [-1.0 1.0]
                        transform.localRotation = Quaternion.Euler(angleX, rotation.y, angleZ);
                    }
                    else if (joyStickDirection.Horizontal == 0 && joyStickDirection.Vertical == 0)
                    {
                        float angleY = 5.0f * joyStickUpDownandRotation.Horizontal * 60.0f * Time.deltaTime;
                        transform.localRotation = Quaternion.Euler(rotation.x, rotation.y + angleY, rotation.z);
                    }
                }
                break;
            case DroneState.DRONE_STATE_STOP_MANUAL_CONTROL:
                originalAutoDronePosition = transform.position;
                droneState = DroneState.DRONE_STATE_RETURN_ORIGINAL_POSITION;               
                break;
            case DroneState.DRONE_STATE_RETURN_ORIGINAL_POSITION:
                t += Time.deltaTime / 3f;
                transform.position = Vector3.Lerp(originalAutoDronePosition, originalManualDronePosition, t);
                gameManager.EnableManualControlButton(false);
                if (transform.position == originalManualDronePosition)
                {
                    transform.rotation = originalManualDroneRotation;
                    gameManager.EnableManualControlButton(true);
                    isManualControl = false;
                    droneState = DroneState.DRONE_STATE_IDLE;
                    t = 0;
                }
                break;
        }
    }

    #endregion
}
