using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JoyStickManager : MonoBehaviour
{
    public bool joyStickClicked;
    // Start is called before the first frame update
    void Start()
    {
        joyStickClicked = false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    public void JoyStickPressed()
    {
        joyStickClicked = true;
    }

    public void JoyStickReleased()
    {
        joyStickClicked = false;
    }
}
