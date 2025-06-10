using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectMovement : MonoBehaviour
{
    // Set this to the GPS coordinates that correspond to Unity's (0,0,0)
    public double originLatitude = 39.0000;
    public double originLongitude = -8.0000;
    public float unityMetersPerRealMeter = 1f; // scale, adjust if needed

    private Vector3 targetUnityPosition;
    private Vector3 currentVelocity; // for smooth damp
    public float moveSmoothTime = 0.5f; // seconds for smoothing

    void Start()
    {
        targetUnityPosition = transform.position;
    }

    // Call this whenever a new GPS position is received from the UAV-FDG
    public void UpdateTargetPosition(float latitude, float longitude, float altitude = 0f)
    {
        targetUnityPosition = GPSToUnityPosition(latitude, longitude, altitude);
    }

    void Update()
    {
        // Smoothly move towards the target position
        transform.position = Vector3.SmoothDamp(transform.position, targetUnityPosition, ref currentVelocity, moveSmoothTime);
    }

    // Converts GPS to Unity world position using a flat projection (good enough for small areas)
    Vector3 GPSToUnityPosition(double latitude, double longitude, float altitude)
    {
        const double EarthRadius = 6378137.0; // meters (WGS-84)
        double latRad = latitude * Mathf.Deg2Rad;
        double lonRad = longitude * Mathf.Deg2Rad;
        double originLatRad = originLatitude * Mathf.Deg2Rad;
        double originLonRad = originLongitude * Mathf.Deg2Rad;

        // Equirectangular approximation for small areas
        double deltaLat = latRad - originLatRad;
        double deltaLon = lonRad - originLonRad;

        double x = EarthRadius * deltaLon * Mathf.Cos((float)originLatRad);
        double z = EarthRadius * deltaLat;
        float y = altitude; // altitude in meters

        // Apply scaling if needed
        return new Vector3((float)x, y, (float)z) * unityMetersPerRealMeter;
    }
}
