using Scarlet.Communications;
using Scarlet.Utilities;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Main : MonoBehaviour {

    public Joystick left;
    public Joystick right;
    public Joystick all;
    public Button toSingleButton;
    public Button toDoubleButton;
    public bool debug;
    public GameObject connected;
    public GameObject disconnected;
    public int PERIOD;

    private bool useSingleJoystick;
    private float horizontal;
    private float vertical;
    private int count;

	// Use this for initialization
	void Start () {
        toSingleButton.onClick.AddListener(() => switchToSingle());
        toDoubleButton.onClick.AddListener(() => switchToDouble());
        horizontal = 0;
        vertical = 0;
        useSingleJoystick = false;
        count = 0;
        Scarlet.Communications.Client.Start("192.168.0.25", 1025, 1026, "Mobile", OperationPeriod: PERIOD);
    }
	
	// Update is called once per frame
	void Update () {
        if (Client.IsConnected)
        {
            connected.SetActive(true);
            disconnected.SetActive(false);
        }
        else
        {
            connected.SetActive(false);
            disconnected.SetActive(true);
        }


        float skidSteerSpeed;
        float skidDriveSpeed;

        if (!useSingleJoystick)
        {
            skidSteerSpeed = left.Horizontal;
            skidDriveSpeed = right.Vertical;
        }
        else
        {
            skidSteerSpeed = all.Horizontal;
            skidDriveSpeed = all.Vertical;
        }


        if (debug)
        {
            Debug.Log("turn = " + skidSteerSpeed);
            Debug.Log("drive = " + skidDriveSpeed);
        }
        count++;
        if (count == 5)
        {

            Packet SkidFrontRight = new Packet(0x90, true, "MainRover");
            SkidFrontRight.AppendData(UtilData.ToBytes((sbyte)Math.Round((skidDriveSpeed - skidSteerSpeed) * 120)));
            //SkidFrontRight.AppendData(UtilData.ToBytes((sbyte)Math.Round((skidDriveSpeed) * 120)));
            //Debug.Log((sbyte)SkidFrontRight.Data.Payload[0] + " " + SkidFrontRight.Data.Payload[1]);
            Scarlet.Communications.Client.Send(SkidFrontRight);

            Packet SkidRearRight = new Packet(0x92, true, "MainRover");
            SkidRearRight.AppendData(UtilData.ToBytes((sbyte)Math.Round((skidDriveSpeed - skidSteerSpeed) * 120)));
            Scarlet.Communications.Client.Send(SkidRearRight);

            Packet SkidFrontLeft = new Packet(0x91, true, "MainRover");
            SkidFrontLeft.AppendData(UtilData.ToBytes((sbyte)Math.Round((skidDriveSpeed + skidSteerSpeed) * 120)));
            Scarlet.Communications.Client.Send(SkidFrontLeft);

            Packet SkidRearLeft = new Packet(0x93, true, "MainRover");
            SkidRearLeft.AppendData(UtilData.ToBytes((sbyte)Math.Round((0 - skidDriveSpeed - skidSteerSpeed) * 120)));
            //Console.WriteLine("Test " + (-skidDriveSpeed - skidSteerSpeed));
            Scarlet.Communications.Client.Send(SkidRearLeft);
            count = 0;
        }
    }


    public void switchToSingle()
    {
        useSingleJoystick = true;
    }

    public void switchToDouble()
    {
        useSingleJoystick = false;
    }
}
