using System;
using System.Collections;
using System.Collections.Generic;
using Mapbox.Unity.Map;
using Mapbox.Unity.Utilities;
using TMPro;
using UnityEngine;

public class TestingGPS : MonoBehaviour
{
    public TextMeshProUGUI debugText;

    // Start is called before the first frame update
    void Start()
    {
        debugText = GameObject.Find("Canvas/DebugText").GetComponent<TextMeshProUGUI>();
    }

    // Update is called once per frame
    void Update()
    {
        
        Vector3 unityPosition = Conversions.GeoToWorldGlobePosition(39.733917, -8.821999, 100);
        debugText.text = unityPosition.ToString();

        unityPosition = Conversions.GeoToWorldGlobePosition(39.735142, -8.820833, 100);
        debugText.text += " | " + unityPosition.ToString();

        Mapbox.Utils.Vector2d latLong = new Mapbox.Utils.Vector2d(39.735142, -8.820833);
        //Conversions.LatitudeLongitudeToUnityTilePosition(latLong);
    }
}
