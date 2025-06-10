using UnityEngine;
using System.Linq;

/// <summary>
/// Arrow points toward a target drone based on GPS bearing and device compass.
/// Any drone GameObject must have a component implementing IGpsProvider.
/// </summary>
public class Arrow : MonoBehaviour
{
    [Tooltip("Threshold (in meters) to consider a drone 'near'.")]
    public float retrievalRadius = 15f;

    [Tooltip("User's current latitude (set externally or via location service)")]
    public float currentLatitude;

    [Tooltip("User's current longitude (set externally or via location service)")]
    public float currentLongitude;

    [Tooltip("Reference to the GameManager that holds the selected drone")]
    public GameManager gameManager;

    private GameObject drone;

    // ADD THIS PROPERTY:
    public float distanceDrone { get; private set; }

    void Start()
    {
        // Enable device compass for heading information
        Input.compass.enabled = true;
    }

    void Update()
    {
        // Fetch the currently selected drone from GameManager
        drone = gameManager?.selectedDrone;
        if (drone == null) return;

        // Try to get any MonoBehaviour on the drone that implements IGpsProvider
        var gpsProvider = drone.GetComponents<MonoBehaviour>().OfType<IGpsProvider>().FirstOrDefault();
        if (gpsProvider == null)
        {
            Debug.LogWarning("Selected drone missing IGpsProvider component.");
            return;
        }

        // UPDATE THE DISTANCE every frame
        distanceDrone = CalculateDistance(
            currentLatitude, currentLongitude,
            gpsProvider.latitude, gpsProvider.longitude
        );

        // Rotate arrow toward the drone's GPS position
        changeArrow(gpsProvider.latitude, gpsProvider.longitude);
    }

    /// <summary>
    /// Rotates the arrow so it points from device-north to the bearing of the target.
    /// </summary>
    /// <param name="lat2">Target latitude</param>
    /// <param name="lon2">Target longitude</param>
    public void changeArrow(float lat2, float lon2)
    {
        // 1) Compute the bearing from user to target (0 = north, clockwise)
        float bearing = angleFromCoordinate(
            currentLatitude, currentLongitude,
            lat2, lon2
        );

        // 2) Read the device's compass true heading (0 = north, clockwise)
        float heading = Input.compass.trueHeading;

        // 3) Calculate the yaw offset from device-north to target bearing
        float arrowYaw = bearing - heading;

        // 4) Apply the rotation in world space (around Y axis)
        transform.rotation = Quaternion.Euler(0f, arrowYaw, 0f);
    }

    /// <summary>
    /// Calculates bearing (in degrees) between two lat/lon points.
    /// </summary>
    float angleFromCoordinate(float lat1, float lon1, float lat2, float lon2)
    {
        float dLon = (lon2 - lon1) * Mathf.Deg2Rad;
        float lat1Rad = lat1 * Mathf.Deg2Rad;
        float lat2Rad = lat2 * Mathf.Deg2Rad;

        float x = Mathf.Sin(dLon) * Mathf.Cos(lat2Rad);
        float y = Mathf.Cos(lat1Rad) * Mathf.Sin(lat2Rad)
                - Mathf.Sin(lat1Rad) * Mathf.Cos(lat2Rad) * Mathf.Cos(dLon);

        float bearingRad = Mathf.Atan2(x, y);
        float bearingDeg = (bearingRad * Mathf.Rad2Deg + 360f) % 360f;
        return bearingDeg;
    }

    /// <summary>
    /// Haversine formula to calculate distance between two lat/lon points in meters.
    /// </summary>
    float CalculateDistance(float lat1, float lon1, float lat2, float lon2)
    {
        float R = 6371000f; // Earth radius in meters
        float dLat = (lat2 - lat1) * Mathf.Deg2Rad;
        float dLon = (lon2 - lon1) * Mathf.Deg2Rad;

        float a = Mathf.Sin(dLat / 2) * Mathf.Sin(dLat / 2) +
                  Mathf.Cos(lat1 * Mathf.Deg2Rad) * Mathf.Cos(lat2 * Mathf.Deg2Rad) *
                  Mathf.Sin(dLon / 2) * Mathf.Sin(dLon / 2);
        float c = 2 * Mathf.Atan2(Mathf.Sqrt(a), Mathf.Sqrt(1 - a));
        float distance = R * c;

        return distance;
    }
}

/// <summary>
/// Interface for any component providing GPS coordinates.
/// Attach to your drone prefabs and implement latitude/longitude.
/// </summary>
public interface IGpsProvider
{
    float latitude { get; }
    float longitude { get; }
}