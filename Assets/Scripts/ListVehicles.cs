using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ListVehicles : MonoBehaviour
{
    private List<string> droneList;
    public GameObject droneScrollView;
    public GameObject currentSelectedDrone; //selected drone to visualize information
    public GameObject scrollViewContent;

    // Start is called before the first frame update
    void Start()
    {
        droneList = new List<string>();
        currentSelectedDrone = null;
    }

    #region Virtual Drone
    public void changeVehicleList(GameObject drone)
    {
        string id = drone.GetComponent<DroneController>().droneID; ;
        string name = drone.GetComponent<DroneController>().droneName;
        int status = drone.GetComponent<DroneController>().status;

        if (status == 0)
        {
            foreach (var droneID in droneList)
            {
                if (droneID == id)
                {
                    droneList.Remove(id);

                    GameObject[] ListDronesButton = GameObject.FindGameObjectsWithTag("ListDrone");
                    foreach (GameObject droneButton in ListDronesButton)
                    {
                        if (droneButton.GetComponentInChildren<TextMeshProUGUI>().text.Equals(name) || droneButton.GetComponentInChildren<TextMeshProUGUI>().text.Equals(id))
                        {
                            Destroy(droneButton);
                            Destroy(drone);
                            emptyVehicleDetails();
                            break;
                        }
                    }
                    return;
                }
            }
        }
        else
        {
            foreach (var droneID in droneList)
            {
                if (droneID == id) return;
            }
            droneList.Add(id);

            GameObject newDroneSelected = Instantiate(droneScrollView, scrollViewContent.transform);
            if (drone.tag == "virtualDrone")
                newDroneSelected.GetComponentInChildren<TextMeshProUGUI>().text = name;
            else if (drone.tag == "realDroneObject")
                newDroneSelected.GetComponentInChildren<TextMeshProUGUI>().text = id;
            Button btn = newDroneSelected.GetComponent<Button>();
            btn.onClick.AddListener(delegate () { 
                getDroneInList(drone);

                //remove green color
                Color newColor;
                if (ColorUtility.TryParseHtmlString("#FFFFFF", out newColor))
                {
                    GameObject[] ListDronesButton = GameObject.FindGameObjectsWithTag("ListDrone");
                    foreach (GameObject droneButton in ListDronesButton)
                    {
                        droneButton.GetComponent<Image>().color = newColor;
                    }
                }

                //add green color to selected drone
                if (ColorUtility.TryParseHtmlString("#61DD75", out newColor)) //GREEN
                {

                    btn.GetComponent<Image>().color = newColor;
                }
            });
        }
    }


    public void getDroneInList(GameObject drone)
    {
        GetComponent<GameManager>().newDroneView.SetActive(false);
        GetComponent<GameManager>().DroneScrollViewInfo.SetActive(true);
        GetComponent<GameManager>().selectDroneButton.GetComponentInChildren<TextMeshProUGUI>().text = "Select";

        //drone Information
        string id = null;
        if (drone.tag == "virtualDrone")
            id = drone.GetComponent<DroneController>().droneID;
        else if (drone.tag == "realDroneObject")
            id = drone.GetComponent<DroneController>().droneID;
        string name = drone.GetComponent<DroneController>().droneName;
        float altitude = drone.GetComponent<DroneController>().altitudeDrone;
        float latitude = drone.GetComponent<DroneController>().latitudeDrone;
        float longitude = drone.GetComponent<DroneController>().longitudeDrone;
        int status = drone.GetComponent<DroneController>().status;

        //attribute drone Information to visualze information
        GameObject.Find("SelectVehicleView/DroneScrollViewInfo/DroneInformationData/droneIdText").GetComponent<TextMeshProUGUI>().text = id; //id or serial number
        GameObject.Find("SelectVehicleView/DroneScrollViewInfo/DroneInformationData/droneNameText").GetComponent<TextMeshProUGUI>().text = name; //name
        GameObject.Find("SelectVehicleView/DroneScrollViewInfo/DroneInformationData/droneAltitudeText").GetComponent<TextMeshProUGUI>().text = altitude.ToString(); //altitude
        GameObject.Find("SelectVehicleView/DroneScrollViewInfo/DroneInformationData/droneLatitudeText").GetComponent<TextMeshProUGUI>().text = latitude.ToString(); //latitude
        GameObject.Find("SelectVehicleView/DroneScrollViewInfo/DroneInformationData/droneLongitudeText").GetComponent<TextMeshProUGUI>().text = longitude.ToString(); //longitude

        if (status == 1)
        {
            GameObject.Find("SelectVehicleView/DroneScrollViewInfo/DroneInformationData/droneStatusText").GetComponent<TextMeshProUGUI>().text = "Low Battery";
            GameObject.Find("SelectVehicleView/DroneScrollViewInfo/DroneInformationData/droneStatusText").GetComponent<TextMeshProUGUI>().color = new Color32(255, 126, 0, 255); //orange
        }
        if (status == 2)
        {
            GameObject.Find("SelectVehicleView/DroneScrollViewInfo/DroneInformationData/droneStatusText").GetComponent<TextMeshProUGUI>().text = "Damaged";
            GameObject.Find("SelectVehicleView/DroneScrollViewInfo/DroneInformationData/droneStatusText").GetComponent<TextMeshProUGUI>().color = new Color32(255, 0, 0, 255); //red
        }
        currentSelectedDrone = drone;
    }

    #endregion

    private void emptyVehicleDetails()
    {
        GameObject.Find("SelectVehicleView/DroneScrollViewInfo/DroneInformationData/droneIdText").GetComponent<TextMeshProUGUI>().text = ""; //id
        GameObject.Find("SelectVehicleView/DroneScrollViewInfo/DroneInformationData/droneNameText").GetComponent<TextMeshProUGUI>().text = ""; //name
        GameObject.Find("SelectVehicleView/DroneScrollViewInfo/DroneInformationData/droneAltitudeText").GetComponent<TextMeshProUGUI>().text = ""; //altitude
        GameObject.Find("SelectVehicleView/DroneScrollViewInfo/DroneInformationData/droneLatitudeText").GetComponent<TextMeshProUGUI>().text = ""; //latitude
        GameObject.Find("SelectVehicleView/DroneScrollViewInfo/DroneInformationData/droneLongitudeText").GetComponent<TextMeshProUGUI>().text = ""; //longitude
        GameObject.Find("SelectVehicleView/DroneScrollViewInfo/DroneInformationData/droneStatusText").GetComponent<TextMeshProUGUI>().text = "";
    }
}
