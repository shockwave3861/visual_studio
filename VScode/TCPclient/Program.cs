/*       Client Program      */

using System;
using System.IO;
using System.Net;
using System.Text;
using System.Net.Sockets;


public class clnt
{

    public static void Main()
    {

        try
        {
            TcpClient tcpclnt = new TcpClient();
            Console.WriteLine("Connecting.....");

            tcpclnt.Connect("172.16.16.142", 62150);
            // use the ipaddress as in the server program

            Console.WriteLine("Connected");

            //Console.Write("Enter the string to be transmitted : ");
            //String str = Console.ReadLine();
            Stream stm = tcpclnt.GetStream();
            //ASCIIEncoding asen = new ASCIIEncoding();
            //byte[] ba = asen.GetBytes(str);
            //Console.WriteLine("Transmitting.....");
            //stm.Write(ba, 0, ba.Length);
            //byte[] bb = new byte[100];
            //int k = stm.Read(bb, 0, 100);
            //for (int i = 0; i < k; i++)
            //    Console.Write(Convert.ToChar(bb[i]));

            while (true)
            {
                Byte[] data = new Byte[256];
                String responseData = String.Empty;

                Int32 bytes = stm.Read(data, 0, data.Length);
                responseData = System.Text.Encoding.ASCII.GetString(data, 0, bytes);
                Console.WriteLine("Received: {0}", responseData);
            }
            tcpclnt.Close();
        }

        catch (Exception e)
        {
            Console.WriteLine("Error..... " + e.StackTrace);
        }
    }

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
