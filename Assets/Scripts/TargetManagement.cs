using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TargetManagement : MonoBehaviour
{
    private Arrow arrowScript;
    private GameManager gameManager;
    private Camera camera;
    private GameObject droneRealInfo;
    private GameObject areaDetection;
    private GameObject[] virtualDrones;
    private GameObject[] realDrones;
    private string sceneName;

    private GameObject battery;
    public float angle;

    public bool isDroneDetected;

    // Start is called before the first frame update
    void Start()
    {
        //Initialization
        sceneName = SceneManager.GetActiveScene().name;
        if (sceneName == "Visualization")
        {
            battery = GameObject.Find("Canvas/Battery");
            battery.transform.localScale = new Vector3(0, 0, 0);
        }

        arrowScript = GameObject.Find("CanvasArrow/arrow").GetComponent<Arrow>();
        camera = GameObject.Find("ARCamera").GetComponent<Camera>();

        if (gameObject.tag == "virtualDrone")
        {
            areaDetection = transform.GetChild(0).gameObject;
            areaDetection.transform.localScale = new Vector3(0, 0, 0);
        }
        else if (gameObject.tag == "realDroneObject")
        {
            droneRealInfo = GameObject.Find("Canvas/DroneRealInfo");
        }
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
        isDroneDetected = false;
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 directionToObject = transform.position - camera.transform.position;
        angle = Vector3.Angle(camera.transform.forward, directionToObject);

        //verify if drone is the selected one to retrieve
        if (sceneName == "Retrieval" && gameManager.selectedDrone != gameObject)
            return;


        //verify which drone is the nearest (and update information)
        virtualDrones = GameObject.FindGameObjectsWithTag("virtualDrone");
        realDrones = GameObject.FindGameObjectsWithTag("realDroneObject");
        GameObject[] alldrones = virtualDrones.Union(realDrones).ToArray();
        foreach (GameObject drone in alldrones)
        {
            if (drone.name != gameObject.name && angle > drone.GetComponent<TargetManagement>().angle)
            {
                if (gameObject.tag == "virtualDrone")
                {
                    gameObject.transform.GetChild(0).gameObject.transform.localScale = new Vector3(0, 0, 0);
                }
                drone.GetComponent<TargetManagement>().isDroneDetected = false;
                return;
            }
        }

        if (gameManager.cameraViewEnablee.activeSelf && (angle <= camera.fieldOfView / 3))
        {
            GameObject.Find("Canvas/DroneInfo/InformationText").GetComponent<TextMeshProUGUI>().text = "Drone: " + gameObject.GetComponent<DroneController>().droneName;
            if (gameObject.tag == "virtualDrone")
            {
                areaDetection.transform.localScale = new Vector3(1, 0.1f, 0.1f);
            }
            else if (gameObject.tag == "realDroneObject")
            {
                droneRealInfo.transform.localScale = new Vector3(1, 1, 1);
                //GameObject.Find("GameManager").GetComponent<GameManager>().selectedDrone = gameObject;
            }
            isDroneDetected = true;
            if (sceneName == "Visualization")
            {
                battery.transform.localScale = new Vector3(1f, 1f, 1f);
                if (!GetComponent<DroneController>().isManualControl && gameManager.selectedDrone == gameObject)
                {
                    gameManager.EnableManualControlButton(true);
                }
            }
        }
        else
        {
            if (gameObject.tag == "virtualDrone")
                areaDetection.transform.localScale = new Vector3(0, 0, 0);
            else if (gameObject.tag == "realDroneObject")
                droneRealInfo.transform.localScale = new Vector3(0, 0, 0);
            isDroneDetected = false;

            if (sceneName == "Visualization" && gameManager.cameraViewEnablee.activeSelf)
            {
                gameManager.EnableManualControlButton(false);
            }
            else if (sceneName == "Visualization" && !gameManager.cameraViewEnablee.activeSelf)
            {
                gameManager.EnableManualControlButton(true);
            }
        }

        for (int i = 0; i < virtualDrones.Length; i++)
        {
            //Verify if any drone is being detected
            GameObject virtualDrone = virtualDrones[i];
            if (virtualDrone.transform.GetChild(0).gameObject.transform.localScale != new Vector3(0, 0, 0))
            {
                virtualDrone.GetComponent<TargetManagement>().isDroneDetected = true;
                return;
            }
            if (i == virtualDrones.Length - 1)
            {
                //show drone informations
                if (!gameManager.isViewCameraActive && arrowScript.distanceDrone <= 15)
                {
                    if (sceneName == "Visualization")
                        GameObject.Find("Canvas/DroneInfo/InformationText").GetComponent<TextMeshProUGUI>().text = "Drone: ";
                    else
                        GameObject.Find("Canvas/DroneInfo/InformationText").GetComponent<TextMeshProUGUI>().text = "Drone: " + arrowScript.distanceDrone.ToString("0.000") + "m";
                }

                if (sceneName == "Visualization")
                {
                    battery.transform.localScale = new Vector3(0, 0, 0);
                    if (!gameObject.GetComponent<DroneController>().manualControl)
                    {
                        gameManager.EnableManualControlButton(false);
                    }
                }
            }
        }

        for (int i = 0; i < realDrones.Length; i++)
        {
            //Verify if any drone is being detected
            GameObject realDrone = realDrones[i];
            if (realDrone.GetComponent<TargetManagement>().isDroneDetected)
            {
                return;
            }
            if (i == realDrones.Length - 1)
            {
                //show drone informations
                if (!gameManager.isViewCameraActive && arrowScript.distanceDrone <= 15)
                {
                    if (sceneName == "Visualization")
                        GameObject.Find("Canvas/DroneInfo/InformationText").GetComponent<TextMeshProUGUI>().text = "Drone: ";
                    else
                        GameObject.Find("Canvas/DroneInfo/InformationText").GetComponent<TextMeshProUGUI>().text = "Drone: " + arrowScript.distanceDrone.ToString("0.000") + "m";
                }

                if (sceneName == "Visualization")
                {
                    battery.transform.localScale = new Vector3(0, 0, 0);
                }
            }
        }

    }
}
