using System;
using System.Collections.Generic;
using Scarlet.Components;
using Scarlet.Communications;
using System.Threading;
using System.IO.Ports;
using System.Linq;
using Renci.SshNet;

namespace MainRover
{
    public class MainRover
    {
        public static bool Quit;
        public static List<ISensor> Sensors;
        public static QueueBuffer Packets;
        public static QueueBuffer ArmPackets;
        public static SerialPort Port;
        private static string SerialPortName;
        public static int count;
        private static Thread _t1;
        private static Thread _t2;

        public static void activateBBB()
        {
            _t1 = new Thread(new ThreadStart(func));
            _t2 = new Thread(new ThreadStart(func2));
            _t1.Start();
            _t2.Start();

            
        }

        //main beaglebone
        public static void func()
        {
            try
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
            catch
            {
                Console.WriteLine("Main BBB not detected");
            }
        }

        //arm beaglebone
        public static void func2()
        {
            try
            {
                using (var sshc = new SshClient("192.168.0.21", "debian", "temppwd"))
                {
                    Console.WriteLine("Connecting..");
                    sshc.Connect();
                    Console.WriteLine("Connected is" + sshc.IsConnected);
                    var cmd = sshc.RunCommand("echo \"temppwd\" | sudo -S -k bash startCan.sh");
                    var output = cmd.Result;
                    Console.WriteLine(output);

                    cmd = sshc.RunCommand("echo \"temppwd\" | sudo -S -k mono MainArm.exe 192.168.0.25");
                    output = cmd.Result;
                    Console.WriteLine(output);
                }
                Console.WriteLine("Finished starting up code on BBB");
            }
            catch
            {
                Console.WriteLine("Arm BBB not detected");
            }
        }

        public static void SetupClient()
        {
            count = 0;
            ///Client.Start(CLIENT_IP, 1025, 1026, "MainRover", OperationPeriod: 5);
            Server.Start(1025, 1026, OperationPeriod: 5);
            Packets = new QueueBuffer();
            for (byte i = 0x8E; i <= 0x93; i++)
                Parse.SetParseHandler(i, (Packet) => Packets.Enqueue(Packet, 0));
            ArmPackets = new QueueBuffer();
            for (byte i = 0x94; i <= 0xA1; i++)
                Parse.SetParseHandler(i, (Packet) => ArmPackets.Enqueue(Packet, 0));
            Console.WriteLine("Finished starting up server on Jetson");
        }

        public static void ProcessInstructions()
        {
            const int NUM_PACKETS_TO_PROCESS = 5;
            for (int i = 0; !Packets.IsEmpty() && i < NUM_PACKETS_TO_PROCESS; i++)
            {
                Packet p = Packets.Dequeue();
                count++;
                if (count == 3)
                {                    
                    switch ((PacketID)p.Data.ID)
                    {
                        case PacketID.RPMFrontRight:
                        case PacketID.RPMFrontLeft:
                        case PacketID.RPMBackRight:
                        case PacketID.RPMBackLeft:
                            Packet output = new Packet(p.Data.ID, true, "MainRover");
                            output.AppendData(p.Data.Payload);
                            Scarlet.Communications.Server.Send(output);
                            Console.WriteLine("Main Packet " + p.Data.ID + " sending " + p.Data.ToString());
                            count = 0;
                            break;
                    }                            
                } 				
			}
            Packets = new QueueBuffer();
        }

        public static void ProcessArmInstructions()
        {
            const int NUM_PACKETS_TO_PROCESS = 20;
            for (int i = 0; !ArmPackets.IsEmpty() && i < NUM_PACKETS_TO_PROCESS; i++)
            {
                Packet p = ArmPackets.Dequeue();
                count++;
                if (count == 3)
                {
                    switch ((PacketID)p.Data.ID)
                    {
                        default:
                            Packet ArmOutput = new Packet(p.Data.ID, true, "MainArm");
                            ArmOutput.AppendData(p.Data.Payload);
                            Scarlet.Communications.Server.Send(ArmOutput);

                            Console.WriteLine("Arm Packet " + p.Data.ID + " sending " + p.Data.ToString());
                            count = 0;
                            break;
                    }
                }
            }
            ArmPackets = new QueueBuffer();
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
                ProcessArmInstructions();
                Thread.Sleep(50);
            } while (!Quit);
        }
    }
}