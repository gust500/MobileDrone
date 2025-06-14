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


    public WS_Client wsClient;

    // Start is called before the first frame update
    void Start()
    {
        latestDroneUpdated = null;
        redisConnected = false;
        sceneName = SceneManager.GetActiveScene().name;
        if (sceneName == "Visualization" || sceneName == "Retrieval")
        {
            //Visualization or Retrieval Scene
            parentDrone = GameObject.Find("Drones").transform;
            droneReady = false;
            if (redis.IsConnected)
            {
                //Get Redis Data if redis is connected
                redisConnected = true;
                getRedisData();
            }
        }
        else
        {
            //Home Scene
            if (redis.IsConnected)
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

    private void Update()
    {
        if (droneReady)
        {
            //Change drone Information if we receive drone data from Redis Server
            changeDroneInformation(); //virtual drone
            //wsClient.changeDroneInformationTest(); //real drone
            droneReady = false;
        }        
    }

    private void UpdateDroneInformation(GameObject drone)
    {
        //update drone position with the updated data
        float latitudeDrone = drone.GetComponent<DroneController>().latitudeDrone;
        float longitudeDrone = drone.GetComponent<DroneController>().longitudeDrone;
        float altitudeDrone = drone.GetComponent<DroneController>().altitudeDrone;

        drone.GetComponent<AutomaticFlying>().getNewPositionLocation(latitudeDrone, longitudeDrone, altitudeDrone);
        latestDroneUpdated = drone;
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

    private void changeDroneInformation()
    {
        //verify if drone exists and attribute drone to redis drone and update drone information
        virtualDrones = GameObject.FindGameObjectsWithTag("virtualDrone");
        foreach (GameObject drone in virtualDrones)
        {
            if (drone.GetComponent<DroneController>().droneName == "")
            {
                //if drone exists but information was not attributed, atribute new information to this drone
                drone.GetComponent<DroneController>().droneName = droneName;
            }
            if (drone.GetComponent<DroneController>().droneName == droneName)
            {
                //update drone information data
                attributeInformationToDrone(drone);
                return;
            }
        }

        //Activate view drone camera
        if (virtualDrones == null)
        {
            GetComponent<GameManager>().cameraViewEnablee.SetActive(true);
        }

        //create a new drone (if redis drone data was not attributed)
        GameObject newDrone = Instantiate(virtualDroneObject, new Vector3(0, 0, 0), Quaternion.identity, parentDrone);
        newDrone.name = "QuadDrone" + i++;
        attributeInformationToDrone(newDrone);
        GetComponent<GameManager>().cameraViewEnablee.SetActive(true);
    }

    public void attributeInformationToDrone(GameObject drone)
    {
        //update information of the specific drone (new drone or selected drone)
        float latitudeDrone = float.Parse(latitude, System.Globalization.CultureInfo.InvariantCulture);
        float longitudeDrone = float.Parse(longitude, System.Globalization.CultureInfo.InvariantCulture);
        float altitudeDrone = float.Parse(altitude, System.Globalization.CultureInfo.InvariantCulture);
        float batteryDrone = float.Parse(battery, System.Globalization.CultureInfo.InvariantCulture);
        float zoomDrone = float.Parse(zoom, System.Globalization.CultureInfo.InvariantCulture);

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
;
            drone.GetComponent<DroneController>().droneColor = droneColor;

            Color newColor;
            if (ColorUtility.TryParseHtmlString(droneColor, out newColor))
            {
                //Change drone body material color
                drone.transform.GetChild(1).gameObject.GetComponent<Renderer>().material.color = newColor;             
            }

            //update drone position with the updated data
            drone.GetComponent<AutomaticFlying>().getNewPositionLocation(latitudeDrone, longitudeDrone, altitudeDrone);

            //modify list vehicle view in Retrieval mode
            ListVehicles listVehiclesScript = GameObject.Find("GameManager").GetComponent<ListVehicles>();
            listVehiclesScript.changeVehicleList(drone);

            latestDroneUpdated = drone;
        }
    }

    public void PublishMessage(string channel, object messageData)
    {
        //TODO CHANGE WITH REAL DATA FROM SERVER
        if (redis == null || !redis.IsConnected)
        {
            Debug.LogError("Redis connection not established");
            return;
        }

        var db = redis.GetDatabase();
        db.Publish(channel, JsonUtility.ToJson(messageData));
        Debug.Log($"Sent to Node.js via Redis channel {channel}: {messageData}");
    }


    //connect to Redis client
    static readonly ConnectionMultiplexer redis = ConnectionMultiplexer.Connect(
            new ConfigurationOptions
            {
                EndPoints = { "192.168.11.41:6379" },
                AbortOnConnectFail = false,               
            });
    static async Task Main(string[] args)
    {
        //get redis database to get information from Redis Server
        string sceneName = SceneManager.GetActiveScene().name;
        if (sceneName == "Visualization" || sceneName == "Retrieval")
        {
            var db = redis.GetDatabase();
        }
    }
}
