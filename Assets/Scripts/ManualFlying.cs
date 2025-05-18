using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ManualFlying : MonoBehaviour
{
    private AugmentedScript augmentedScript;
    private Camera camera;
    private bool firstTime;
    // Start is called before the first frame update
    void Start()
    {
        //Initialization
        augmentedScript = GameObject.Find("ARCamera").GetComponent<AugmentedScript>();
        camera = GameObject.Find("ARCamera").GetComponent<Camera>();
        firstTime = true;
    }

    void Update()
    {
        //place drone to the specific GPS coordinates
        if (augmentedScript.ready && firstTime)
        {
            float latitudeDrone = GetComponent<DroneController>().latitudeDrone;
            float longitudeDrone = GetComponent<DroneController>().longitudeDrone;
            float distance = augmentedScript.Calc(augmentedScript.currentLatitude, augmentedScript.currentLongitude, latitudeDrone, longitudeDrone);
            transform.position = new Vector3(0, 0, 0);
            transform.rotation = getNorth(augmentedScript.currentLatitude, augmentedScript.currentLongitude, latitudeDrone, longitudeDrone);
            transform.Translate(0, 0, distance);
            firstTime = false;
        }
    }

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

    private Quaternion getNorth(float lat1, float long1, float lat2, float long2)
    {
        float bearing = angleFromCoordinate(lat1, long1, lat2, long2);
        Quaternion cameraRotation = Quaternion.Euler(0, camera.transform.rotation.eulerAngles.y, 0);
        Quaternion compass = Quaternion.Euler(0, -Input.compass.magneticHeading, 0);

        return Quaternion.Euler(0, cameraRotation.eulerAngles.y + compass.eulerAngles.y + bearing, 0);
    }
}
