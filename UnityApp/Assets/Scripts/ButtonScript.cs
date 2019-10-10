using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.IO.Ports;


public class ButtonScript : MonoBehaviour {

    public SerialPort serial = new SerialPort ("COM3"  , 9600);
    public string led;
    public Image image;
    private bool check; 

    public void ButtonClick()
    {
        if(!serial.IsOpen)
        {
            serial.Open();
        }

        check = image.enabled;
        if (check == true)
        {
            serial.Write(gameObject.name);
            image.enabled = false;
        }

        if (check == false)
        {   
            serial.Write(gameObject.name);
            image.enabled = true;
        }

        serial.Close();
    }

       public void Stop()
    {
        if(!serial.IsOpen)
        {
            serial.Open();
        }
        serial.Write(gameObject.name);
        serial.Close();
        SceneManager.LoadScene(0);
    }
}
