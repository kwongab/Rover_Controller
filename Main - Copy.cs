using Scarlet.Communications;
using Scarlet.Utilities;
using System;
using System.Threading;
using UnityEngine;
using UnityEngine.UI;
using Renci.SshNet;

public class Main : MonoBehaviour
{

    public Joystick left;
    public Joystick right;
    public Joystick all;
    public Button toSingleButton;
    public Button toDoubleButton;
    public bool debug;
    public GameObject connected;
    public GameObject disconnected;
    public Text tester;
    public int PERIOD;

    public Joystick left2;
    public Joystick right2;
    public Button toLandscape;
    public Button toPortorait;
    public GameObject connected2;
    public GameObject disconnected2;
    public Button startRover;
    public Text roverStartText;
    public Button startRover2;
    public Text roverStartText2;

    public Joystick base_;
    public Joystick shoulder;
    public Joystick elbow;
    public Joystick wrist;
    public Joystick differential;
    public Joystick hand;

    public Joystick base_H;
    public Joystick shoulder_H;
    public Joystick elbow_H;
    public Joystick wrist_H;
    public Joystick differential_H;
    public Joystick hand_H;

    private bool useLandscape;
    private bool useSingleJoystick;
    private float horizontal;
    private float vertical;
    private int count;
    private bool started;
    private bool buttonCalled;

    private Thread _t1;
    private Thread _t2;

    // Use this for initialization
    void Start()
    {
        started = false;
        buttonCalled = false;
        toSingleButton.onClick.AddListener(() => switchJoystickType(true));
        toDoubleButton.onClick.AddListener(() => switchJoystickType(false));

        toLandscape.onClick.AddListener(() => switchOrientation(true));
        toPortorait.onClick.AddListener(() => switchOrientation(false));

        startRover.onClick.AddListener(() => startRoverButton());
        startRover2.onClick.AddListener(() => startRoverButton());

        Scarlet.Communications.Client.Start("192.168.0.25", 1025, 1026, "Mobile", OperationPeriod: PERIOD);
        useLandscape = false;
        horizontal = 0;
        vertical = 0;
        useSingleJoystick = false;
        count = 0;
        _t2 = new Thread(new ThreadStart(func2));
        _t2.Start();
    }

   
    public void func2()
    {
        while (true)
        {
            if(!started && buttonCalled)
            {
                started = true;
                startRoverSystem();
                roverStartText.text = "Rover Started";
                roverStartText2.text = "Rover Started"; 
                break;
            }
            
        }
    }

    // Update is called once per frame
    void Update()
    {
        updateConnectionUI();
        Debug.Log("Called update");
        float skidSteerSpeed = 0;
        float skidDriveSpeed = 0;

        short fingerSpeed = 0;
        short diffVertShort = 0;
        short diffHorzShort = 0;
        short wristArmSpeed = 0;
        short elbowArmSpeed = 0;
        short shoulderArmSpeed = 0;
        short baseArmSpeed = 0;
        
        if (useLandscape)
        {
            skidSteerSpeed = -left2.Vertical;
            skidDriveSpeed = right2.Horizontal;

            fingerSpeed = (short)(-hand_H.Vertical * 128);
            diffVertShort = (short)(differential_H.Horizontal * 128);
            diffHorzShort = (short)(-differential_H.Vertical * 128);
            wristArmSpeed = (short)(-wrist_H.Vertical * 64);
            elbowArmSpeed = (short)(elbow_H.Horizontal * 64);
            shoulderArmSpeed = (short)(-shoulder_H.Horizontal * 94);
            baseArmSpeed = (short)(base_H.Vertical * 64);
        }
        else if (!useSingleJoystick)
        {
            skidSteerSpeed = left.Horizontal;
            skidDriveSpeed = right.Vertical;

            fingerSpeed = (short)(hand.Horizontal * 128);
            diffVertShort = (short)(differential.Vertical * 128);
            diffHorzShort = (short)(differential.Horizontal * 128);
            wristArmSpeed = (short)(wrist.Horizontal * 64);
            elbowArmSpeed = (short)(elbow.Vertical * 64);
            shoulderArmSpeed = (short)(-shoulder.Vertical * 94);
            baseArmSpeed = (short)(-base_.Horizontal * 64);
        }
        else
        {
            skidSteerSpeed = all.Horizontal;
            skidDriveSpeed = all.Vertical;

            fingerSpeed = (short)(hand.Horizontal * 128);
            diffVertShort = (short)(differential.Vertical * 128);
            diffHorzShort = (short)(differential.Horizontal * 128);
            wristArmSpeed = (short)(wrist.Horizontal * 64);
            elbowArmSpeed = (short)(elbow.Vertical * 64);
            shoulderArmSpeed = (short)(-shoulder.Vertical * 94);
            baseArmSpeed = (short)(-base_.Horizontal * 64);
        }
        tester.text = skidSteerSpeed + " " + skidDriveSpeed;

        if (debug)
        {
            Debug.Log("turn = " + skidSteerSpeed);
            Debug.Log("drive = " + skidDriveSpeed);
        } 
        count++;
        if (count == 5)
        { 
            Packet SkidFrontRight = new Packet(0x90, true, "MainRover");
            SkidFrontRight.AppendData(UtilData.ToBytes((sbyte)System.Math.Round((skidDriveSpeed - skidSteerSpeed) * 60)));
            //SkidFrontRight.AppendData(UtilData.ToBytes((sbyte)Math.Round((skidDriveSpeed) * 120)));           
            Scarlet.Communications.Client.Send(SkidFrontRight);

            Packet SkidRearRight = new Packet(0x92, true, "MainRover");
            SkidRearRight.AppendData(UtilData.ToBytes((sbyte)Math.Round((skidDriveSpeed - skidSteerSpeed) * 60)));
            Scarlet.Communications.Client.Send(SkidRearRight);

            Packet SkidFrontLeft = new Packet(0x91, true, "MainRover");
            SkidFrontLeft.AppendData(UtilData.ToBytes((sbyte)Math.Round((skidDriveSpeed + skidSteerSpeed) * 60)));
            Scarlet.Communications.Client.Send(SkidFrontLeft);
            //Debug.Log(SkidFrontLeft.Data.Payload[0] + " " + SkidFrontLeft.Data.Payload[1]);

            Packet SkidRearLeft = new Packet(0x93, true, "MainRover");
            SkidRearLeft.AppendData(UtilData.ToBytes((sbyte)Math.Round((0 - skidDriveSpeed - skidSteerSpeed) * 60)));
            //Console.WriteLine("Test " + (-skidDriveSpeed - skidSteerSpeed));
            Scarlet.Communications.Client.Send(SkidRearLeft);

            Packet FingerPack = new Packet(0xA0, true, "MainArm");
            FingerPack.AppendData(UtilData.ToBytes(fingerSpeed));
            Scarlet.Communications.Client.Send(FingerPack);

            Packet DiffHorzPack = new Packet(0x9F, true, "MainArm");
            DiffHorzPack.AppendData(UtilData.ToBytes((short)(-diffVertShort + diffHorzShort)));
            Scarlet.Communications.Client.Send(DiffHorzPack);

            Packet DiffVertPack = new Packet(0x9E, true, "MainArm");
            DiffVertPack.AppendData(UtilData.ToBytes((short)(diffVertShort + diffHorzShort)));
            Scarlet.Communications.Client.Send(DiffVertPack);

            Packet WristPack = new Packet(0x9D, true, "MainArm");
            WristPack.AppendData(UtilData.ToBytes(wristArmSpeed));
            Scarlet.Communications.Client.Send(WristPack);

            Packet ElbowPack = new Packet(0x9C, true, "MainArm");
            ElbowPack.AppendData(UtilData.ToBytes(elbowArmSpeed));
            Scarlet.Communications.Client.Send(ElbowPack);

            Packet ShoulderPack = new Packet(0x9B, true, "MainArm");
            ShoulderPack.AppendData(UtilData.ToBytes(shoulderArmSpeed));
            Scarlet.Communications.Client.Send(ShoulderPack);

            Packet BasePack = new Packet(0x9A, true, "MainArm");
            BasePack.AppendData(UtilData.ToBytes(baseArmSpeed));
            Scarlet.Communications.Client.Send(BasePack);
            count = 0;
        }
    }

    public void switchJoystickType(bool value)
    {
        useSingleJoystick = value;
        updateConnectionUI();
    }

    public void switchOrientation(bool value)
    {
        useLandscape = value;
        updateConnectionUI();
    }

    public void startRoverButton()
    {
        buttonCalled = true;
    }

    public void startRoverSystem()
    {
        Debug.Log("pushed start rover button");            
            //roverStartText.text = "Rover Started";
            //roverStartText2.text = "Rover Started";            
            Debug.Log("before connect");
            using (var sshc = new SshClient("192.168.0.25", "nvidia", "nvidia"))
            {
                Debug.Log("right before connect");
                sshc.Connect();
                Debug.Log("connected is " + sshc.IsConnected);
                var cmd = sshc.RunCommand("echo \"nvidia\" | sudo -S -k mono Relay.exe");
                var output = cmd.Result;
                Debug.Log(output);
            }

            Debug.Log("after connect");
        
    }

    public void updateConnectionUI()
    {
        if (!useLandscape)
        {
            connected2.SetActive(false);
            disconnected2.SetActive(false);
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
        }
        else
        {
            connected.SetActive(false);
            disconnected.SetActive(false);
            if (Client.IsConnected)
            {
                connected2.SetActive(true);
                disconnected2.SetActive(false);
            }
            else
            {
                connected2.SetActive(false);
                disconnected2.SetActive(true);
            }
        }
    }

}
