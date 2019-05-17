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

        float skidSteerSpeed;
        float skidDriveSpeed;

        if (useLandscape)
        {
            skidSteerSpeed = -left2.Vertical;
            skidDriveSpeed = right2.Horizontal;            
        }
        else if (!useSingleJoystick)
        {
            skidSteerSpeed = left.Horizontal;
            skidDriveSpeed = right.Vertical;
        }
        else
        {
            skidSteerSpeed = all.Horizontal;
            skidDriveSpeed = all.Vertical;
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
