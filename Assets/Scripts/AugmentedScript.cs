using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using TMPro;

public class AugmentedScript : MonoBehaviour
{
    public float currentLatitude;
    public float currentLongitude;
    public float latitudeDrone; //39.7545206f 39.7325029f
    public float longitudeDrone; //-8.8016551f -8.820128f
    public double distance;
    public bool ready = false;

    void Start()
    {
        //get distance text reference
        StartCoroutine("GetCoordinates");
    }

    IEnumerator GetCoordinates()
    {
        //while true so this function keeps running once started.
        while (true)
        {
            // check if user has location service enabled
            if (!Input.location.isEnabledByUser) yield break;

            // Start service before querying location
            Input.location.Start(1f, .1f);
            Input.compass.enabled = true;
            Input.gyro.enabled = true;


            // Wait until service initializes
            int maxWait = 20;
            while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
            {
                maxWait--;
                yield return new WaitForSeconds(1);
            }

            // Service didn't initialize in 20 seconds
            if (maxWait < 1)
            {
                Debug.Log("Timed out");
                yield break;
            }

            // Connection has failed
            if (Input.location.status == LocationServiceStatus.Failed)
            {
                Debug.Log("Unable to determine device location");
                yield break;
            }
            else
            {
                //overwrite current lat and lon everytime
                currentLatitude = Input.location.lastData.latitude;
                currentLongitude = Input.location.lastData.longitude;
                ready = true;
            }
            //Input.location.Stop();
        }
    }


    //calculates distance between two sets of coordinates, taking into account the curvature of the earth.
    public float Calc(float lat1, float lon1, float lat2, float lon2)
    {

        var R = 6378.137; // Radius of earth in KM
        var dLat = lat2 * Mathf.PI / 180 - lat1 * Mathf.PI / 180;
        var dLon = lon2 * Mathf.PI / 180 - lon1 * Mathf.PI / 180;
        float a = Mathf.Sin(dLat / 2) * Mathf.Sin(dLat / 2) + Mathf.Cos(lat1 * Mathf.PI / 180) * Mathf.Cos(lat2 * Mathf.PI / 180) * Mathf.Sin(dLon / 2) * Mathf.Sin(dLon / 2);
        var c = 2 * Mathf.Atan2(Mathf.Sqrt(a), Mathf.Sqrt(1 - a));
        distance = R * c;
        distance = distance * 1000f; // meters

        return (float)distance;
    }
}