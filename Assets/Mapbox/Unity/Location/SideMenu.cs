using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class SideMenu : MonoBehaviour
{
    private Vector2 touchStartPos;
    private Vector2 touchEndPos;
    private bool isMenuOpen = false;

    public RectTransform sideMenu;
    public float swipeThreshold = 100f; // Adjust this value for sensitivity

    void Update()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Began)
            {
                touchStartPos = touch.position;
            }
            else if (touch.phase == TouchPhase.Ended)
            {
                touchEndPos = touch.position;
                float swipeDistance = touchEndPos.x - touchStartPos.x;

                if (Mathf.Abs(swipeDistance) > swipeThreshold)
                {
                    if (swipeDistance > 0 && !isMenuOpen)
                    {
                        // Swipe right to open the menu
                        OpenMenu();
                    }
                    else if (swipeDistance < 0 && isMenuOpen)
                    {
                        // Swipe left to close the menu
                        CloseMenu();
                    }
                }
            }
        }
    }

    void OpenMenu()
    {
        isMenuOpen = true;
        sideMenu.gameObject.SetActive(true);
    }

    void CloseMenu()
    {
        isMenuOpen = false;
        sideMenu.gameObject.SetActive(false);
    }
}
