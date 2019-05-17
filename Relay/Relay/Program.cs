using System;
using Scarlet;
using Scarlet.IO.BeagleBone;
using System.Collections.Generic;
using Scarlet.Components;
using Scarlet.Components.Sensors;
using Scarlet.Communications;
using Scarlet.Utilities;
using System.Threading;
using System.IO.Ports;
using System.Linq;
using Renci.SshNet;

namespace MainRover
{
    public class MainRover
    {
        public static string CLIENT_IP = "192.168.0.5";

        public static bool Quit;
        public static List<ISensor> Sensors;
        public static QueueBuffer Packets;
        public static SerialPort Port;
        private static string SerialPortName;
        public static int count;
        private static Thread _t1;

        public static void activateBBB()
        {
            _t1 = new Thread(new ThreadStart(func));
            _t1.Start();

            
        }

        public static void func()
        {
            using (var sshc = new SshClient("192.168.0.20", "debian", "temppwd"))
            {
                Console.WriteLine("Connecting..");
                sshc.Connect();
                Console.WriteLine("Connected is" + sshc.IsConnected);
                var cmd = sshc.RunCommand("echo \"temppwd\" | sudo -S -k bash startCan.sh");
                var output = cmd.Result;
                Console.WriteLine(output);

                cmd = sshc.RunCommand("echo \"temppwd\" | sudo -S -k mono MainRover.exe 192.168.0.25");
                output = cmd.Result;
                Console.WriteLine(output);
            }
            Console.WriteLine("Finished starting up code on BBB");
        }

        public static void SetupClient()
        {
            count = 0;
            ///Client.Start(CLIENT_IP, 1025, 1026, "MainRover", OperationPeriod: 5);
            Server.Start(1025, 1026, OperationPeriod: 5);
            Packets = new QueueBuffer();
            for (byte i = 0x8E; i <= 0xA1; i++)
                Parse.SetParseHandler(i, (Packet) => Packets.Enqueue(Packet, 0));
            Console.WriteLine("Finished starting up server on Jetson");
        }

        public static void ProcessInstructions()
        {
            const int NUM_PACKETS_TO_PROCESS = 20;
            for (int i = 0; !Packets.IsEmpty() && i < NUM_PACKETS_TO_PROCESS; i++)
            {
                Packet p = Packets.Dequeue();
                count++;
                if (count == 5)
                {
                    Console.WriteLine("motor Id" + MotorID + "data is " + (sbyte)p.Data.Payload[0]);
                    Packet output = new Packet(p.Data.ID, true, "MainRover");
                    output.AppendData(p.Data.Payload);
                    Scarlet.Communications.Server.Send(output);
                    count = 0;
                } 
				/*
                switch ((PacketID)p.Data.ID)
                {
                    case PacketID.RPMAllDriveMotors:
                        //MotorControl.SetAllRPM((sbyte)p.Data.Payload[0]);
                        break;
                    case PacketID.RPMFrontRight:
                    case PacketID.RPMFrontLeft:
                    case PacketID.RPMBackRight:
                    case PacketID.RPMBackLeft:
                        int MotorID = p.Data.ID - (byte)PacketID.RPMFrontRight;
                        
                        /*
                        int sign = 1;
                        if ((sbyte) p.Data.Payload[0] < 0)
                        {
                            sign = -1;
                        }
                        Console.WriteLine("motor Id" + MotorID + "data is " + sign * (sbyte)p.Data.Payload[0]);        
                        if (count == 5)
                        {
                            Console.WriteLine("motor Id" + MotorID + "data is " + (sbyte)p.Data.Payload[0]);
                            Packet output = new Packet(p.Data.ID, true, "MainRover");
                            output.AppendData(p.Data.Payload);
                            Scarlet.Communications.Server.Send(output);
                            count = 0;
                        } 
                        
                        break;
                    case PacketID.RPMSteeringMotor:
                        float SteerSpeed = UtilData.ToFloat(p.Data.Payload);
                        //MotorControl.SetSteerSpeed(SteerSpeed);
                        //TODO: Figure out what this was supposed to do.
                        break;
                    case PacketID.SteerPosition:
                        float Position = UtilData.ToFloat(p.Data.Payload);
                        //MotorControl.SetRackAndPinionPosition(Position);
                        
                        break;
                    
                 
                } 
			}*/
			}
        /*
        public static float translate (sbyte sign, sbyte load)
        {
            float shift = 0;
            int signMult = 0;
            switch (sign)
            {
                case -1:
                    return ((float)UtilMain.LinearMap(load, 137, 255, -1, 0));                   
                case 1:
                    return ((float)UtilMain.LinearMap(load, 0, 120, 0, 1));
            }
            return 0; */
        }
        
        public static void Main(string[] args)
        {            
            ///Console.Write("Enter phone IP adress: ");
            ///String input = Console.ReadLine();
            ///CLIENT_IP = input;
            Quit = false;
            activateBBB();
            Thread.Sleep(100);
            SetupClient();
            do
            {
                ProcessInstructions();
                Thread.Sleep(50);
            } while (!Quit);
        }
    }
}