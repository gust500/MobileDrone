using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Arrow : MonoBehaviour
{
    public RedisClient redisClientScript;
    public AugmentedScript augmentedScript;
    public GameManager gameManager;
    public GameObject droneInfo;
    private GameObject distanceTextObject;
    public Quaternion north;
    public float currentLatitude;
    public float currentLongitude;
    public float distanceDrone;
    public bool firstTime;
    public Camera camera;
    private string sceneName;
    private GameObject drone = null;

    // Start is called before the first frame update
    void Start()
    {
        sceneName = SceneManager.GetActiveScene().name;

        firstTime = true;
        distanceTextObject = GameObject.FindGameObjectWithTag("distanceText");

        distanceDrone = 99999;

    }

    // Update is called once per frame
    void Update()
    {
        if (augmentedScript != null && augmentedScript.ready)
        {
            currentLatitude = Input.location.lastData.latitude;
            currentLongitude = Input.location.lastData.longitude;

            GameObject[] virtualDrones = GameObject.FindGameObjectsWithTag("virtualDrone");
            GameObject[] realDrones = GameObject.FindGameObjectsWithTag("realDroneObject");

            if (virtualDrones != null || realDrones != null)
            {
                //get the specific drone
                drone = gameManager.selectedDrone;
                distanceDrone = augmentedScript.Calc(currentLatitude, currentLongitude, drone.GetComponent<DroneController>().latitudeDrone, drone.GetComponent<DroneController>().longitudeDrone);         

                if (drone != null)
                {
                    float latitudeDrone = drone.GetComponent<DroneController>().latitudeDrone;
                    float longitudeDrone = drone.GetComponent<DroneController>().longitudeDrone;

                    //Update distance value (if  drone camera view is not active)
                    if (!gameManager.isViewCameraActive)
                    {
                        distanceTextObject.GetComponent<TextMeshProUGUI>().text = "Distance: " + distanceDrone.ToString("0.000") + "m";
                    }

                    //Update Arrow Direction
                    changeArrow(latitudeDrone, longitudeDrone);

                    //verify if drone is 15 meters or less from the user
                    if (distanceDrone <= 15)
                    {
                        if (sceneName == "Visualization")
                            transform.localScale = new Vector3(0, 0, 0);
                        GameObject.Find("Canvas/DroneInfo/FarAwayText").GetComponent<TextMeshProUGUI>().text = "You are near from your drones";
                    }
                    else
                    {
                        if (sceneName == "Visualization")
                            transform.localScale = new Vector3(100, 100, 100);
                        GameObject.Find("Canvas/DroneInfo/FarAwayText").GetComponent<TextMeshProUGUI>().text = "You are far away from your drones";
                    }
                }             
            }
        }
    }

    public GameObject getselectedDrone()
    {
        //Verify which drone is closer
        /*GameObject selectedDrone = null;
        float currentLatitude = augmentedScript.currentLatitude;
        float currentLongitude = augmentedScript.currentLongitude;
        distanceDrone = 999999999999999;


        //verify first virtual Drones
        GameObject[] virtualDrones = GameObject.FindGameObjectsWithTag("virtualDrone");
        if (virtualDrones != null)
        {
            foreach (GameObject drone in virtualDrones)
            {
                if (drone.GetComponent<DroneController>().name != null)
                {
                    float distance = augmentedScript.Calc(currentLatitude, currentLongitude, drone.GetComponent<DroneController>().latitudeDrone, drone.GetComponent<DroneController>().longitudeDrone);

                    if (distanceDrone > distance)
                    {
                        distanceDrone = distance;
                        selectedDrone = drone;
                    }
                }
            }
        }

        //verify real drones
        GameObject[] realDrones = GameObject.FindGameObjectsWithTag("realDroneObject");
        if (realDrones != null)
        {
            foreach (GameObject drone in realDrones)
            {
                if (drone.GetComponent<DroneController>().droneID != null)
                {
                    float distance = augmentedScript.Calc(currentLatitude, currentLongitude, drone.GetComponent<DroneController>().latitudeDrone, drone.GetComponent<DroneController>().longitudeDrone);

                    if (distanceDrone > distance)
                    {
                        distanceDrone = distance;
                        selectedDrone = drone;
                    }
                }
            }
        }*/
        GameObject selectedDrone = gameManager.selectedDrone;
        return selectedDrone;
    }

    #region ArrowRotation
    private float angleFromCoordinate(float lat1, float long1, float lat2, float long2)
    {
        lat1 *= Mathf.Deg2Rad;
        lat2 *= Mathf.Deg2Rad;
        long1 *= Mathf.Deg2Rad;
        long2 *= Mathf.Deg2Rad;

        float dLon = (long2 - long1);
        float y = Mathf.Sin(dLon) * Mathf.Cos(lat2);
        float x = (Mathf.Cos(lat1) * Mathf.Sin(lat2)) - (Mathf.Sin(lat1) * Mathf.Cos(lat2) * Mathf.Cos(dLon));
        float brng = Mathf.Atan2(y, x);
        brng = Mathf.Rad2Deg * brng;
        brng = (brng + 360) % 360;
        return brng;
    }

    public void changeArrow(float latitudeDrone, float longitudeDrone)
    {
        float bearing = angleFromCoordinate(currentLatitude, currentLongitude, latitudeDrone, longitudeDrone);
        Quaternion cameraRotation = Quaternion.Euler(0, camera.transform.rotation.eulerAngles.y, 0);
        Quaternion compass = Quaternion.Euler(0, -Input.compass.magneticHeading, 0);

        north = Quaternion.Euler(0, cameraRotation.eulerAngles.y + compass.eulerAngles.y + bearing, 0);
        transform.rotation = north;  
    }
    #endregion
}
