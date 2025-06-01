using UnityEngine;

public class AROriginAnchor : MonoBehaviour
{
    public static double originLat;
    public static double originLon;
    public static Vector3 originUnityPos;
    public static bool originSet = false;

    void Start()
    {
        if (!originSet && Input.location.status == LocationServiceStatus.Running)
        {
            originLat = Input.location.lastData.latitude;
            originLon = Input.location.lastData.longitude;
            originUnityPos = transform.position;
            originSet = true;
        }
    }
}