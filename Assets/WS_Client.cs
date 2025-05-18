using SocketIOClient;
using SocketIOClient.Newtonsoft.Json;
using StackExchange.Redis;
using System;
using System.Collections.Generic;
using System.Net;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.Net.WebSockets;
using System.Net.Http;
using System.Threading;
using System.Threading.Tasks;
using System.Text;
using TMPro;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using System.Globalization;
using System.IO;

public class WS_Client : MonoBehaviour
{
    public TextMeshProUGUI helpText;
    private float userTimer = 0f;
    public AugmentedScript augmentedScript;

    public SocketIOUnity socket;
    private ClientWebSocket ws;
    public string realDroneURL = "wss://server.marques576.eu.org/";
    private string droneID;
    private string droneSerialNumber;
    private string battery;
    private string latitude;
    private string longitude;
    private string altitude;
    private string zoom;
    private string status;
    private int i = 0;
    private int maxRetries = 5;
    public GameObject messageWS;

    public GameObject realDroneObject;
    private Transform parentDrone;

    private string sceneName;
    private ClientWebSocket client;
 
    private bool realDroneSocketReady = false;

    private DateTime dateTimeSender;
    private DateTime dateTimeReceiver;
    private string logData;

    [System.Serializable]
    public class WebSocketMessage
    {
        public string dboidsId;
        public string payload;
    }

    [Serializable]
    public class UserLocationData
    {
        public int userId;
        public float latitudePerson;
        public float longitudePerson;
    }

    private void OnApplicationQuit()
    {
        client.CloseAsync(WebSocketCloseStatus.NormalClosure, "Closing connection", CancellationToken.None);
    }

    private void Update()
    {
        //Client testing
        userTimer += Time.deltaTime;
        if (userTimer >= 1f)
        {
            if (socket != null && socket.Connected)
            {
                string message = "" +
                    "{\"userId\": 43," +
                    "\"latitudePerson\": \"0\"," +
                    "\"longitudePerson\": \"0\"}";
                socket.EmitStringAsJSON("update_drone_info", message);

                //Debug.Log(message);
                userTimer = 0f;
            }
        }
    }

    private async void Start()
    {
        sceneName = SceneManager.GetActiveScene().name;
        if (sceneName == "Visualization" || sceneName == "Retrieval")
        {
            //Visualization or Retrieval Scene
            parentDrone = GameObject.Find("Drones").transform;
        }


        #region Virtual Drone
        //Connect to websocket IO (VIRTUAL DRONE)
        var uri = new Uri("ws://localhost:3000/"); //   var uri = new Uri("ws://164.90.189.212:3000/");
        socket = new SocketIOUnity(uri, new SocketIOOptions
        {
            Query = new Dictionary<string, string>{{"token", "UNITY" }},
            Transport = SocketIOClient.Transport.TransportProtocol.WebSocket
        });

        socket.Connect();
        socket.OnConnected += (sender, e) =>
        {
            Debug.Log("socket.OnConnected");
        };
        #endregion


        #region Real Drone (test connection)
        //Connect to websocket (REAL DRONE)
        /*client = new ClientWebSocket();
        client.Options.SetRequestHeader("dboidsID", "0");
        Uri serverUri;

        if (realDroneURL != null)
        {
            serverUri = new Uri(realDroneURL);
        }
        else
        {
            serverUri = new Uri("ws://10.79.179.1/dronepark/k3s-core1/dji/none/");
        }
        try
        {
            await client.ConnectAsync(serverUri, CancellationToken.None);

            if (client.State == WebSocketState.Open)
            {
                Debug.Log("Connected to server");
                await ReceiveMessage(client);
                await SendMessage(client, "Connected to ARUAV");
            }
            else
            {
                Debug.LogWarning("Failed to connect to server");
            }
        }
        catch (Exception e)
        {
            Debug.LogWarning($"Error connecting to server: {e.Message}");
        }*/

        #endregion
    }

    #region Add new WS connection
    public async void NewConnectionWS(string urlWS, List<KeyValuePair<string, string>> keyValuePairs)
    {
        //Connect to websocket (REAL DRONE)
        client = new ClientWebSocket();
        foreach (KeyValuePair<string, string> kvp in keyValuePairs)
        {
            client.Options.SetRequestHeader(kvp.Key, kvp.Value);
        }

        Uri serverUri = null;
        try
        {
            serverUri = new Uri(urlWS);
            messageWS.GetComponent<TextMeshProUGUI>().text = "";
        }
        catch (UriFormatException e)
        {
            Debug.LogError("Error creating URI: " + e.Message);
            messageWS.GetComponent<TextMeshProUGUI>().text = "Error creating URI: " + e.Message;
        }

        try
        {
            await client.ConnectAsync(serverUri, CancellationToken.None);

            if (client.State == WebSocketState.Open)
            {
                Debug.Log("Connected to server with the WS URL: " + serverUri);
                await ReceiveMessage(client);
                await SendMessage(client, "Connected to ARUAV");

            }
            else
            {
                messageWS.GetComponent<TextMeshProUGUI>().text = "Fail to Connect to Websocket server";
                Debug.LogWarning("Failed to connect to server");
            }
        }
        catch (Exception e)
        {
            messageWS.GetComponent<TextMeshProUGUI>().text = "Error Connecting to Websocket server";
            Debug.LogWarning($"Error connecting to server: {e.Message}");
        }

    }
    #endregion

    #region Receive and Send Message (real drone)
    private async Task ReceiveMessage(ClientWebSocket client)
    {
        var buffer = new byte[1024];
        try {
            while (client.State == WebSocketState.Open)
            {
                var result = await client.ReceiveAsync(new ArraySegment<byte>(buffer), CancellationToken.None);
                if (result.MessageType == WebSocketMessageType.Text)
                {
                    string message = Encoding.UTF8.GetString(buffer, 0, result.Count);
                    if (message != null)
                    {
                        //Debug.Log($"Received message: {message}");

                        if (!message.Contains("timer"))
                        {
                            getRealDroneData(message);
                        }
                        else
                        {
                            //string messageToGazebo = message.Replace("\"mobile\":\"false\"", "\"mobile\":\"true\"");
                            //await SendMessage(client, messageToGazebo); //ping

                            //LogMessageTime(message);
                        }

                        //SAVE FILE
                        //LogMessageTime(true);
                    }
                }
                else if (result.MessageType == WebSocketMessageType.Close)
                {
                    await client.CloseAsync(WebSocketCloseStatus.NormalClosure, string.Empty, CancellationToken.None);
                }
            }
        }
        catch (Exception e)
        {
            Debug.LogError($"Error receiving message: {e.Message}");
            Debug.LogError($"WebSocket State: {client.State}");
        }
    }

    public async Task SendMessage(ClientWebSocket client, string message)
    {
        try
        {
            if (client.State == WebSocketState.Open)
            {
                // Convert the message to bytes
                byte[] messageBytes = Encoding.UTF8.GetBytes(message);

                // Create a buffer to hold the message data
                var buffer = new ArraySegment<byte>(messageBytes);

                // Send the message
                await client.SendAsync(buffer, WebSocketMessageType.Text, true, CancellationToken.None);

                Debug.Log($"Sent message: {message}");

                GetComponent<GameManager>().DroneScrollViewInfo.SetActive(true);
                GetComponent<GameManager>().selectDroneButton.GetComponentInChildren<TextMeshProUGUI>().text = "Select";
                messageWS.GetComponent<TextMeshProUGUI>().text = "";
            }
            else
            {
                Debug.LogWarning("WebSocket connection is not open. Cannot send message.");
                messageWS.GetComponent<TextMeshProUGUI>().text = "WebSocket connection is not open. Cannot send message.";
                GetComponent<GameManager>().newDroneView.SetActive(true);
            }
        }
        catch (Exception e)
        {
            Debug.LogWarning($"Error sending message: {e.Message}");
        }
    }
    #endregion


    #region Send information to drone (VARCAM)
    public void SendControlInformationVARCAM(GameObject drone, FixedJoystick joyStickDirection, FixedJoystick joyStickUpDownRotation, bool isManual)
    {
        string id = drone.GetComponent<DroneController>().droneID;
        string name = drone.GetComponent<DroneController>().droneName;
        float latitude = drone.GetComponent<DroneController>().latitudeDrone;
        float longitude = drone.GetComponent<DroneController>().longitudeDrone;
        float altitude = drone.GetComponent<DroneController>().altitudeDrone;

        //virtual drone (VARCAM)
        if (socket.Connected)
        {
            string message = "" +
                "{\"userId\": 43," +
                "\"id\": \"" + id + "\"," +
                "\"droneName\": \"" + name + "\"," +
                "\"lat\": \"" + latitude + "\"," +
                "\"lng\": \"" + longitude + "\"," +
                "\"altitude\": \"" + altitude + "\"," +
                "\"joyStickDirection\": \"" + joyStickDirection.ToString() + "\"," +
                "\"joyStickUpDownRotation\": \"" + joyStickUpDownRotation.ToString() + "\"," +
                "\"IsManual\": \"" + isManual.ToString() + "\"}";
            socket.EmitStringAsJSON("update_drone_info", message);
            Debug.Log("Sent message: " + message);
        }
    }
    #endregion

    #region Send information to drone (ARDUPILOT)
    public async void SendInformationArdupilot(GameObject drone, FixedJoystick joyStickDirection, FixedJoystick joyStickUpDownRotation, string droneFunction)
    {
        if (drone != null)
        {
            string id = drone.GetComponent<DroneController>().droneID;
            string name = drone.GetComponent<DroneController>().droneName;
            float latitude = drone.GetComponent<DroneController>().latitudeDrone;
            float longitude = drone.GetComponent<DroneController>().longitudeDrone;
            float altitude = drone.GetComponent<DroneController>().altitudeDrone;

            if (client.State == WebSocketState.Open)
            {
                Debug.Log("Client State OPEN");
                string message = "";
                if (droneFunction == "takeoff")
                {
                    message = "" +
                           "{\"userId\":\"" + id + "\"," +
                           "\"message\":{" +
                           "\"command\":\"takeoff\"" +
                           "}}";
                }
                else if (droneFunction == "land")
                {
                    message = "" +
                           "{\"userId\":\"" + id + "\"," +
                           "\"message\":{" +
                           "\"command\":\"land\"" +
                           "}}";
                }
                else if (droneFunction == "motorsON") //working
                {
                    message = "" +
                            "{\"userId\":\"" + id + "\"," +
                            "\"message\":{" +
                            "\"command\":\"motors\"," +
                            "\"state\":" + "true" +
                            "}}";
                }
                else if (droneFunction == "motorsOFF")
                {
                    message = "" +
                            "{\"userId\":\"" + id + "\"," +
                            "\"message\":{" +
                            "\"command\":\"motors\"," +
                            "\"state\":" + "false" +
                            "}}";
                }
                else if (droneFunction == "virtualSticksON")
                {
                    message = "" +
                            "{\"userId\":\"" + id + "\"," +
                            "\"message\":{" +
                            "\"command\":\"virtualSticks\"," +
                            "\"state\":" + "true" +
                            "}}";
                }
                else if (droneFunction == "virtualSticksOFF")
                {
                    message = "" +
                            "{\"userId\":\"" + id + "\"," +
                            "\"message\":{" +
                            "\"command\":\"virtualSticks\"," +
                            "\"state\":" + "false" +
                            "}}";
                }
                else if (droneFunction == "virtualSticksInput")
                {
                    message = "" +
                            "{\"userId\":\"" + id + "\"," +
                            "\"message\":{" +
                            "\"command\":\"virtualSticksInput\"," +
                            "\"yaw\":" + joyStickUpDownRotation.Horizontal.ToString().Replace(",", ".") + "," +
                            "\"pitch\":" + joyStickDirection.Vertical.ToString().Replace(",", ".") + "," +
                            "\"throttle\":" + joyStickUpDownRotation.Vertical.ToString().Replace(",", ".") + "," +
                            "\"roll\":" + joyStickDirection.Horizontal.ToString().Replace(",", ".") +
                            "}}";
                    //Debug.Log(message);
                }

                await SendMessage(client, message);

                //Send Message Timer
                string messageTime = "" +
                            "{\"userId\":\"" + id + "\"," +
                            "\"message\":{" +
                            "\"command\":\"" + "timer" + "\"," +
                            "\"timer\":\"" + DateTime.UtcNow.ToString() + "\"" +
                            "}}";

                Debug.Log(messageTime);
                await SendMessage(client, messageTime);
            }
        }
    }
    #endregion

    #region websocket real drone
    private void getRealDroneData(string message)
    {
        //Output received message
        //Debug.Log("Message" + message + "received successfully");

        if (!message.Contains("command"))
        {
            //Serial Number
            var start = message.ToString().IndexOf("\"userId\":") + 10;
            var end = message.IndexOf(",");
            droneID = message.ToString().Substring(start, end - start-1);
            //Debug.Log("Id: " + droneID);

            //Latitude
            message = message.ToString().Substring(message.ToString().IndexOf("lat") + 5);
            latitude = message.ToString().Substring(0, message.ToString().IndexOf(","));
            //Debug.Log("Latitude: " + latitude.ToString());

            //Longitude
            message = message.ToString().Substring(message.ToString().IndexOf("lng") + 5);
            longitude = message.ToString().Substring(0, message.ToString().IndexOf(","));
            //Debug.Log("Longitude: " + longitude);

            //Altitude
            message = message.ToString().Substring(message.ToString().IndexOf("alt") + 5);
            altitude = message.ToString().Substring(0, message.ToString().IndexOf(","));
            //Debug.Log("Altitude: " + altitude);
 
            //Battery
            message = message.ToString().Substring(message.ToString().IndexOf("batLvl") + 8);
            battery = message.ToString().Substring(0, message.ToString().IndexOf(","));
            //Debug.Log("Battery: " + battery);

            //Level of zoom
            //message = message.ToString().Substring(message.ToString().IndexOf("_currentZoom") + 15);
            //zoom = message.ToString().Substring(0, message.ToString().IndexOf("}"));
            zoom = "20";
            //Debug.Log("Zoom: " + zoom);

            changeDroneInformation();
        }
    }

    public void changeDroneInformation()
    {
        //verify if drone exists and attribute drone to redis drone and update drone information
        GameObject[] realDrones = GameObject.FindGameObjectsWithTag("realDroneObject");
        foreach (GameObject drone in realDrones)
        {
            if (drone.GetComponent<DroneController>().droneID == "")
            {
                //if drone exists but information was not attributed, atribute new information to this drone
                drone.GetComponent<DroneController>().droneID = droneID;
            }
            if (drone.GetComponent<DroneController>().droneID == droneID)
            {
                //update drone information data
                attributeInformationToDroneObject(drone);
                return;
            }
        }

        Debug.Log("Real Drones length: " + realDrones.Length);
        //Activate view drone camera
        if (realDrones.Length == 0)
        {
            GetComponent<GameManager>().cameraViewEnablee.SetActive(true);
        }

        //create a new drone (if real drone data was not attributed)
        GameObject newDrone = Instantiate(realDroneObject, new Vector3(0, 0, 0), Quaternion.identity, parentDrone);
        newDrone.name = "realDrone" + i++;
        newDrone.GetComponent<DroneController>().droneCurrentState = "motorsOFF";
        attributeInformationToDroneObject(newDrone);
    }

    public void attributeInformationToDroneObject(GameObject drone)
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
            drone.GetComponent<DroneController>().droneName = droneID;
            drone.GetComponent<DroneController>().latitudeDrone = latitudeDrone;
            drone.GetComponent<DroneController>().longitudeDrone = longitudeDrone;
            drone.GetComponent<DroneController>().altitudeDrone = altitudeDrone;
            drone.GetComponent<DroneController>().droneBattery = batteryDrone;
            drone.GetComponent<DroneController>().zoomDrone = zoomDrone;
            drone.GetComponent<DroneController>().status = int.Parse("1");

            //update drone position with the updated data
            drone.GetComponent<AutomaticFlying>().getNewPositionLocation(latitudeDrone, longitudeDrone, altitudeDrone);

            ListVehicles listVehiclesScript = GameObject.Find("GameManager").GetComponent<ListVehicles>();
            listVehiclesScript.changeVehicleList(drone);

        }
    }
    #endregion


    #region Test File Websockets
    private void LogMessageTime(string message)
    {
        JObject jsonObject = JObject.Parse(message);
        string timer1String = jsonObject["message"]["timer"].ToString();
        DateTime timer1 = DateTime.Parse(timer1String);
        DateTime timer2 = DateTime.UtcNow;

        TimeSpan timeDiff = timer2 - timer1;
        TimeSpan halfTimeDiff = timeDiff / 2;

        Debug.Log("Average Time: " + halfTimeDiff.TotalSeconds.ToString());
        logData = halfTimeDiff.TotalSeconds.ToString() + "\n";

        //SAVE FILE
        string fileName = "saveDataCommand.txt";
        string relPath = Path.Combine(Application.persistentDataPath, "Saves");

        // Ensure the directory exists
        if (!Directory.Exists(relPath))
        {
            Directory.CreateDirectory(relPath);
        }

        // Full path to the file
        string filePath = Path.Combine(relPath, fileName);

        // Write data to the file
        File.AppendAllText(filePath, logData);

        Debug.Log("File written to: " + filePath);
        

        //helpText.text = "File written to: " + logData.ToString();
    }
    #endregion

    #region TEST
    public void changeDroneInformationTest()
    {
        RedisClient redis = gameObject.GetComponent<RedisClient>();
        //verify if drone exists and attribute drone to redis drone and update drone information
        GameObject[] realDrones = GameObject.FindGameObjectsWithTag("realDroneObject");
        foreach (GameObject drone in realDrones)
        {
            if (drone.GetComponent<DroneController>().droneID == "")
            {
                //if drone exists but information was not attributed, atribute new information to this drone
                drone.GetComponent<DroneController>().droneID = droneSerialNumber;
            }
            if (drone.GetComponent<DroneController>().droneID == redis.droneID)
            {
                attributeInformationToDroneObjectTest(drone);
                return;
            }
        }

        //create a new drone (if real drone data was not attributed)
        GameObject newDrone = Instantiate(realDroneObject, new Vector3(0, 0, 0), Quaternion.identity, parentDrone);
        newDrone.name = "realDrone" + i++;
        attributeInformationToDroneObjectTest(newDrone);
    }


    private void attributeInformationToDroneObjectTest(GameObject drone)
    {
        RedisClient redis = gameObject.GetComponent<RedisClient>();
        //update information of the specific drone (new drone or selected drone)
        float latitudeDrone = float.Parse(redis.latitude, System.Globalization.CultureInfo.InvariantCulture);
        float longitudeDrone = float.Parse(redis.longitude, System.Globalization.CultureInfo.InvariantCulture);
        float altitudeDrone = float.Parse(redis.altitude, System.Globalization.CultureInfo.InvariantCulture);
        float batteryDrone = float.Parse(redis.battery, System.Globalization.CultureInfo.InvariantCulture);
        float zoomDrone = float.Parse(redis.zoom, System.Globalization.CultureInfo.InvariantCulture);

        if (drone != null)
        {
            //attribute data to the specific drone
            drone.GetComponent<DroneController>().droneID = redis.droneID;
            drone.GetComponent<DroneController>().latitudeDrone = latitudeDrone;
            drone.GetComponent<DroneController>().longitudeDrone = longitudeDrone;
            drone.GetComponent<DroneController>().altitudeDrone = altitudeDrone;
            drone.GetComponent<DroneController>().droneBattery = batteryDrone;
            drone.GetComponent<DroneController>().zoomDrone = zoomDrone;
            drone.GetComponent<DroneController>().status = int.Parse("1");

            //update drone position with the updated data
            drone.GetComponent<AutomaticFlying>().getNewPositionLocation(latitudeDrone, longitudeDrone, altitudeDrone);

            //modify list vehicle view in Retrieval mode
   
            ListVehicles listVehiclesScript = GameObject.Find("GameManager").GetComponent<ListVehicles>();
            listVehiclesScript.changeVehicleList(drone);
            
        }
    }

    #endregion
}
