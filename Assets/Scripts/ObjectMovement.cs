using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectMovement : MonoBehaviour
{
    public Transform destinationPoint; // The transform of the destination point
    public float speed = 1f; // Speed of object movement

    private Vector3 initialPoint; // Initial position of the object
    private Vector3 directionVector; // Direction vector towards the destination
    private float distance; // Distance between initial and destination points
    private float startTime; // Time when movement started

    void Update()
    {
        // Calculate elapsed time since movement started
        float elapsedTime = Time.time - startTime;

        // Calculate the displacement at current time step
        Vector3 displacement = directionVector * (elapsedTime * speed);

        // Update the position of the object
        transform.position = initialPoint + displacement;

        // Check if the object has reached the destination
        if (elapsedTime >= distance / speed)
        {
            // Stop the movement
            enabled = false;
        }
    }

    Vector3 LatLongToCartesian(float latitude, float longitude)
    {
        const float EarthRadius = 6371000f; // Radius of the Earth in meters

        float radLatitude = Mathf.Deg2Rad * latitude;
        float radLongitude = Mathf.Deg2Rad * longitude;

        float x = EarthRadius * Mathf.Cos(radLatitude) * Mathf.Cos(radLongitude);
        float y = EarthRadius * Mathf.Cos(radLatitude) * Mathf.Sin(radLongitude);
        float z = EarthRadius * Mathf.Sin(radLatitude);

        return new Vector3(x, y, z);
    }

    public void ChangeCoordinates(float latitude, float longitude)
    {
        // Set initial position as (0, 0, 0)
        initialPoint = transform.position;

        // Convert destination point latitude and longitude to Cartesian coordinates (x, y, z)
        Vector3 destinationCoords = LatLongToCartesian(destinationPoint.position.x, destinationPoint.position.y);

        // Determine displacement vector between initial and destination points
        Vector3 displacementVector = destinationCoords - initialPoint;

        // Normalize displacement vector to get direction vector
        directionVector = displacementVector.normalized;

        // Calculate distance between initial and destination points
        distance = displacementVector.magnitude;

        // Start the movement
        startTime = Time.time;
    }
}

