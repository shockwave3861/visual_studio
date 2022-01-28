#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include<stdio.h>
#include<winsock2.h>

#pragma comment(lib,"ws2_32.lib") //Winsock Library

int main()//int argc, char* argv[])
{
	WSADATA wsa;
	SOCKET s;
	struct sockaddr_in server;
	char server_reply[2000];
	int recv_size;

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
		if ((recv_size = recv(s, server_reply, 2000, 0)) == SOCKET_ERROR)
		{
			puts("recv failed");
			break;
		}
		//puts("Reply received\n");
		server_reply[recv_size] = '\0';
		printf(server_reply);
	}
	closesocket(s);
	WSACleanup();

	return 0;
}