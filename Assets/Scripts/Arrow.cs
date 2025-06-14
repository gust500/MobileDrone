using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Arrow : MonoBehaviour
{
    public RedisClient redisClientScript;
    public AugmentedScript augmentedScript;
    public GameManager gameManager;
    public GameObject droneInfo;
    private GameObject distanceTextObject;
    public Camera camera;
    private string sceneName;
    private GameObject drone = null;

    // Make distanceDrone public, readable, but only assignable from here
    public float distanceDrone { get; private set; }

    void Start()
    {
        sceneName = SceneManager.GetActiveScene().name;
        distanceTextObject = GameObject.FindGameObjectWithTag("distanceText");
    }

    void Update()
    {
        if (augmentedScript != null && augmentedScript.ready)
        {
            drone = gameManager.selectedDrone;

            if (drone != null)
            {
                // Calculate distance in world space
                distanceDrone = Vector3.Distance(drone.transform.position, camera.transform.position);

                // UI text update
                if (!gameManager.isViewCameraActive)
                    distanceTextObject.GetComponent<TextMeshProUGUI>().text = "Distance: " + distanceDrone.ToString("0.000") + "m";

                // Calculate direction in world space, on XZ plane
                Vector3 camForward = camera.transform.forward;
                Vector3 toDrone = drone.transform.position - camera.transform.position;
                camForward.y = 0;
                toDrone.y = 0;

                if (toDrone.sqrMagnitude > 0.001f)
                {
                    camForward.Normalize();
                    toDrone.Normalize();
                    float angle = Vector3.SignedAngle(camForward, toDrone, Vector3.up);
                    transform.localEulerAngles = new Vector3(0, 0, -angle);
                }

                if (distanceDrone <= 15)
                {
                    if (sceneName == "Visualization")
                        transform.localScale = new Vector3(0, 0, 0);
                    GameObject.Find("Canvas/DroneInfo/FarAwayText").GetComponent<TextMeshProUGUI>().text = "You are near from your drones";
                }
                else
                {
                    if (sceneName == "Visualization")
                        transform.localScale = new Vector3(100, 100, 100);
                    GameObject.Find("Canvas/DroneInfo/FarAwayText").GetComponent<TextMeshProUGUI>().text = "You are far away from your drones";
                }
            }
        }
    }
}
