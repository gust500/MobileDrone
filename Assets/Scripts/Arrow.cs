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
                Vector3 droneLocalPos = drone.transform.localPosition;

                // Distance in meters - update the property
                distanceDrone = droneLocalPos.magnitude;

                // UI text update
                if (!gameManager.isViewCameraActive)
                    distanceTextObject.GetComponent<TextMeshProUGUI>().text = "Distance: " + distanceDrone.ToString("0.000") + "m";

                // ARROW DIRECTION: angle in camera's horizontal plane
                Vector3 camForward = camera.transform.forward;
                camForward.y = 0;
                camForward.Normalize();

                Vector3 toDrone = droneLocalPos;
                toDrone.y = 0;
                toDrone.Normalize();

                float angle = Vector3.SignedAngle(camForward, toDrone, Vector3.up);

                transform.localEulerAngles = new Vector3(0, 0, -angle);

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