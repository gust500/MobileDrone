using System.Collections;
using System.Collections.Generic;
using StackExchange.Redis;
using TMPro;
using UnityEngine;

public class AutomaticFlying : MonoBehaviour
{
    private AugmentedScript augmentedScript;
    private float nextLatitude;
    private float nextLongitude;
    private float latitudeDrone; //39.7545206f 39.7325029f
    private float longitudeDrone; //-8.8016551f -8.820128f
    private Camera camera;
    private bool firstTime = true;
    private float distance;

    public void getNewPositionLocation(float latitude, float longitude, float altitude)
    {
        //helpText = GameObject.Find("Canvas/HelpText").GetComponent<TextMeshProUGUI>();

        augmentedScript = GameObject.Find("ARCamera").GetComponent<AugmentedScript>();
        camera = GameObject.Find("ARCamera").GetComponent<Camera>();

        if (augmentedScript != null && augmentedScript.ready)
        {
            if (firstTime)
            {
                //first time to establish drone position
                nextLatitude = latitude;
                nextLongitude = longitude;

                float currentLatitude = Input.location.lastData.latitude;
                float currentLongitude = Input.location.lastData.longitude;
                float distance = augmentedScript.Calc(currentLatitude, currentLongitude, nextLatitude, nextLongitude);
                transform.position = new Vector3(0, 0, 0);
                transform.rotation = getNorth(currentLatitude, currentLongitude, nextLatitude, nextLongitude);
                transform.Translate(0, 0, distance);
                firstTime = false;
            }
            else
            {
                //Update Current and next drone's coordinates
                latitudeDrone = nextLatitude;
                longitudeDrone = nextLongitude;
                nextLatitude = latitude;
                nextLongitude = longitude;

                //Position and rotate drone
                distance = augmentedScript.Calc(latitudeDrone, longitudeDrone, nextLatitude, nextLongitude);
                transform.rotation = getNorth(latitudeDrone, longitudeDrone, nextLatitude, nextLongitude);

                Vector3 movementVector = transform.rotation * new Vector3(0, 0, distance);
                Vector3 finalPosition = transform.position + movementVector;

                transform.Translate(0, 0, distance);
            }
            //change drone altitude
            transform.position = new Vector3(transform.position.x, altitude, transform.position.z);
        }
    }

    IEnumerator MoveToPosition(Vector3 targetPosition, float duration)
    {
        Vector3 startPosition = transform.position;
        float elapsedTime = 0f;

        while (elapsedTime < duration)
        {
            transform.position = Vector3.Lerp(startPosition, targetPosition, elapsedTime / duration);
            elapsedTime += Time.deltaTime;
            yield return null;
        }
        transform.position = targetPosition;
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
