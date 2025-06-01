using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using StackExchange.Redis;
using System;
using System.Threading.Tasks;
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

    // --- ADDED: Mapping from droneID to drone GameObject ---
    private Dictionary<string, GameObject> dronesByID = new Dictionary<string, GameObject>();

    // ---- STATIC AR ORIGIN for GPS conversion ----
    public static double originLat;
    public static double originLon;
    public static Vector3 originUnityPos;
    public static bool originSet = false;

    // ---- Set AR Origin when AR is ready ----
    // Call this ONCE when your AR session starts and the camera is in place
    // E.g., in a suitable AR-ready callback
    public void SetAROriginIfReady()
    {
        if (!originSet && Input.location.status == LocationServiceStatus.Running)
        {
            originLat = Input.location.lastData.latitude;
            originLon = Input.location.lastData.longitude;
            // You can use ARCamera.transform.position here
            originUnityPos = Camera.main.transform.position;
            originSet = true;
            Debug.Log($"[AROrigin] Origin set: {originLat},{originLon} -> {originUnityPos}");
        }
    }

    // --- GPS to Unity world conversion ---
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

        Vector3 offset = new Vector3(deltaEast, altitude, deltaNorth);
        return originUnityPos + offset;
    }

    // Start is called before the first frame update
    void Start()
    {
        latestDroneUpdated = null;
        redisConnected = false;
        sceneName = SceneManager.GetActiveScene().name;

        // Try to set AR origin here if AR is ready at Start, or call from your AR setup code
        SetAROriginIfReady();
    }

    private void Update()
    {
        // Optionally re-try setting the origin if not set yet and AR is ready
        if (!originSet && Input.location.status == LocationServiceStatus.Running)
            SetAROriginIfReady();

        if (redis != null && redis.IsConnected && droneReady)
        {
            //Change drone Information if we receive drone data from Redis Server
            changeDroneInformation(); //virtual drone
            //wsClient.changeDroneInformationTest(); //real drone
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
            // Update UI to show connection failure
        }

        // Reinitialize Redis functionality
        if (redis.IsConnected && (sceneName == "Visualization" || sceneName == "Retrieval"))
        {
            getRedisData();
        }

        if (sceneName == "Visualization" || sceneName == "Retrieval")
        {
            //Visualization or Retrieval Scene
            parentDrone = GameObject.Find("Drones").transform;
            droneReady = false;

            if (redis != null && redis.IsConnected)
            {
                //Get Redis Data if redis is connected
                redisConnected = true;
                getRedisData();
            }
        }
        else
        {
            //Home Scene
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
                /*buttonVisualization.enabled = false;
                buttonRetrieval.enabled = false;
                buttonVisualization.gameObject.GetComponent<Image>().color = Color.gray;
                buttonRetrieval.gameObject.GetComponent<Image>().color = Color.gray;*/
                redisText.text = "Not Connected to Server";
            }
        }
    }

    private void UpdateDroneInformation(GameObject drone)
    {
        // NOT USED with GPS world positioning; you can LERP here if you want smooth movement
    }

    private void getRedisData()
    {
        ISubscriber subScriber = redis.GetSubscriber();

        //Subscribe to the channel "43"
        subScriber.Subscribe("43", (channel, message) =>
        {
            //Output received message from VARCAM (Redis Server)
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
            // Update existing drone's data
            attributeInformationToDrone(drone);
        }
        else
        {
            // Instantiate a new drone and track it by ID
            GameObject newDrone = Instantiate(virtualDroneObject, new Vector3(0, 0, 0), Quaternion.identity, parentDrone);
            newDrone.name = "QuadDrone" + i++; // Or just use droneID as the name
            attributeInformationToDrone(newDrone);
            dronesByID[droneID] = newDrone;
            GetComponent<GameManager>().cameraViewEnablee.SetActive(true);
        }
    }

    public void attributeInformationToDrone(GameObject drone)
    {
        double latitudeDrone = latitude, System.Globalization.CultureInfo.InvariantCulture;
        double longitudeDrone = longitude, System.Globalization.CultureInfo.InvariantCulture;
        double altitudeDrone = altitude, System.Globalization.CultureInfo.InvariantCulture;
        float batteryDrone = parse.float(battery, System.Globalization.CultureInfo.InvariantCulture);
        float zoomDrone = zoom, parse.float(System.Globalization.CultureInfo.InvariantCulture);

        if (drone != null)
        {
            //attribute data to the specific drone
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
                //Change drone body material color
                drone.transform.GetChild(1).gameObject.GetComponent<Renderer>().material.color = newColor;
            }

            // ------- CRUCIAL PART: GPS to Unity world placement ---------
            if (originSet)
            {
                Vector3 worldPos = GPSPositionToWorld(
                    originLat, originLon, originUnityPos,
                    latitudeDrone, longitudeDrone, altitudeDrone
                );
                drone.transform.position = worldPos;
            }
            // -----------------------------------------------------------

            //modify list vehicle view in Retrieval mode
            ListVehicles listVehiclesScript = GameObject.Find("GameManager").GetComponent<ListVehicles>();
            listVehiclesScript.changeVehicleList(drone);

            latestDroneUpdated = drone;
        }
    }

    //connect to Redis client
    private ConnectionMultiplexer CreateRedisConnection(string address)
    {
        return ConnectionMultiplexer.Connect(
            new ConfigurationOptions
            {
                EndPoints = { address },
                AbortOnConnectFail = false,
            });
    }
    /*static async Task Main(string[] args)
    {
        //get redis database to get information from Redis Server
        string sceneName = SceneManager.GetActiveScene().name;
        if (sceneName == "Visualization" || sceneName == "Retrieval")
        {
            var db = redis.GetDatabase();
        }
    }*/
}
