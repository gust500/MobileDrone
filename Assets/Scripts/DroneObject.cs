using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class DroneObject : MonoBehaviour
{
    public float latitudeDrone; //39.7545206f 39.7325029f
    public float longitudeDrone; //-8.8016551f -8.820128f
    public float altitudeDrone; //5
    public float droneBattery;
    public string droneSerialNumber;
    public float zoomDrone;
    public int status;
    public bool droneFunctional;
    private float batteryperMinute; //20 minutos * 60
    private GameObject droneInformations;
    private GameObject batteryObject;
    private Sprite[] batteryImages;

    private Rigidbody rigidbody;
    private float moveSpeed;

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
            rigidbody = GetComponent<Rigidbody>();
            isCameraViewActive = false;
            gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
        }

        //drone animation, information and speed
        moveSpeed = 10;
        //droneInformations = transform.GetChild(0).GetChild(0).gameObject;
    }

    // Update is called once per frame
    void Update()
    {
        //Update drone informations (battery, Latitude and longitude)
        if (sceneName == "Visualization")
        {
            batteryManager();
        }
        //droneInformations.transform.GetChild(0).GetComponent<TextMeshPro>().text = "lat: " + latitudeDrone + "\nlong: " + longitudeDrone;
    }

    private void batteryManager()
    {
        //show battery informations on drone (battery per minute, battery percentage and battery image)
        if (gameObject.GetComponent<TargetManagement>().isDroneDetected)
        {
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
}
