using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Background : MonoBehaviour {

    public Button colorChanger;
    public Button colorChanger_H;
    public List<GameObject> textbox;
    public bool dark;

    // Use this for initialization
    void Start () {
        colorChanger.onClick.AddListener(() => changeTheColor());
        colorChanger_H.onClick.AddListener(() => changeTheColor());
        dark = true;
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    void changeTheColor()
    {
        if (dark)
        {
            Camera.main.backgroundColor = new Color(1f, 1f, 1f);
            foreach (GameObject text in textbox)
            {
                Text textobj = text.GetComponent<Text>();
                textobj.color = new Color(0, 0, 0);
            }
			dark = false;
        }
        else
        {
            Camera.main.backgroundColor = new Color(0f, 0f, 0f);
            foreach (GameObject text in textbox)
            {
                Text textobj = text.GetComponent<Text>();
                textobj.color = new Color(255, 255, 255);
            }
            dark = true;
        }
        
    }
}
