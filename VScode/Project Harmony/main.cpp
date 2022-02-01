#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string>
#include <iostream> 
#include <winsock2.h>
#include <pylon/PylonIncludes.h>
#include <ctime>

using namespace Pylon;
using namespace std;

#pragma comment(lib,"ws2_32.lib") //Winsock Library



int main()//int argc, char* argv[])
{
	float speed_limit = 5;

	WSADATA wsa;
	SOCKET s;
	struct sockaddr_in server;
	char server_reply[200];
	int recv_size;

	PylonInitialize();

	puts("\nInitialising Winsock...");

	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
	{
		printf("Failed. Error Code : %d", WSAGetLastError());
		return 1;
	}

	puts("Initialised.");

	if ((s = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)
	{
		printf("Could not create socket : %d", WSAGetLastError());
	}

	puts("Socket created.");

	server.sin_addr.s_addr = inet_addr("172.16.16.142");
	//server.sin_addr.s_addr = inet_addr("172.16.15.147");
	server.sin_family = AF_INET;
	server.sin_port = htons(62150);
	//server.sin_port = htons(10002);

	//Connect to remote server
	if (connect(s, (struct sockaddr*)&server, sizeof(server)) < 0)
	{
		puts("connect error");
		return 1;
	}

	puts("Connected");

	//Receive a reply from the server
	while (1)
	{
		if ((recv_size = recv(s, server_reply, 200, 0)) == SOCKET_ERROR)
		{
			puts("recv failed");
			break;
		}
		//puts("Reply received\n");
		server_reply[recv_size] = '\0';
		//printf(server_reply);

		string event_msg(server_reply);
		cout << event_msg << endl;

		//printf("%c", event_msg[0]);

		string zone_type = event_msg.substr(0, event_msg.find(';'));
		//cout << "zone_type	: " << zone_type << endl;

		if (zone_type == "MZ")
		{
			event_msg.erase(0, event_msg.find(';') + 1);
			//cout << event_msg << endl;
			string time_stamp = event_msg.substr(0, event_msg.find(';'));
			//cout << "time_stamp	: " << time_stamp << endl;

			event_msg.erase(0, event_msg.find(';') + 1);
			//cout << event_msg << endl;
			string zone_number = event_msg.substr(0, event_msg.find(';'));
			//cout << "zone_number	: " << zone_number << endl;

			event_msg.erase(0, event_msg.find(';') + 1);
			//cout << event_msg << endl;
			string speed = event_msg.substr(0, event_msg.find(';'));
			//cout << "speed		: " << speed << endl;
			float f_speed = stof(speed);
			//cout << "speed		: " << f_speed << endl;

			event_msg.erase(0, event_msg.find(';') + 1);
			//cout << event_msg << endl;
			string object_class = event_msg.substr(0, event_msg.find(';'));
			//cout << "object_class	: " << object_class << endl;

			event_msg.erase(0, event_msg.find(';') + 1);
			//cout << event_msg << endl;
			string direction = event_msg.substr(0, event_msg.find(';'));
			//cout << "direction	: " << direction << endl;

			event_msg.erase(0, event_msg.find(';') + 1);
			//cout << event_msg << endl;
			string system_state = event_msg.substr(0, event_msg.find(';'));
			//cout << "system_state	: " << system_state << endl;

			event_msg.erase(0, event_msg.find(';') + 1);
			//cout << event_msg << endl;
			string output_number = event_msg.substr(0, event_msg.find(';'));
			//cout << "output_number	: " << output_number << endl;

			event_msg.erase(0, event_msg.find(';') + 1);
			//cout << event_msg << endl;
			string phase_number = event_msg.substr(0, event_msg.find(';'));
			//cout << "phase_number	: " << phase_number << endl;

			event_msg.erase(0, event_msg.find(';') + 1);
			//cout << event_msg << endl;
			string object_id = event_msg.substr(0, event_msg.find(';'));
			//cout << "object_id	: " << object_id << endl;

			event_msg.erase(0, event_msg.find(';') + 1);
			//cout << event_msg << endl;
			string eta = event_msg.substr(0, event_msg.find('\n'));
			//cout << "eta		: " << eta << endl;

			if (f_speed > speed_limit)
			{
				//cout << "********** Taking SS **********" << endl;
				try
				{
					CGrabResultPtr ptrGrabResult;
					CInstantCamera Camera(CTlFactory::GetInstance().CreateFirstDevice());

					if (Camera.GrabOne(1000, ptrGrabResult))
					{	
						string png_name = time_stamp + ".png";
						char* image_name = &png_name[0];

						time_t now = time(0);
						char* dt = ctime(&now);
						cout << "Before : " << dt << endl;

						CImagePersistence::Save(ImageFileFormat_Png, image_name, ptrGrabResult);
						
						now = time(0);
						dt = ctime(&now);
						cout << "After : " << dt << endl;
					}
				}
				catch (const GenericException& e)
				{
					cerr << "Could not grab an image: " << endl
						<< e.GetDescription() << endl;
				}
			}


		}




		/*char zone_type[3];
		for (int i = 0; i < 2; i++)
		{
			zone_type[i] = server_reply[i];
		}
		zone_type[2] = '\0';
		cout << zone_type << endl;*/

		/*if (zone_type == "MZ")
		{
			printf("getting other details");
			char time_stamp[25];
			for (int i = 0; i < 24; i++)
			{
				time_stamp[i] = server_reply[i + 3];
			}
			time_stamp[24] = '\0';
			printf("time stamp	: %s\n", time_stamp);
		}*/


	}
	closesocket(s);
	WSACleanup();

	return 0;
}