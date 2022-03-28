#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string>
#include <iostream> 
#include <winsock2.h>
#include <pylon/PylonIncludes.h>
#include <pylon/BaslerUniversalInstantCamera.h>
#include <ctime>
#include <sqlite3.h>

using namespace Pylon;
using namespace std;
using namespace Basler_UniversalCameraParams;

#pragma comment(lib,"ws2_32.lib") //Winsock Library


struct motion_zone
{
	string time_stamp = "";
	int zone_number = 0;
	float speed = 0.0;
	int object_class = 0;
	int direction = 0;
	int system_state = 0;
	int output_number = 0;
	int phase_number = 0;
	int object_id = 0;
	float eta = 0.0;
};


static int callback(void* NotUsed, int argc, char** argv, char** azColName) {
	int i;
	for (i = 0; i < argc; i++) {
		printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
	}
	printf("\n");
	return 0;
}




int main()//int argc, char* argv[])
{
	float speed_limit = 10;

	time_t raw_time;
	struct tm* time_info;
	char time_stamp[80];


	WSADATA wsa;
	SOCKET s;
	struct sockaddr_in server;
	char server_reply[200];
	int recv_size;

	string str_images_path = "C:\\harmony_images\\";
	string str_images_folder;

	PylonInitialize();
	CBaslerUniversalInstantCamera camera(CTlFactory::GetInstance().CreateFirstDevice());
	try
	{
		cout << "********** SETTING CAMERA PARAMETERS **********" << endl;

		camera.Open();

		camera.AutoFunctionProfile.SetValue(AutoFunctionProfile_MinimizeGain);

		float gainMinLowerLimit = 0.0;
		float gainMaxUpperLimit = 36.0;
		camera.AutoGainLowerLimit.SetValue(gainMinLowerLimit);
		camera.AutoGainUpperLimit.SetValue(gainMaxUpperLimit);

		float exposureMinLowerLimit = 21.0;
		float exposureMaxUpperLimit = 1000.0;
		camera.AutoExposureTimeLowerLimit.SetValue(exposureMinLowerLimit);
		camera.AutoExposureTimeUpperLimit.SetValue(exposureMaxUpperLimit);

		camera.AutoTargetBrightness.SetValue(0.3);
		camera.AutoFunctionROISelector.SetValue(AutoFunctionROISelector_ROI1);
		camera.AutoFunctionROIUseBrightness.SetValue(true);

		camera.GainAuto.SetValue(GainAuto_Continuous);
		camera.ExposureAuto.SetValue(ExposureAuto_Continuous);

		cout << "Min gain : " << camera.AutoGainLowerLimit.GetValue() << endl;
		cout << "Max gain : " << camera.AutoGainUpperLimit.GetValue() << endl;
		cout << "Min exposure : " << camera.AutoExposureTimeLowerLimit.GetValue() << endl;
		cout << "Max exposure : " << camera.AutoExposureTimeUpperLimit.GetValue() << endl;

		camera.LineSelector.SetValue(LineSelector_Line2);
		camera.LineMode.SetValue(LineMode_Output);
		camera.LineSource.SetValue(LineSource_ExposureActive);
		camera.LineInverter.SetValue(true);

		cout << "Line Selector : " << camera.LineSelector.GetValue() << endl;
		cout << "Line Mode : " << camera.LineMode.GetValue() << endl;
		cout << "Line Source : " << camera.LineSource.GetValue() << endl;
		cout << "Line Inverter : " << camera.LineInverter.GetValue() << endl;

		camera.Close();

		cout << "***********************************************" << endl;
	}
	catch (const GenericException& e)
	{
		cerr << "camera init error : " << e.GetDescription() << endl;
	}


	sqlite3* sql_db;
	int sql_rc;
	const char* sql_query;
	char* sql_z_err_msg;

	//puts("\nInitialising Winsock...");
	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
	{
		printf("Failed. Error Code : %d", WSAGetLastError());
		return 1;
	}

	//puts("Initialised.");
	if ((s = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)
	{
		printf("Could not create socket : %d", WSAGetLastError());
	}

	//puts("Socket created.");
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
	puts("Connected to Radar");


	/*sql_rc = sqlite3_open("harmony.db", &sql_db);

	if (sql_rc) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(sql_db));
		return(0);
	}
	else {
		fprintf(stderr, "Opened database successfully\n");
	}

	sql_query = "CREATE TABLE if NOT EXISTS MOTION_ZONE("\
		"TIME_STAMP      TEXT                    NOT NULL,"\
		"ZONE_NUMBER     INT                     NOT NULL,"\
		"SPEED           INT                     NOT NULL,"\
		"CLASS           INT                     NOT NULL,"\
		"DIRECTION       INT                     NOT NULL,"\
		"OBJECT_ID       INT                     NOT_NULL);";

	sql_rc = sqlite3_exec(sql_db, sql_query, callback, 0, &sql_z_err_msg);

	if (sql_rc != SQLITE_OK) {
		fprintf(stderr, "SQL error: %s\n", sql_z_err_msg);
		sqlite3_free(sql_z_err_msg);
	}
	else {
		fprintf(stdout, "Table created successfully\n");
	}

	sqlite3_close(sql_db);*/

	//Receive a reply from the server
	while (1)
	{
		cout << "Reading Radar" << endl;

		if ((recv_size = recv(s, server_reply, 200, 0)) == SOCKET_ERROR)
		{
			puts("recv failed");
			break;
		}
		//puts("Reply received\n");
		server_reply[recv_size] = '\0';
		//printf(server_reply);

		string event_msg(server_reply);
		//cout << event_msg << endl;

		//printf("%c", event_msg[0]);

		string zone_type = event_msg.substr(0, event_msg.find(';'));
		//cout << "zone_type	: " << zone_type << endl;

		if (zone_type == "MZ")
		{
			event_msg.erase(0, event_msg.find(';') + 1);
			//cout << event_msg << endl;
			string str_radar_time_stamp = event_msg.substr(0, event_msg.find(';'));
			//cout << "time_stamp	: " << time_stamp << endl;

			event_msg.erase(0, event_msg.find(';') + 1);
			//cout << event_msg << endl;
			string zone_number = event_msg.substr(0, event_msg.find(';'));
			//cout << "zone_number	: " << zone_number << endl;

			event_msg.erase(0, event_msg.find(';') + 1);
			//cout << event_msg << endl;
			string speed = event_msg.substr(0, event_msg.find(';'));
			//cout << "speed		: " << speed << endl;

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

			float f_speed = stof(speed);
			//cout << "speed		: " << f_speed << endl;

			if (f_speed > speed_limit)
			{
				time(&raw_time);
				time_info = localtime(&raw_time);
				strftime(time_stamp, 80, "%G.%m.%d_%H.%M.%S", time_info);

				string str_time_stamp(time_stamp);

				str_images_folder = str_time_stamp.substr(0, str_time_stamp.find('_'));
				str_time_stamp.insert(0, "'");
				str_time_stamp.append("'");

				// below code is from Utility_ImageLoadAndSave sample code
				try
				{
					camera.Open();
					CGrabResultPtr ptrGrabResult;
					//CInstantCamera Camera(CTlFactory::GetInstance().CreateFirstDevice());

					if (camera.GrabOne(1000, ptrGrabResult))
					{
						/*string png_name = time_stamp + ".png";
						char* image_name = &png_name[0];*/

						string str_output_path = str_images_path + str_images_folder;
						//cout << str_output_path << endl;
						wstring wstr_output_path = wstring(str_output_path.begin(), str_output_path.end());
						LPCWSTR lpcwstr_output_path = new TCHAR[str_output_path.size() + 1];
						lpcwstr_output_path = wstr_output_path.c_str();

						if (CreateDirectory(lpcwstr_output_path, NULL) || ERROR_ALREADY_EXISTS == GetLastError())
						{
							/*time_t now = time(0);
							char* dt = ctime(&now);
							cout << "Before : " << dt << endl;*/

							string str_image_path = str_output_path + "\\" + str_time_stamp + ".png";
							char* char_ptr_image_path = &str_image_path[0];

							cout << "Taking SS" << endl;
							CImagePersistence::Save(ImageFileFormat_Png, char_ptr_image_path, ptrGrabResult);
							cout << "SS saved to : " << str_image_path << endl;
							cout << "Gain : " << camera.Gain.GetValue() << endl;
							cout << "Exposure : " << camera.ExposureTime.GetValue() << endl;
							camera.Close();

							/*now = time(0);
							dt = ctime(&now);
							cout << "After : " << dt << endl;*/
						}
						else
						{
							cout << "FAILED TO CREATE FOLDER" << endl;
						}
					}
				}
				catch (const GenericException& e)
				{
					cerr << "Could not grab an image: " << endl
						<< e.GetDescription() << endl;
				}
			}

			/*sql_rc = sqlite3_open("harmony.db", &sql_db);

			if (sql_rc) {
				fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(sql_db));
				return(0);
			}
			else {
				fprintf(stderr, "Opened database successfully\n");
			}

			string temp_query = "INSERT INTO MOTION_ZONE (TIME_STAMP,ZONE_NUMBER,SPEED,CLASS,DIRECTION,OBJECT_ID)"
				"VALUES (" + time_stamp + "," + zone_number + "," + speed + "," + object_class + "," + direction + "," + object_id + ");";

			sql_query = &temp_query[0];

			sql_rc = sqlite3_exec(sql_db, sql_query, callback, 0, &sql_z_err_msg);

			if (sql_rc != SQLITE_OK) {
				fprintf(stderr, "SQL error: %s\n", sql_z_err_msg);
				sqlite3_free(sql_z_err_msg);
			}
			else {
				fprintf(stdout, "Records created successfully\n");
			}

			sqlite3_close(sql_db);*/

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

		cout << "" << endl;
	}
	closesocket(s);
	WSACleanup();

	return 0;
}