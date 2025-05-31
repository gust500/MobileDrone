using System.Collections;
using System.Collections.Generic;
using StackExchange.Redis;
using TMPro;
using UnityEngine;

public class AutomaticFlying : MonoBehaviour
{
    // Static AR Origin (shared across all drones)
    private static bool originSet = false;
    private static float arOriginLat, arOriginLon;

    // Cache for AugmentedScript and Camera (optional: cache only once for performance)
    private AugmentedScript augmentedScript;
    private Camera camera;

    public void getNewPositionLocation(float latitude, float longitude, float altitude)
    {
        // Get references (cache if you prefer)
        if (augmentedScript == null)
            augmentedScript = GameObject.Find("ARCamera").GetComponent<AugmentedScript>();
        if (camera == null)
            camera = GameObject.Find("ARCamera").GetComponent<Camera>();

        // Only proceed if AR is ready and location services are running
        if (augmentedScript != null && augmentedScript.ready && Input.location.status == LocationServiceStatus.Running)
        {
            // --- Set AR Origin on first use ---
            if (!originSet)
            {
                arOriginLat = Input.location.lastData.latitude;
                arOriginLon = Input.location.lastData.longitude;
                originSet = true;
            }

            // --- Calculate Offset from AR Origin ---
            float[] meters = CalculateOffset(arOriginLat, arOriginLon, latitude, longitude);

            // --- Set Drone Position ---
            // X = East/West, Y = Altitude, Z = North/South
            transform.localPosition = new Vector3(meters[1], altitude, meters[0]);
        }
    }

    // Returns [northMeters, eastMeters]
    private float[] CalculateOffset(float lat1, float lon1, float lat2, float lon2)
    {
        float earthRadius = 6378137f; // meters

        float dLat = Mathf.Deg2Rad * (lat2 - lat1);
        float dLon = Mathf.Deg2Rad * (lon2 - lon1);

        float avgLat = Mathf.Deg2Rad * ((lat1 + lat2) / 2.0f);

        // Equirectangular approximation
        float north = dLat * earthRadius;
        float east = dLon * earthRadius * Mathf.Cos(avgLat);

        return new float[] { north, east };
    }

    // (Optional) For compatibility, keep rotation logic if needed
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

    // (Optional) You can delete MoveToPosition and legacy variables if unused.
}
