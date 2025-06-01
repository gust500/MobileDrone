using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using StackExchange.Redis;
using System;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.IO;

public class RedisClient : MonoBehaviour
{
    public bool redisConnected;
    public int i = 0;
    public string droneID;
    public string droneName;
    public string droneColor;
    public string battery;
    public string latitude;
    public string longitude;
    public string altitude;
    public string zoom;
    public string mode;
    public string status;
    public bool isDisable;
    private bool droneReady;
    private string sceneName;
    private GameObject[] virtualDrones;
    public GameObject virtualDroneObject;
    private Transform parentDrone;
    public Button buttonVisualization;
    public Button buttonRetrieval;
    public TextMeshProUGUI redisText;
    private float updateDroneTimer = 0f;
    private GameObject latestDroneUpdated;
    private ConnectionMultiplexer redis; // redis client

    public WS_Client wsClient;

    // Mapping from droneID to drone GameObject
    private Dictionary<string, GameObject> dronesByID = new Dictionary<string, GameObject>();

    // --- GPS TO UNITY WORLD CONVERSION ---
    private const double EarthRadius = 6378137.0;

    public static Vector3 GPSPositionToWorld(
        double originLat, double originLon, Vector3 originUnityPos,
        double targetLat, double targetLon, float altitude)
    {
        double dLat = (targetLat - originLat) * Mathf.Deg2Rad;
        double dLon = (targetLon - originLon) * Mathf.Deg2Rad;

        double meanLat = (originLat + targetLat) * 0.5 * Mathf.Deg2Rad;
        double metersPerLat = 111132.954 - 559.822 * Mathf.Cos(2 * meanLat) + 1.175 * Mathf.Cos(4 * meanLat);
        double metersPerLon = (Mathf.PI / 180.0) * EarthRadius * Mathf.Cos(meanLat);

        double deltaNorth = dLat * metersPerLat;
        double deltaEast = dLon * metersPerLon;

        Vector3 offset = new Vector3((float)deltaEast, altitude, (float)deltaNorth);

        return originUnityPos + offset;
    }

    void Start()
    {
        latestDroneUpdated = null;
        redisConnected = false;
        sceneName = SceneManager.GetActiveScene().name;
    }

    private void Update()
    {
        if (redis != null && redis.IsConnected && droneReady)
        {
            changeDroneInformation(); //virtual drone
            droneReady = false;
        }
    }
    
    public void UpdateRedisConnection(string newAddress)
    {
        if (redis != null && redis.IsConnected)
        {
            redis.Close();
        }
        
        try 
        {
            redis = CreateRedisConnection(newAddress);
        }
        catch (Exception e)
        {
            Debug.LogError($"Redis connection failed: {e.Message}");
        }
    
        // Reinitialize Redis functionality
        if (redis.IsConnected && (sceneName == "Visualization" || sceneName == "Retrieval"))
        {
            getRedisData();
        }
        
        if (sceneName == "Visualization" || sceneName == "Retrieval")
        {
            parentDrone = GameObject.Find("Drones").transform;
            droneReady = false;

            if (redis != null && redis.IsConnected)
            {
                redisConnected = true;
                getRedisData();
            }
        }
        else
        {
            if (redis != null && redis.IsConnected)
            {
                buttonVisualization.enabled = true;
                buttonRetrieval.enabled = true;
                buttonVisualization.gameObject.GetComponent<Image>().color = Color.white;
                buttonRetrieval.gameObject.GetComponent<Image>().color = Color.white;
                redisText.text = "Connected to Server";
            }
            else
            {
                redisText.text = "Not Connected to Server";
            }
        }
    }
    
private void UpdateDroneInformation(GameObject drone)
{
    if (drone == null || !AROriginAnchor.originSet)
        return;

    float latitudeDrone = drone.GetComponent<DroneController>().latitudeDrone;
    float longitudeDrone = drone.GetComponent<DroneController>().longitudeDrone;
    float altitudeDrone = drone.GetComponent<DroneController>().altitudeDrone;

    Vector3 targetWorldPos = GPSPositionToWorld(
        AROriginAnchor.originLat, AROriginAnchor.originLon, AROriginAnchor.originUnityPos,
        latitudeDrone, longitudeDrone, altitudeDrone
    );

    // Smooth movement (feel free to tweak 0.2f)
    drone.transform.position = Vector3.Lerp(
        drone.transform.position,
        targetWorldPos,
        0.2f
    );
}


    private void getRedisData()
    {
        ISubscriber subScriber = redis.GetSubscriber();
        
        //Subscribe to the channel "43"
        subScriber.Subscribe("43", (channel, message) =>
        {
            Debug.Log("Message" + message + "received successfully");

            //ID
            var start = message.ToString().IndexOf("_id") + 6;
            droneID = message.ToString().Substring(start, message.ToString().IndexOf(",") - start);
            Debug.Log("ID: " + droneID);

            //Name
            message = message.ToString().Substring(message.ToString().IndexOf("_droneName") + 15);
            droneName = message.ToString().Substring(0, message.ToString().IndexOf(@"\"));
            Debug.Log("Drone Name: " + droneName);

            //Altitude
            message = message.ToString().Substring(message.ToString().IndexOf("_altitude") + 14);
            altitude = message.ToString().Substring(0, message.ToString().IndexOf("\\"));
            Debug.Log("Altitude: " + altitude);

            //Latitude
            message = message.ToString().Substring(message.ToString().IndexOf("lat\\") + 6);
            latitude = message.ToString().Substring(0, message.ToString().IndexOf(","));
            Debug.Log("Latitude: " + latitude);

            //Longitude
            message = message.ToString().Substring(message.ToString().IndexOf("lng\\") + 6);
            longitude = message.ToString().Substring(0, message.ToString().IndexOf("}"));
            Debug.Log("Longitude: " + longitude);

            //Color
            message = message.ToString().Substring(message.ToString().IndexOf("_color") + 11);
            droneColor = message.ToString().Substring(0, message.ToString().IndexOf("\\"));
            Debug.Log("DroneColor: " + droneColor);

            //Battery
            message = message.ToString().Substring(message.ToString().IndexOf("_batteryLevel") + 16);
            battery = message.ToString().Substring(0, message.ToString().IndexOf(","));
            Debug.Log("Battery: " + battery);

            //Level of zoom
            message = message.ToString().Substring(message.ToString().IndexOf("_currentZoom") + 15);
            zoom = message.ToString().Substring(0, message.ToString().IndexOf(","));
            Debug.Log("Zoom: " + zoom);

            //Mode (Main or Boids)
            message = message.ToString().Substring(message.ToString().IndexOf("mode") + 7);
            mode = message.ToString().Substring(0, message.ToString().IndexOf("\""));
            Debug.Log("Mode: " + mode);

            droneReady = true;
        });
    }

    // --- FIXED: One GameObject per droneID ---
    private void changeDroneInformation()
    {
        GameObject drone;
        if (dronesByID.TryGetValue(droneID, out drone) && drone != null)
        {
            attributeInformationToDrone(drone);
        }
        else
        {
            GameObject newDrone = Instantiate(virtualDroneObject, new Vector3(0, 0, 0), Quaternion.identity, parentDrone);
            newDrone.name = "QuadDrone" + i++; // Or just use droneID as the name
            attributeInformationToDrone(newDrone);
            dronesByID[droneID] = newDrone;
            GetComponent<GameManager>().cameraViewEnablee.SetActive(true);
        }
    }

    public void attributeInformationToDrone(GameObject drone)
    {
        float latitudeDrone = float.Parse(latitude, System.Globalization.CultureInfo.InvariantCulture);
        float longitudeDrone = float.Parse(longitude, System.Globalization.CultureInfo.InvariantCulture);
        float altitudeDrone = float.Parse(altitude, System.Globalization.CultureInfo.InvariantCulture);
        float batteryDrone = float.Parse(battery, System.Globalization.CultureInfo.InvariantCulture);
        float zoomDrone = float.Parse(zoom, System.Globalization.CultureInfo.InvariantCulture);

        if (drone != null && AROriginAnchor.originSet)
        {
            // Assign data
            drone.GetComponent<DroneController>().droneID = droneID;
            drone.GetComponent<DroneController>().droneName = droneName;
            drone.GetComponent<DroneController>().latitudeDrone = latitudeDrone;
            drone.GetComponent<DroneController>().longitudeDrone = longitudeDrone;
            drone.GetComponent<DroneController>().altitudeDrone = altitudeDrone;
            drone.GetComponent<DroneController>().droneBattery = batteryDrone;
            drone.GetComponent<DroneController>().zoomDrone = zoomDrone;
            drone.GetComponent<DroneController>().status = int.Parse("1");
            drone.GetComponent<DroneController>().droneColor = droneColor;

            Color newColor;
            if (ColorUtility.TryParseHtmlString(droneColor, out newColor))
            {
                drone.transform.GetChild(1).gameObject.GetComponent<Renderer>().material.color = newColor;
            }

            // --- Set world-space position ---
            Vector3 worldPos = GPSPositionToWorld(
                AROriginAnchor.originLat, AROriginAnchor.originLon, AROriginAnchor.originUnityPos,
                latitudeDrone, longitudeDrone, altitudeDrone
            );
            drone.transform.position = worldPos;

            // If you want to animate, LERP to worldPos instead

            // ListVehicle logic
            ListVehicles listVehiclesScript = GameObject.Find("GameManager").GetComponent<ListVehicles>();
            listVehiclesScript.changeVehicleList(drone);

            latestDroneUpdated = drone;
        }
    }

    private ConnectionMultiplexer CreateRedisConnection(string address)
    {
        return ConnectionMultiplexer.Connect(
            new ConfigurationOptions
            {
                EndPoints = { address },
                AbortOnConnectFail = false,
            });
    }
}
