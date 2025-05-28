using Mapbox.Unity.Map;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public AugmentedScript augmentedScript;
    public ListVehicles listVehiclesScript;
    public GameObject keyValueGameObject;
    public GameObject headersScrollView;
    public GameObject newWSurl;
    public GameObject messageWS;
    public AbstractMap map;
    public GameObject minimapViewVirtualDrone;
    public GameObject minimapViewRealDrone;
    public GameObject minimap;

    public GameObject cameraViewEnablee;
    public GameObject cameraViewDisable;
    public GameObject arrowsMapButtonLeft;
    public GameObject arrowsMapButtonRight;
    private GameObject GPScoordinatesInfo;

    public GameObject takeOffButton;
    public GameObject landButton;
    public GameObject motorsOffButton;
    public GameObject motorsOnButton;

    public GameObject selectedDrone; //selected drone
    private GameObject saveSelectedDrone;

    public float selectedDroneLatitude = 0f;
    public float selectedDroneLongitude = 0f;
    public float selectedDroneZoom = 0f;

    private GameObject[] virtualDrones;
    public GameObject settingsView;
    public GameObject retrievalView;
    public GameObject retrievalButton;
    public GameObject listVehicleButton;
    public GameObject listVehicleView;
    public GameObject newDroneView;
    public GameObject DroneScrollViewInfo;
    public GameObject selectDroneButton;
    public GameObject helpView;
    private GameObject canvasJoyStickLeft;
    private GameObject canvasJoyStickRight;
    private GameObject droneControlButtonAuto;
    private GameObject droneControlButtonManual;
    private GameObject hideInfoButton;
    private GameObject hideHelpbutton;


    public GameObject droneRealInfo;
    private bool isSettingsOpen = false;
    private bool isRetrievalOpen = false;
    private bool isListVehicleOpen = true;
    public bool isViewCameraActive = false;
    public bool isInfoOpen = true;
    public bool isHelpOpen = false;

    private string sceneName;

    public GameObject latitudeText;
    public GameObject longitudeText;
    public GameObject latitudeDestinyText;
    public GameObject longitudeDestinyText;

    public TextMeshProUGUI helpText;

    // Start is called before the first frame update
    void Start()
    {
        //Initialize Map to a specific location and zoom
        map.Initialize(new Mapbox.Utils.Vector2d(39.7342382, -8.8228704), 18);

        cameraViewDisable.SetActive(false);
        settingsView.SetActive(false);
        selectedDrone = null;

        sceneName = SceneManager.GetActiveScene().name;
        if (sceneName == "Visualization")
        {
            selectedDrone = null;
            arrowsMapButtonLeft.SetActive(false);
            arrowsMapButtonRight.SetActive(false);

            //Hide drone joysticks
            canvasJoyStickLeft = GameObject.Find("CanvasJoyStickLeft");
            canvasJoyStickLeft.transform.GetChild(0).transform.localScale = new Vector3(0, 0, 0);
            canvasJoyStickRight = GameObject.Find("CanvasJoyStickRight");
            canvasJoyStickRight.transform.GetChild(0).transform.localScale = new Vector3(0, 0, 0);

            //Disable drone manual/auto control button
            droneControlButtonManual = GameObject.Find("Canvas/DroneButtonManual");
            droneControlButtonManual.SetActive(false);
            droneControlButtonAuto = GameObject.Find("Canvas/DroneButtonAuto");
            droneControlButtonAuto.SetActive(false);
        }
        else if (sceneName == "Retrieval")
        {
            retrievalView.SetActive(false);
            retrievalButton.SetActive(false);

            GPScoordinatesInfo = GameObject.Find("Canvas/GPSLocation");
        }

        hideInfoButton = GameObject.Find("Canvas/HideInfoButton");
        hideInfoButton.SetActive(true);

        hideHelpbutton = GameObject.Find("Canvas/HideHelpButton");
        hideHelpbutton.SetActive(false);
        helpView.SetActive(false);

        isInfoOpen = true;
        selectedDrone = null;

        droneRealInfo.transform.localScale = new Vector3(0, 0, 0);

        motorsOnButton.GetComponent<Button>().enabled = false;
        motorsOffButton.GetComponent<Button>().enabled = false;
        takeOffButton.GetComponent<Button>().enabled = false;
        landButton.GetComponent<Button>().enabled = false;
    }

    // Update is called once per frame
    void Update()
    {
        //helpText.text = augmentedScript + " | " + augmentedScript.ready;

        if (augmentedScript != null && augmentedScript.ready)
        {
            if (selectedDrone != null)
            {
                //Update Map to our location and specific zoom if view Drone camera is disable
                selectedDroneLatitude = selectedDrone.GetComponent<DroneController>().latitudeDrone;
                selectedDroneLongitude = selectedDrone.GetComponent<DroneController>().longitudeDrone;
                selectedDroneZoom = selectedDrone.GetComponent<DroneController>().zoomDrone;

                if (sceneName == "Retrieval")
                {
                    float currentLatitude = augmentedScript.currentLatitude;
                    float currentLongitude = augmentedScript.currentLongitude;

                    //update latitude/longitude location text of user and drone in Retrieval Mode
                    latitudeText.GetComponent<TextMeshProUGUI>().text = "lat: " + currentLatitude.ToString();
                    longitudeText.GetComponent<TextMeshProUGUI>().text = "long: " + currentLongitude.ToString();

                    latitudeDestinyText.GetComponent<TextMeshProUGUI>().text = "lat: " + selectedDroneLatitude.ToString();
                    longitudeDestinyText.GetComponent<TextMeshProUGUI>().text = "long: " + selectedDroneLongitude.ToString();

                    float distanceDrone = augmentedScript.Calc(currentLatitude, currentLongitude, selectedDroneLatitude, selectedDroneLongitude);
                    if (distanceDrone <= 15)
                    {
                        retrievalButton.SetActive(true);
                    }
                    else
                    {
                        retrievalButton.SetActive(false);
                    }
                }

                if (cameraViewDisable.activeSelf)
                {
                    //Update Map to drone location
                    map.UpdateMap(new Mapbox.Utils.Vector2d(selectedDroneLatitude, selectedDroneLongitude), selectedDroneZoom);

                    //visualize name of the specific view camera drone

                    if (selectedDrone.tag == "virtualDrone")
                    {
                        GameObject.Find("Canvas/DroneInfo/InformationText").GetComponent<TextMeshProUGUI>().text = "Drone: " + selectedDrone.GetComponent<DroneController>().droneName;

                    }
                    else if (selectedDrone.tag == "realDroneObject")
                    {
                        GameObject.Find("Canvas/DroneInfo/InformationText").GetComponent<TextMeshProUGUI>().text = "Drone: " + selectedDrone.GetComponent<DroneController>().droneID;

                    }

                }
            }
            
            if (!cameraViewDisable.activeSelf)
            {
                //Update Map to player location
                map.UpdateMap(new Mapbox.Utils.Vector2d(augmentedScript.currentLatitude, augmentedScript.currentLongitude), 18);
            }
        }
    }

    public void ChangeDroneCameraView(bool isRight)
    {
        GameObject[] virtualDrones = GameObject.FindGameObjectsWithTag("virtualDrone");
        GameObject[] realDrones = GameObject.FindGameObjectsWithTag("realDroneObject");
        GameObject[] allDrones = virtualDrones.Union(realDrones).ToArray();
        bool nextViewAvailable = false;

        if (isRight)
        {
            //Right button
            for (int i = 0; i < allDrones.Length; i++)
            {
                if (allDrones[i].GetComponent<DroneController>().isCameraViewActive)
                {
                    nextViewAvailable = true;
                    allDrones[i].GetComponent<DroneController>().isCameraViewActive = false;
                    continue;
                }
                else if (!allDrones[i].GetComponent<DroneController>().isCameraViewActive && nextViewAvailable)
                {
                    allDrones[i].GetComponent<DroneController>().isCameraViewActive = true;
                    selectedDrone = allDrones[i];
                    GameObject.Find("Canvas/DroneInfo/InformationText").GetComponent<TextMeshProUGUI>().text = "Drone: " + selectedDrone.GetComponent<DroneController>().droneName;


                    //Setting the respective camera depeding if the drone is virtual or real
                    if (selectedDrone.tag == "virtualDrone")
                    {
                        minimapViewVirtualDrone.SetActive(true);
                        minimapViewRealDrone.SetActive(false);
                    }
                    else if (selectedDrone.tag == "realDroneObject")
                    {
                        minimapViewVirtualDrone.SetActive(false);
                        minimapViewRealDrone.SetActive(true);
                        //change drone current state
                        gameObject.GetComponent<GameManager>().ChangeDroneState(selectedDrone.GetComponent<DroneController>().droneCurrentState);
                    }
                    return;
                }
            }

            if (allDrones.Length > 0)
            {
                selectedDrone = allDrones[0];
                allDrones[0].GetComponent<DroneController>().isCameraViewActive = true;
                GameObject.Find("Canvas/DroneInfo/InformationText").GetComponent<TextMeshProUGUI>().text = "Drone: " + selectedDrone.GetComponent<DroneController>().droneName;

                //first drone position and Setting the respective camera depeding if the drone is virtual or real
                if (selectedDrone.tag == "virtualDrone")
                {
                    minimapViewVirtualDrone.SetActive(true);
                    minimapViewRealDrone.SetActive(false);
                }
                else if (selectedDrone.tag == "realDroneObject")
                {
                    minimapViewVirtualDrone.SetActive(false);
                    minimapViewRealDrone.SetActive(true);
                    //change drone current state
                    gameObject.GetComponent<GameManager>().ChangeDroneState(selectedDrone.GetComponent<DroneController>().droneCurrentState);
                }
            }
            return;
        }
        else
        {
            //Left button
            for (int i = allDrones.Length-1; i >= 0; i--)
            {
                if (allDrones[i].GetComponent<DroneController>().isCameraViewActive)
                {
                    nextViewAvailable = true;
                    allDrones[i].GetComponent<DroneController>().isCameraViewActive = false;
                    continue;
                }
                else if (!allDrones[i].GetComponent<DroneController>().isCameraViewActive && nextViewAvailable)
                {
                    allDrones[i].GetComponent<DroneController>().isCameraViewActive = true;
                    selectedDrone = allDrones[i];
                    GameObject.Find("Canvas/DroneInfo/InformationText").GetComponent<TextMeshProUGUI>().text = "Drone: " + selectedDrone.GetComponent<DroneController>().droneName;

                    //Setting the respective camera depeding if the drone is virtual or real
                    if (selectedDrone.tag == "virtualDrone")
                    {
                        minimapViewVirtualDrone.SetActive(true);
                        minimapViewRealDrone.SetActive(false);
                    }
                    else if (selectedDrone.tag == "realDroneObject")
                    {
                        minimapViewVirtualDrone.SetActive(false);
                        minimapViewRealDrone.SetActive(true);
                        //change drone current state
                        gameObject.GetComponent<GameManager>().ChangeDroneState(selectedDrone.GetComponent<DroneController>().droneCurrentState);
                    }
                    return;
                }
            }

            //last drone position and Setting the respective camera depeding if the drone is virtual or real
            selectedDrone = allDrones[allDrones.Length-1];
            allDrones[allDrones.Length-1].GetComponent<DroneController>().isCameraViewActive = true;
            GameObject.Find("Canvas/DroneInfo/InformationText").GetComponent<TextMeshProUGUI>().text = "Drone: " + selectedDrone.GetComponent<DroneController>().droneName;

            if (selectedDrone.tag == "virtualDrone")
            {
                minimapViewVirtualDrone.SetActive(true);
                minimapViewRealDrone.SetActive(false);
            }
            else if (selectedDrone.tag == "realDroneObject")
            {
                minimapViewVirtualDrone.SetActive(false);
                minimapViewRealDrone.SetActive(true);
                //change drone current state
                gameObject.GetComponent<GameManager>().ChangeDroneState(selectedDrone.GetComponent<DroneController>().droneCurrentState);
            }
            return;
        }
    }

    #region Drone and Camera configurations
    public void GetDroneAndChangeControl()
    {
        GameObject[] virtualDrones = GameObject.FindGameObjectsWithTag("virtualDrone");
        GameObject[] realDrones = GameObject.FindGameObjectsWithTag("realDroneObject");
        GameObject[] alldrones = virtualDrones.Union(realDrones).ToArray();

        //verify if drone is on manual control (change to auto control)
        foreach (GameObject drone in alldrones)
        {
            if (drone.GetComponent<DroneController>().manualControl == true)
            {
                selectedDrone = drone;
                droneControlButtonManual.SetActive(true);
                listVehicleButton.SetActive(true);
                selectedDrone.GetComponent<DroneController>().changeControl();
                if (drone.tag == "realDroneObject")
                {
                    selectedDrone.GetComponent<DroneController>().droneCurrentState = "virtualSticksOFF";
                    gameObject.GetComponent<WS_Client>().SendInformationArdupilot(selectedDrone, null, null, "virtualSticksOFF");
                }
                return;
            }
        }

        //verify which drone is being visualized for manual control (change to manual control)
        foreach (GameObject drone in alldrones)
        {
            if (drone == selectedDrone)
            {
                selectedDrone = drone;
                droneControlButtonManual.SetActive(false);
                listVehicleButton.SetActive(false);
                selectedDrone.GetComponent<DroneController>().changeControl();
                if (drone.tag == "realDroneObject")
                {
                    selectedDrone.GetComponent<DroneController>().droneCurrentState = "virtualSticksON";
                    gameObject.GetComponent<WS_Client>().SendInformationArdupilot(selectedDrone, null, null, "virtualSticksON");
                }
                return;
            }
        }
    }

    public void CameraView(bool cameraViewEnable)
    {
        GameObject[] virtualDrones = GameObject.FindGameObjectsWithTag("virtualDrone");
        GameObject[] realDrones = GameObject.FindGameObjectsWithTag("realDroneObject");
        GameObject[] alldrones = virtualDrones.Union(realDrones).ToArray();

        if (alldrones.Length > 0)
        {
            if (cameraViewEnable)
            {
                saveSelectedDrone = selectedDrone;
                cameraViewEnablee.SetActive(false);
                cameraViewDisable.SetActive(true);
                minimap.SetActive(false);
                isViewCameraActive = true;
                selectedDrone.GetComponent<DroneController>().isCameraViewActive = true;
                GameObject.Find("Canvas/DroneInfo/InformationText").GetComponent<TextMeshProUGUI>().text = "Drone: " + selectedDrone.GetComponent<DroneController>().droneName;

                if (sceneName == "Visualization")
                {
                    //Setting the respective camera depeding if the drone is virtual or real
                    if (selectedDrone.tag == "virtualDrone")
                    {
                        minimapViewVirtualDrone.SetActive(true);
                        minimapViewRealDrone.SetActive(false);
                    }
                    else if (selectedDrone.tag == "realDroneObject")
                    {
                        minimapViewVirtualDrone.SetActive(false);
                        minimapViewRealDrone.SetActive(true);
                        //change drone current state
                        gameObject.GetComponent<GameManager>().ChangeDroneState(selectedDrone.GetComponent<DroneController>().droneCurrentState);
                    }
                    arrowsMapButtonLeft.SetActive(true);
                    arrowsMapButtonRight.SetActive(true);
                }
                else if (sceneName == "Retrieval")
                {
                    //verify which drone is being visualized for manual control (change to manual control)
                    if (selectedDrone.tag == "virtualDrone")
                    {
                        minimapViewVirtualDrone.SetActive(true);
                        minimapViewRealDrone.SetActive(false);
                    }
                    else if (selectedDrone.tag == "realDroneObject")
                    {
                        minimapViewVirtualDrone.SetActive(false);
                        minimapViewRealDrone.SetActive(true);
                    }
                }
            }
            else
            {
                //Camera of drone is disabled
                selectedDrone.GetComponent<DroneController>().isCameraViewActive = false;
                cameraViewEnablee.SetActive(true);
                cameraViewDisable.SetActive(false);
                minimap.SetActive(true);
                isViewCameraActive = false;
                if (selectedDrone.tag == "virtualDrone")
                    minimapViewVirtualDrone.SetActive(false);
                else if (selectedDrone.tag == "realDroneObject")
                    minimapViewRealDrone.SetActive(false);

                if (sceneName == "Visualization")
                {
                    arrowsMapButtonLeft.SetActive(false);
                    arrowsMapButtonRight.SetActive(false);
                }
                selectedDrone = saveSelectedDrone;
            }
        }
    }

    public void TakeOffLandDrone(bool isTakeOff)
    {
        if (isTakeOff) //take Off Drone
        {
            ChangeDroneState("takeoff");
            if (selectedDrone != null)
            {
                selectedDrone.GetComponent<DroneController>().droneCurrentState = "takeoff";
                gameObject.GetComponent<WS_Client>().SendInformationArdupilot(selectedDrone, null, null, "takeoff");
            }
        }
        else //Land Drone
        {
            ChangeDroneState("land");
            if (selectedDrone != null)
            {
                selectedDrone.GetComponent<DroneController>().droneCurrentState = "motorsON";
                gameObject.GetComponent<WS_Client>().SendInformationArdupilot(selectedDrone, null, null, "land");
            }
        }  
    }

    public void MotorsOnOffDrone(bool isMotorsOn)
    {
        if (isMotorsOn) //Motors ON Drone
        {
            ChangeDroneState("motorsON");
            if (selectedDrone != null)
            {
                selectedDrone.GetComponent<DroneController>().droneCurrentState = "motorsON";
                gameObject.GetComponent<WS_Client>().SendInformationArdupilot(selectedDrone, null, null, "motorsON");
            }
        }
        else //Motors OFF Drone
        {
            ChangeDroneState("motorsOFF");
            if (selectedDrone != null)
            {
                selectedDrone.GetComponent<DroneController>().droneCurrentState = "motorsOFF";
                gameObject.GetComponent<WS_Client>().SendInformationArdupilot(selectedDrone, null, null, "motorsOFF");
            }
        }
    }
    #endregion

    #region UI configurations
    public void LoadScene(string scene)
    {
        SceneManager.LoadScene(scene);
    }

    public void OpenSettings()
    {
        if (isSettingsOpen)
        {
            //close settings
            settingsView.SetActive(false);
            isSettingsOpen = false;
        }
        else
        {
            //open settings
            settingsView.SetActive(true);
            isSettingsOpen = true;
        }
    }

    public void OpenListVehicleView()
    {
        if (isListVehicleOpen)
        {
            //close listVehicleView
            listVehicleView.transform.localScale = new Vector3(0, 0, 0);
            isListVehicleOpen = false;
        }
        else
        {
            //open listVehicleView
            listVehicleView.transform.localScale = new Vector3(0.9f, 0.9f, 0.9f);
            isListVehicleOpen = true;
        }
    }

    public void CloseListVehicleView()
    {
        //close listVehicleView
        listVehicleView.transform.localScale = new Vector3(0, 0, 0);
        isListVehicleOpen = false;
    }

    public void SelectDroneFromListVehicleView()
    {
        if (selectDroneButton.GetComponentInChildren<TextMeshProUGUI>().text == "Select")
        {
            selectedDrone = listVehiclesScript.currentSelectedDrone;

            //close listVehicleView
            listVehicleView.transform.localScale = new Vector3(0, 0, 0);
            isListVehicleOpen = false;

            //clear all drone's area detection
            GameObject[] virtualDrones = GameObject.FindGameObjectsWithTag("virtualDrone");
            foreach (GameObject virtualDrone in virtualDrones)
            {
                virtualDrone.transform.GetChild(0).gameObject.transform.localScale = new Vector3(0, 0, 0); //areaDetection
                if (sceneName == "Visualization")
                    droneControlButtonManual.SetActive(false);
            }
            //change drone current state
            gameObject.GetComponent<GameManager>().ChangeDroneState(selectedDrone.GetComponent<DroneController>().droneCurrentState);
        }
        if (selectDroneButton.GetComponentInChildren<TextMeshProUGUI>().text == "Add")
        {
            string redisAddress = newWSurl.GetComponent<TMP_InputField>().text;

            if (redisAddress != "" && redisAddress != null)
            {
                this.GetComponent<RedisClient>().UpdateRedisConnection(redisAddress);
                newDroneView.SetActive(false);
            }
            else
            {
                messageWS.GetComponent<TextMeshProUGUI>().text = "Please fill all information";
            }
        }
    }

    public void AddHeaderWS()
    {
        Instantiate(keyValueGameObject, new Vector3(0, 0, 0), Quaternion.identity, headersScrollView.transform);
    }

    public void AddDroneView()
    {
        newDroneView.SetActive(true);
        DroneScrollViewInfo.SetActive(false);
        selectDroneButton.GetComponentInChildren<TextMeshProUGUI>().text = "Add";

        //remove green color in list vehicle view
        Color newColor;
        if (ColorUtility.TryParseHtmlString("#FFFFFF", out newColor))
        {
            GameObject[] ListDronesButton = GameObject.FindGameObjectsWithTag("ListDrone");
            foreach (GameObject droneButton in ListDronesButton)
            {
                droneButton.GetComponent<Image>().color = newColor;
            }
        }
    }

    public void RetrieveDroneView()
    {
        if (isRetrievalOpen)
        {
            //close retrievalView
            retrievalView.SetActive(false);
            isRetrievalOpen = false;
        }
        else
        {
            //open retrievalView
            retrievalView.SetActive(true);
            isRetrievalOpen = true;
        }
    }

    private void CleanDroneInformation()
    {
        selectedDrone = null;
        latitudeText.GetComponent<TextMeshProUGUI>().text = "lat: ";
        longitudeText.GetComponent<TextMeshProUGUI>().text = "long: ";
        latitudeDestinyText.GetComponent<TextMeshProUGUI>().text = "lat: ";
        longitudeDestinyText.GetComponent<TextMeshProUGUI>().text = "long: ";
        GameObject.Find("Canvas/DroneInfo/InformationText").GetComponent<TextMeshProUGUI>().text = "Drone: ";
    }

    public void RetrieveYes()
    {
        listVehicleView.transform.localScale = new Vector3(0.9f, 0.9f, 0.9f);
        isRetrievalOpen = false;
        selectedDrone.GetComponent<DroneController>().status = 0;

        GameObject.Find("GameManager").GetComponent<ListVehicles>().changeVehicleList(selectedDrone); 

        CleanDroneInformation();
        retrievalButton.SetActive(false);
        retrievalView.SetActive(false);
    }

    public void RetrieveNo()
    {
        isRetrievalOpen = false;
        retrievalView.SetActive(false);
    }

    public void EnableManualControlButton(bool isActive)
    {
        droneControlButtonManual.SetActive(isActive);
    }

    public void EnableAutoControlButton(bool isActive)
    {
        droneControlButtonAuto.SetActive(isActive);
    }


    public void OpenExtraInfo()
    {
        if (isInfoOpen) {
            //close extra information
            minimap.transform.localScale = new Vector3(0, 0, 0);
            if (sceneName == "Retrieval")
            {
                GPScoordinatesInfo.transform.localScale = new Vector3(0, 0, 0);
            }
            hideInfoButton.SetActive(false);
            isInfoOpen = false;
        }
        else
        {
            //open extra information
            minimap.transform.localScale = new Vector3(1, 1, 1);
            if (sceneName == "Retrieval")
            {
                GPScoordinatesInfo.transform.localScale = new Vector3(1, 1, 1);
            }
            hideInfoButton.SetActive(true);
            isInfoOpen = true;
        }
    }

    public void OpenHelpInfo()
    {
        if (isHelpOpen)
        {
            //close help information
            hideHelpbutton.SetActive(false);
            isHelpOpen = false;
            helpView.SetActive(false);
        }
        else
        {
            //open help information
            hideHelpbutton.SetActive(true);
            isHelpOpen = true;
            helpView.SetActive(true);
        }
    }

    public void ChangeDroneState(string droneCurrentState)
    {
        Color newColor;

        /*if (droneCurrentState == "takeoff")
        {
            if (ColorUtility.TryParseHtmlString("#61DD75", out newColor)) //GREEN
            {
                landButton.GetComponent<Button>().enabled = true;
                landButton.GetComponent<Image>().color = newColor;
            }
            if (ColorUtility.TryParseHtmlString("#CD3639", out newColor)) //RED
            {
                takeOffButton.GetComponent<Image>().color = newColor;
                motorsOffButton.GetComponent<Image>().color = newColor;
            }
        }
        else if (droneCurrentState == "land")
        {
            if (ColorUtility.TryParseHtmlString("#61DD75", out newColor)) //GREEN
            {
                takeOffButton.GetComponent<Button>().enabled = true;
                takeOffButton.GetComponent<Image>().color = newColor;
                motorsOffButton.GetComponent<Button>().enabled = true;
                motorsOffButton.GetComponent<Image>().color = newColor;
            }
            if (ColorUtility.TryParseHtmlString("#CD3639", out newColor)) //RED
            {
                landButton.GetComponent<Image>().color = newColor;
            }
        }
        else if (droneCurrentState == "motorsON")
        {
            if (ColorUtility.TryParseHtmlString("#61DD75", out newColor)) //GREEN
            {
                takeOffButton.GetComponent<Button>().enabled = true;
                takeOffButton.GetComponent<Image>().color = newColor;
                motorsOffButton.GetComponent<Button>().enabled = true;
                motorsOffButton.GetComponent<Image>().color = newColor;
            }
            if (ColorUtility.TryParseHtmlString("#CD3639", out newColor)) //RED
            {
                motorsOnButton.GetComponent<Image>().color = newColor;
            }
        }*/
        if (droneCurrentState == "motorsOFF")
        {
            if (ColorUtility.TryParseHtmlString("#61DD75", out newColor)) //GREEN
            {
                motorsOnButton.GetComponent<Button>().enabled = true;
                motorsOnButton.GetComponent<Image>().color = newColor;
                motorsOffButton.GetComponent<Button>().enabled = true;
                motorsOffButton.GetComponent<Image>().color = newColor;
                takeOffButton.GetComponent<Button>().enabled = true;
                takeOffButton.GetComponent<Image>().color = newColor;
                landButton.GetComponent<Button>().enabled = true;
                landButton.GetComponent<Image>().color = newColor;
            }
            /*if (ColorUtility.TryParseHtmlString("#CD3639", out newColor)) //RED
            {
                motorsOffButton.GetComponent<Image>().color = newColor;
                takeOffButton.GetComponent<Image>().color = newColor;
                landButton.GetComponent<Image>().color = newColor;
            }*/
        }
    }

    #endregion
}