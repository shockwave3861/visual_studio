#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string>
#include <iostream> 
#include <winsock2.h>	//binarytides.com
#include <pylon/PylonIncludes.h>
#include <pylon/BaslerUniversalInstantCamera.h>
//#include <ctime>
#include <sqlite3.h>
#include <Windows.h>

#include "iSYS5220_radarAPI_if.h"
#include "iSYS5220_radarAPI_structs.h"
#include "iSYS5220_radarAPI_enums.h"
//#include "time.h"
//#include "math.h"

#include <curl/curl.h>

#include <fstream>
#include <chrono>
#include <thread>

using namespace Pylon;
using namespace std;
using namespace Basler_UniversalCameraParams;

#pragma comment(lib,"ws2_32.lib") //Winsock Library

APIHandle_t handle;

string str_images_path = "C:\\harmony_images\\";
string str_html_path = "C:\\Project Harmony\\index.htm";
string str_object_list_json_path = "C:\\Project Harmony\\object_list.json";

string str_anpr_url = "http://172.16.15.171/api/ImageAPI/UploadFiles/";
//string str_anpr_url = "http://3.111.11.186:5001/api/upload_event";

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct object_list
{
	int i_object_id = 0;
	int i_age_count = 0;
	int i_static_count = 0;
	float f_track_quality = 0;
	int i_object_class = 0;
	int i_event_zone_index = 0;
	float f_distance_x = 0;
	float f_distance_y = 0;
	float f_velocity_x = 0;
	float f_velocity_y = 0.0;
	float f_velocity_in_dir = 0.0;
	float f_direction_x = 0.0;
	float f_direction_y = 0.0;
	float f_distance_to_front = 0.0;
	float f_distance_to_back = 0.0;;
	float f_length = 0.0;
	float f_width = 0.0;
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static int callback(void* NotUsed, int argc, char** argv, char** azColName) {
	int i;
	for (i = 0; i < argc; i++) {
		printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
	}
	printf("\n");
	return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void aca2440_setup()
{
	try
	{
		cout << "********** SETTING CAMERA PARAMETERS **********" << endl;

		CBaslerUniversalInstantCamera camera(CTlFactory::GetInstance().CreateFirstDevice());
		camera.Open();

		camera.AutoFunctionProfile.SetValue(AutoFunctionProfile_MinimizeGain);

		float gainMinLowerLimit = 0.0;
		float gainMaxUpperLimit = 36.0;
		camera.AutoGainLowerLimit.SetValue(gainMinLowerLimit);
		camera.AutoGainUpperLimit.SetValue(gainMaxUpperLimit);

		float exposureMinLowerLimit = 21.0;
		float exposureMaxUpperLimit = 2000.0;
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
}

string aca2440_grab_image(string str_speed, string str_time_stamp_as_name)
{
	try
	{
		/*time_t raw_time;
		struct tm* time_info;
		char char_time_stamp[80];

		time(&raw_time);
		time_info = localtime(&raw_time);
		strftime(char_time_stamp, 80, "%G.%m.%d_%H.%M.%S", time_info);
		string str_time_stamp_as_name(char_time_stamp);*/

		string str_images_folder = str_time_stamp_as_name.substr(0, str_time_stamp_as_name.find('_'));
		str_time_stamp_as_name = str_time_stamp_as_name + "_" + str_speed;
		str_time_stamp_as_name.insert(0, "'");
		str_time_stamp_as_name.append("'");

		CBaslerUniversalInstantCamera camera(CTlFactory::GetInstance().CreateFirstDevice());
		CGrabResultPtr ptrGrabResult;
		camera.Open();

		if (camera.GrabOne(1000, ptrGrabResult))
		{
			string str_output_path = str_images_path + str_images_folder;
			cout << str_output_path << endl;
			wstring wstr_output_path = wstring(str_output_path.begin(), str_output_path.end());
			LPCWSTR lpcwstr_output_path = new TCHAR[str_output_path.size() + 1];
			lpcwstr_output_path = wstr_output_path.c_str();

			if (CreateDirectory(lpcwstr_output_path, NULL) || ERROR_ALREADY_EXISTS == GetLastError())
			{
				/*time_t now = time(0);
				char* dt = ctime(&now);
				cout << "Before : " << dt << endl;*/

				string str_image_path = str_output_path + "\\" + str_time_stamp_as_name + ".png";

				//cout << "Taking SS" << endl;
				CImagePersistence::Save(ImageFileFormat_Png, str_image_path.c_str(), ptrGrabResult);
				cout << "SS saved to : " << str_image_path << endl;
				cout << "Gain : " << camera.Gain.GetValue() << endl;
				cout << "Exposure : " << camera.ExposureTime.GetValue() << endl;
				camera.Close();

				return str_image_path;

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

int isys5220_setup()
{
	printf("Initialising iSYS-5220 .......\n\n");

	iSYS5220_Result_t res;

	/************** CHECK API VERSION **************/
	float32_t apiVersion;
	res = iSYS5220_getApiVersion(&apiVersion);
	if (res != ISYS5220_API_ERR_OK)
	{
		printf("error - iSYS5220_getApiVersion\n");
	}
	else
	{
		printf("ApiVersion:                        %.3f\n", apiVersion);
	}

	/************** CONNECT DEVICE **************/
	res = iSYS5220_initSystem(&handle, 172, 16, 16, 142);
	if ((res != ISYS5220_API_ERR_OK) && (res != ISYS5220_API_ERR_SYSTEM_ALREADY_INITIALISED))
	{
		printf("error - iSYS5220_initSystem failed\n");
		return -1;
	}

	/************** GET SYSTEM INFORMATION **************/
	iSYS5220_SystemInfo_t systemInfo;
	res = iSYS5220_getSystemInfo(handle, &systemInfo);
	if (res != ISYS5220_API_ERR_OK)
	{
		printf("error - iSYS5220_getSystemInfo failed\n");
	}
	else
	{
		printf("device:                            iSYS-%d\n", systemInfo.productcode);
		printf("serial:                            %d\n", systemInfo.serialNumber);
		printf("software version:                  %d.%.3d\n", systemInfo.swVersionMajor, systemInfo.swVersionMinor);
		printf("hardware version:                  %d.%.3d\n", systemInfo.hwVersionMajor, systemInfo.hwVersionMinor);
	}

	/************** GET DESCRIPTION **************/
	iSYS5220_Description_t description;
	res = iSYS5220_getDescription(handle, &description);
	if (res != ISYS5220_API_ERR_OK)
	{
		printf("error - iSYS5220_getDescription failed\n");
	}
	else
	{
		printf("description:                       %s\n", description.description);
	}

	/************** PERFORM SELFTEST **************/
	iSYS5220_SelfTest_u selfTestResult;
	res = iSYS5220_selfTest(handle, &selfTestResult);
	if (res != ISYS5220_API_ERR_OK)
	{
		printf("error - iSYS5220_selfTest failed\n");
	}
	else
	{
		printf("selftest result:                   0x%08x\n", selfTestResult.all);
	}

	float32_t height;
	res = iSYS5220_getInstallationHeight(handle, &height);
	if (res != ISYS5220_API_ERR_OK)
	{
		printf("error - iSYS5220_getInstallationHeight failed\n");
	}
	else
	{
		printf("installation height:               %.2f m\n", height);
	}

	/************** GET ELEVATION ANGLE **************/
	float32_t angle;
	res = iSYS5220_getElevationAngle(handle, &angle);
	if (res != ISYS5220_API_ERR_OK)
	{
		printf("error - iSYS5220_getElevationAngle failed\n");
	}
	else
	{
		printf("elevation angle:                   %.2f deg\n", angle);
	}

	/************** GET INCLINATION SENSOR **************/
	float32_t pitch, roll;
	res = iSYS5220_getInclinationAngles(handle, &pitch, &roll);
	if (res != ISYS5220_API_ERR_OK)
	{
		printf("error - iSYS5220_getInclinationAngles failed\n");
	}
	else
	{
		printf("inclination - pitch:               %.1f deg\n", pitch);
		printf("inclination - roll:                %.1f deg\n", roll);
	}

	/************** GET DATE AND TIME **************/
	uint16_t year, month, day, hour, minute, second;
	iSYS5220_TimeZone_t timeZone;
	res = iSYS5220_getDateTime(handle, &year, &month, &day, &hour, &minute, &second, &timeZone);
	if (res != ISYS5220_API_ERR_OK)
	{
		printf("error - iSYS5220_getDateTime failed\n");
	}
	else
	{
		printf("date:                              %d-%d-%d\n", year, month, day);
		printf("time:                              %d-%d-%d\n", hour, minute, second);
		printf("timezone:                          <iSYS5220_TimeZone_t>(%d)\n", timeZone);
	}

	/************** GET GPS SYNCHRONIZATION ENABLE **************/
	bool_t gpsEnable;
	res = iSYS5220_getGpsDateTimeSyncEnable(handle, &gpsEnable);
	if (res != ISYS5220_API_ERR_OK)
	{
		printf("error - iSYS5220_getGpsDateTimeSyncEnable failed\n");
	}
	else
	{
		printf("gps synchronization enable:        %d\n", gpsEnable);
	}
	/************** GET GPS LOCATION **************/
	float32_t lat, lng;
	res = iSYS5220_getGpsCoordinates(handle, &lat, &lng);
	if (res != ISYS5220_API_ERR_OK)
	{
		printf("error - iSYS5220_getGpsCoordinates failed\n");
	}
	else if ((lat == 0.0f) && (lng == 0.0f))
	{
		printf("gpslocation:                       no signal\n");
	}
	else
	{
		printf("gpslocation lateral:               %.5f deg\n", lat);
		printf("gpslocation longitude:             %.5f deg\n", lng);
	}

	/************** GET FREQUENCY CHANNEL **************/
	iSYS5220_FrequencyChannel_t channel;
	res = iSYS5220_getFrequencyChannel(handle, &channel);
	if (res != ISYS5220_API_ERR_OK)
	{
		printf("error - iSYS5220_getFrequencyChannel failed\n");
	}
	else
	{
		printf("frequency channel:                 %d\n", channel);
	}

	/************** GET RAIN INTERFERENCE LEVEL THRESHOLD **************/
	float32_t threshold_dB;
	res = iSYS5220_getRainInterferenceLevelThreshold(handle, &threshold_dB);
	if (res != ISYS5220_API_ERR_OK)
	{
		printf("error - iSYS5220_getRainInterferenceLevelThreshold failed\n");
	}
	else
	{
		printf("rain interference level threshold: %.2f dB\n", threshold_dB);
	}

	/************** GET MAX STOP TIME FOR STATIC OBJECTS **************/
	uint16_t time_s;
	res = iSYS5220_getMaxStopTimeObject(handle, &time_s);
	if (res != ISYS5220_API_ERR_OK)
	{
		printf("error - iSYS5220_getMaxStopTimeObject failed\n");
	}
	else
	{
		printf("max stop time for static objects:  %d s\n", time_s);
	}

	/************** GET NUMBER OF SET EVENT ZONES **************/
	iSYS5220_EventZones_t eventzones;
	res = iSYS5220_getEventZones(handle, &eventzones);
	if (res != ISYS5220_API_ERR_OK)
	{
		printf("error - iSYS5220_getEventZones failed\n");
	}
	else
	{
		uint16_t nrOfEventZones = 0, i_event;

		for (i_event = 0; i_event < ISYS_5220_MAX_NR_OF_IGNOREZONES; i_event++)
		{
			if (eventzones.eventZones[i_event].enable == true)
			{
				nrOfEventZones++;
			}
		}

		printf("number of set event zones:         %d\n", nrOfEventZones);
	}

	/************** GET NUMBER OF SET IGNORE ZONES **************/
	iSYS5220_IgnoreZones_t ignoreZones;
	res = iSYS5220_getIgnoreZones(handle, &ignoreZones);
	if (res != ISYS5220_API_ERR_OK)
	{
		printf("error - iSYS5220_getIgnoreZones failed\n");
	}
	else
	{
		uint16_t nrOfIgnoreZones = 0, i_ignore;

		for (i_ignore = 0; i_ignore < ISYS_5220_MAX_NR_OF_IGNOREZONES; i_ignore++)
		{
			if (ignoreZones.ignoreZones[i_ignore].enable == true)
			{
				nrOfIgnoreZones++;
			}
		}

		printf("number of set ignore zones:        %d\n", nrOfIgnoreZones);
	}
}

int isys5220_get_obj_list(object_list object[256])
{
	iSYS5220_Result_t res;

	/************** GET NUMBER OBJECTS **************/
	iSYS5220_ObjectList_t pObjectList;
	res = iSYS5220_getObjectList(handle, &pObjectList);
	if (res != ISYS5220_API_ERR_OK)
	{
		printf("error - iSYS5220_getObjectList failed\n");
		printf("%d", res);
	}
	else
	{
		//printf("number of objects:                 %d\n", pObjectList.nrOfTracks);
		if (pObjectList.nrOfTracks > 0) {
			for (int i = 0; i < pObjectList.nrOfTracks; i++) {
				object[i].i_object_id = pObjectList.trackedObjects[i].ui32_objectID;
				object[i].i_age_count = pObjectList.trackedObjects[i].ui16_ageCount;
				object[i].i_static_count = pObjectList.trackedObjects[i].ui16_staticCount;
				object[i].f_track_quality = pObjectList.trackedObjects[i].f32_trackQuality;
				object[i].i_object_class = pObjectList.trackedObjects[i].classID.iSYS5220_TrackClass;
				object[i].i_event_zone_index = pObjectList.trackedObjects[i].si16_motion_eventZoneIndex;
				object[i].f_distance_x = pObjectList.trackedObjects[i].f32_positionX_m;
				object[i].f_distance_y = pObjectList.trackedObjects[i].f32_positionY_m;
				object[i].f_velocity_x = pObjectList.trackedObjects[i].f32_velocityX_mps;
				object[i].f_velocity_y = pObjectList.trackedObjects[i].f32_velocityY_mps;
				object[i].f_velocity_in_dir = pObjectList.trackedObjects[i].f32_velocityInDir_mps;
				object[i].f_direction_x = pObjectList.trackedObjects[i].f32_directionX;
				object[i].f_direction_y = pObjectList.trackedObjects[i].f32_directionY;
				object[i].f_distance_to_front = pObjectList.trackedObjects[i].f32_distanceToFront_m;
				object[i].f_distance_to_back = pObjectList.trackedObjects[i].f32_distanceToBack_m;
				object[i].f_length = pObjectList.trackedObjects[i].f32_length_m;
				object[i].f_width = pObjectList.trackedObjects[i].f32_width_m;

				/*printf("Object ID:			%d\n", pObjectList.trackedObjects[i].ui32_objectID);
				printf("Age Count:			%d\n", pObjectList.trackedObjects[i].ui16_ageCount);
				printf("Static Count:			%d\n", pObjectList.trackedObjects[i].ui16_staticCount);
				printf("Track Quality:			%f\n", pObjectList.trackedObjects[i].f32_trackQuality);
				printf("Object Class:			%d\n", pObjectList.trackedObjects[i].classID.iSYS5220_TrackClass);
				printf("Event Zone Index:		%d\n", pObjectList.trackedObjects[i].si16_motion_eventZoneIndex);
				printf("Distance X:			%f\n", pObjectList.trackedObjects[i].f32_positionX_m);
				printf("Distance Y:			%f\n", pObjectList.trackedObjects[i].f32_positionY_m);
				printf("Velocity X:			%f\n", pObjectList.trackedObjects[i].f32_velocityX_mps);
				printf("Velocity Y:			%f\n", pObjectList.trackedObjects[i].f32_velocityY_mps);
				printf("Velocity in Direction:		%f\n", pObjectList.trackedObjects[i].f32_velocityInDir_mps);
				printf("Direction X:			%f\n", pObjectList.trackedObjects[i].f32_directionX);
				printf("Direction Y:			%f\n", pObjectList.trackedObjects[i].f32_directionY);
				printf("Distance to Front:		%f\n", pObjectList.trackedObjects[i].f32_distanceToFront_m);
				printf("Distance to Back:		%f\n", pObjectList.trackedObjects[i].f32_distanceToBack_m);
				printf("Length:				%f\n", pObjectList.trackedObjects[i].f32_length_m);
				printf("Width:				%f\n", pObjectList.trackedObjects[i].f32_width_m);*/

				/*if (pObjectList.trackedObjects[i].si16_motion_eventZoneIndex == 0 && pObjectList.trackedObjects[i].f32_velocityInDir_mps > 4 && pObjectList.trackedObjects->f32_directionY < 20)
				{
					aca2440_grab_image(to_string(pObjectList.trackedObjects[i].f32_velocityInDir_mps));
				}*/
			}
			return pObjectList.nrOfTracks;
		}

	}
}

void create_object_list_json(object_list object, string str_time_stamp_as_name)
{
	ofstream outfile;
	outfile.open(str_object_list_json_path);

	if (!outfile)
	{
		cout << "File not found !" << endl;
		//break;
	}

	outfile << "{" << endl;
	outfile << "\"image_name\": " << str_time_stamp_as_name << "," << endl;
	outfile << "\"object_id\": " << object.i_object_id << "," << endl;
	outfile << "\"age_count\": " << object.i_age_count << "," << endl;
	outfile << "\"statis_count\": " << object.i_static_count << "," << endl;
	outfile << "\"track_quality\": " << object.f_track_quality << "," << endl;
	outfile << "\"object_class\": " << object.i_object_class << "," << endl;
	outfile << "\"event_zone_index\": " << object.i_event_zone_index << "," << endl;
	outfile << "\"distance_x\": " << object.f_distance_x << "," << endl;
	outfile << "\"distance_y\": " << object.f_distance_y << "," << endl;
	outfile << "\"velocity_x\": " << object.f_velocity_x << "," << endl;
	outfile << "\"velocity_y\": " << object.f_velocity_y << "," << endl;
	outfile << "\"velocity_in_direction\": " << object.f_velocity_in_dir << "," << endl;
	outfile << "\"direction_x\": " << object.f_direction_x << "," << endl;
	outfile << "\"direction_y\": " << object.f_direction_y << "," << endl;
	outfile << "\"distance_to_front\": " << object.f_distance_to_front << "," << endl;
	outfile << "\"distance_to_back\": " << object.f_distance_to_back << "," << endl;
	outfile << "\"length_of_object\": " << object.f_length << "," << endl;
	outfile << "\"width_of_object\": " << object.f_width << endl;
	outfile << "}" << endl;


	outfile.close();
}

int main()//int argc, char* argv[])
{
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// VARIABLES INIT

	WSADATA wsa;
	SOCKET s;
	struct sockaddr_in server;
	char server_reply[200];
	int recv_size;
	int iResult;
	int socket_timeout = 100;
	server.sin_addr.s_addr = inet_addr("172.16.16.142");
	server.sin_family = AF_INET;
	server.sin_port = htons(62150);

	float speed_limit = 10;

	sqlite3* sql_db;
	int sql_rc;
	const char* sql_query;
	char* sql_z_err_msg;

	time_t raw_time;
	struct tm* time_info;
	char char_time_stamp[80];

	object_list object[256]; // max 512
	int i_no_of_objects = 0;

	CURL* curl;
	CURLcode result;


	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// iSYS5220 INIT

	isys5220_setup();

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// WINSOCK INITIALIZATION

	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
		printf("Failed. Error Code : %d", WSAGetLastError());

	if ((s = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)
		printf("Could not create socket : %d", WSAGetLastError());

	if (setsockopt(s, SOL_SOCKET, SO_RCVTIMEO, (char*)&socket_timeout, sizeof(int)) < 0)
		printf("Could not socket time out : % d", WSAGetLastError());

	if (connect(s, (struct sockaddr*)&server, sizeof(server)) < 0)
	{
		puts("connect error");
		return 1;
	}
	puts("Connected to Radar");


	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// BASLER CAMERA INITIALIZATION

	PylonInitialize();
	aca2440_setup();
	//aca2440_grab_image("test");


	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// SQL INITIALIZATION

	sql_rc = sqlite3_open("harmony.db", &sql_db);

	if (sql_rc) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(sql_db));
		return(0);
	}
	else {
		fprintf(stderr, "Opened database successfully\n");
	}

	sql_query = "CREATE TABLE if NOT EXISTS OBJECT_LIST("\
		"TIME_STAMP				TEXT	NOT NULL,"\
		"IMAGE_NAME				TEXT	NOT NULL,"\
		"OBJECT_ID				INT		NOT NULL,"\
		"AGE_COUNT				INT		NOT NULL,"\
		"STATIC_COUNT			INT		NOT NULL,"\
		"TRACK_QUALITY			FLOAT	NOT NULL,"\
		"OBJECT_CLASS			FLOAT	NOT NULL,"\
		"EVENT_ZONE_INDEX		FLOAT	NOT NULL,"\
		"DISTANCE_X				FLOAT	NOT NULL,"\
		"DISTANCE_Y				FLOAT	NOT NULL,"\
		"VELOCITY_X				FLAOT	NOT NULL,"\
		"VELOCITY_Y				FLOAT	NOT NULL,"\
		"VELOCITY_IN_DIRECTON	FLOAT	NOT NULL,"\
		"DIRECTION_X			FLOAT	NOT NULL,"\
		"DIRECTION_Y			FLOAT	NOT NULL,"\
		"DISTANCE_TO_FRONT		FLOAT	NOT NULL,"\
		"DISTANCE_TO_BACK		FLOAT	NOT NULL,"\
		"LENGTH_OF_OBJECT		FLOAT	NOT NULL,"\
		"WIDTH_OF_OBJECT		FLOAT	NOT_NULL);";

	sql_rc = sqlite3_exec(sql_db, sql_query, callback, 0, &sql_z_err_msg);

	if (sql_rc != SQLITE_OK) {
		fprintf(stderr, "SQL error: %s\n", sql_z_err_msg);
		sqlite3_free(sql_z_err_msg);
	}
	else {
		fprintf(stdout, "Table created successfully\n");
	}

	sqlite3_close(sql_db);


	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// CURL INITIALIZATION

	curl_global_init(CURL_GLOBAL_DEFAULT);

	//Receive a reply from the server
	while (1)
	{
		//cout << "." << endl;
		//try
		//{
		//	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//	recv_size = recv(s, server_reply, 200, 0);
		//	if (recv_size > 0)
		//	{
		//		server_reply[recv_size] = '\0';
		//		string event_msg(server_reply);
		//		cout << event_msg << endl;

		//		string zone_type = event_msg.substr(0, event_msg.find(';'));
		//		//cout << "zone_type	: " << zone_type << endl;

		//		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		//		if (zone_type == "MZ")
		//		{
		//			event_msg.erase(0, event_msg.find(';') + 1);
		//			//cout << event_msg << endl;
		//			string str_radar_time_stamp = event_msg.substr(0, event_msg.find(';'));
		//			//cout << "time_stamp	: " << time_stamp << endl;

		//			event_msg.erase(0, event_msg.find(';') + 1);
		//			//cout << event_msg << endl;
		//			string zone_number = event_msg.substr(0, event_msg.find(';'));
		//			//cout << "zone_number	: " << zone_number << endl;

		//			event_msg.erase(0, event_msg.find(';') + 1);
		//			//cout << event_msg << endl;
		//			string speed = event_msg.substr(0, event_msg.find(';'));
		//			//cout << "speed		: " << speed << endl;

		//			event_msg.erase(0, event_msg.find(';') + 1);
		//			//cout << event_msg << endl;
		//			string object_class = event_msg.substr(0, event_msg.find(';'));
		//			//cout << "object_class	: " << object_class << endl;

		//			event_msg.erase(0, event_msg.find(';') + 1);
		//			//cout << event_msg << endl;
		//			string direction = event_msg.substr(0, event_msg.find(';'));
		//			//cout << "direction	: " << direction << endl;

		//			event_msg.erase(0, event_msg.find(';') + 1);
		//			//cout << event_msg << endl;
		//			string system_state = event_msg.substr(0, event_msg.find(';'));
		//			//cout << "system_state	: " << system_state << endl;

		//			event_msg.erase(0, event_msg.find(';') + 1);
		//			//cout << event_msg << endl;
		//			string output_number = event_msg.substr(0, event_msg.find(';'));
		//			//cout << "output_number	: " << output_number << endl;

		//			event_msg.erase(0, event_msg.find(';') + 1);
		//			//cout << event_msg << endl;
		//			string phase_number = event_msg.substr(0, event_msg.find(';'));
		//			//cout << "phase_number	: " << phase_number << endl;

		//			event_msg.erase(0, event_msg.find(';') + 1);
		//			//cout << event_msg << endl;
		//			string object_id = event_msg.substr(0, event_msg.find(';'));
		//			//cout << "object_id	: " << object_id << endl;

		//			event_msg.erase(0, event_msg.find(';') + 1);
		//			//cout << event_msg << endl;
		//			string eta = event_msg.substr(0, event_msg.find('\n'));
		//			//cout << "eta		: " << eta << endl;

		//			float f_speed = stof(speed);
		//			//cout << "speed		: " << f_speed << endl;

		//			time(&raw_time);
		//			time_info = localtime(&raw_time);
		//			strftime(char_time_stamp, 80, "'%G-%m-%d %H:%M:%S'", time_info);

		//			string str_time_stamp(char_time_stamp);

		//			////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		//			if (f_speed > speed_limit)
		//			{

		//				acA2440_grab_image();
		//			}

		//			sql_rc = sqlite3_open("harmony.db", &sql_db);

		//			if (sql_rc) {
		//				fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(sql_db));
		//				return(0);
		//			}
		//			else {
		//				fprintf(stderr, "Opened database successfully\n");
		//			}

		//			string temp_query = "INSERT INTO MOTION_ZONE (TIME_STAMP,ZONE_NUMBER,SPEED,CLASS,DIRECTION,OBJECT_ID)"
		//				"VALUES (" + str_time_stamp + "," + zone_number + "," + speed + "," + object_class + "," + direction + "," + object_id + ");";

		//			sql_query = &temp_query[0];

		//			sql_rc = sqlite3_exec(sql_db, sql_query, callback, 0, &sql_z_err_msg);

		//			if (sql_rc != SQLITE_OK) {
		//				fprintf(stderr, "SQL error: %s\n", sql_z_err_msg);
		//				sqlite3_free(sql_z_err_msg);
		//			}
		//			else {
		//				fprintf(stdout, "Records created successfully\n");
		//			}

		//			sqlite3_close(sql_db);

		//		}

		//		cout << "" << endl;
		//	}
		//	else if (recv_size == 0)
		//		printf("Connection closed\n");
		//}
		//catch (int err)
		//{
		//	printf("recv failed with error: %d\n", WSAGetLastError());
		//}

		i_no_of_objects = isys5220_get_obj_list(object);
		//printf("********************start****************************\n");
		//cout << "No. of objects : " << i_no_of_objects << endl;
		for (int i = 0; i < i_no_of_objects; i++)
		{
			/*cout << "i_object_id : " << object[i].i_object_id << endl;
			cout << "i_age_count : " << object[i].i_age_count << endl;
			cout << "i_static_count : " << object[i].i_static_count << endl;
			cout << "f_track_quality : " << object[i].f_track_quality << endl;
			cout << "i_object_class : " << object[i].i_object_class << endl;
			cout << "i_event_zone_index : " << object[i].i_event_zone_index << endl;
			cout << "f_distance_x : " << object[i].f_distance_x << endl;
			cout << "f_distance_y : " << object[i].f_distance_y << endl;
			cout << "f_velocity_x : " << object[i].f_velocity_x << endl;
			cout << "f_velocity_y : " << object[i].f_velocity_y << endl;
			cout << "f_velocity_in_dir : " << object[i].f_velocity_in_dir << endl;
			cout << "f_direction_x : " << object[i].f_direction_x << endl;
			cout << "f_direction_y : " << object[i].f_direction_y << endl;
			cout << "f_distance_to_front : " << object[i].f_distance_to_front << endl;
			cout << "f_distance_to_back : " << object[i].f_distance_to_back << endl;
			cout << "f_length : " << object[i].f_length << endl;
			cout << "f_width : " << object[i].f_width << endl;
			printf("\n");*/

			if (object[i].i_event_zone_index == 0 && object[i].f_distance_y < 25 && (object[i].f_velocity_in_dir * 3.6) > 10)
			{
				time_t raw_time;
				struct tm* time_info;
				char char_time_stamp[80];

				time(&raw_time);
				time_info = localtime(&raw_time);
				strftime(char_time_stamp, 80, "%G.%m.%d_%H.%M.%S", time_info);
				string str_time_stamp_as_name(char_time_stamp);

				strftime(char_time_stamp, 80, "'%G-%m-%d %H:%M:%S'", time_info);
				string str_time_stamp(char_time_stamp);

				string str_image_path = aca2440_grab_image(to_string(object[i].f_velocity_in_dir * 3.6), str_time_stamp_as_name);

				sql_rc = sqlite3_open("harmony.db", &sql_db);

				if (sql_rc) {
					fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(sql_db));
					return(0);
				}
				else {
					fprintf(stderr, "Opened database successfully\n");
				}

				str_time_stamp_as_name.insert(0, "'");
				str_time_stamp_as_name.append("'");

				string temp_query = "INSERT INTO OBJECT_LIST (TIME_STAMP,\
															IMAGE_NAME,\
															OBJECT_ID,\
															AGE_COUNT,\
															STATIC_COUNT,\
															TRACK_QUALITY,\
															OBJECT_CLASS,\
															EVENT_ZONE_INDEX,\
															DISTANCE_X,\
															DISTANCE_Y,\
															VELOCITY_X,\
															VELOCITY_Y,\
															VELOCITY_IN_DIRECTON,\
															DIRECTION_X,\
															DIRECTION_Y,\
															DISTANCE_TO_FRONT,\
															DISTANCE_TO_BACK,\
															LENGTH_OF_OBJECT,\
															WIDTH_OF_OBJECT)"
									"VALUES (" + str_time_stamp + ","
												+ str_time_stamp_as_name + ","
												+ to_string(object[i].i_object_id) + ","
												+ to_string(object[i].i_age_count) + "," 
												+ to_string(object[i].i_static_count) + ","
												+ to_string(object[i].f_track_quality) + ","
												+ to_string(object[i].i_object_class) + ","
												+ to_string(object[i].i_event_zone_index) + ","
												+ to_string(object[i].f_distance_x) + ","
												+ to_string(object[i].f_distance_y) + ","
												+ to_string(object[i].f_velocity_x) + ","
												+ to_string(object[i].f_velocity_y) + ","
												+ to_string(object[i].f_velocity_in_dir) + ","
												+ to_string(object[i].f_direction_x) + ","
												+ to_string(object[i].f_direction_y) + ","
												+ to_string(object[i].f_distance_to_front) + ","
												+ to_string(object[i].f_distance_to_back) + ","
												+ to_string(object[i].f_length) + ","
												+ to_string(object[i].f_width)
												+ ");";

				sql_query = &temp_query[0];

				sql_rc = sqlite3_exec(sql_db, sql_query, callback, 0, &sql_z_err_msg);

				if (sql_rc != SQLITE_OK) {
					fprintf(stderr, "SQL error: %s\n", sql_z_err_msg);
					sqlite3_free(sql_z_err_msg);
				}
				else {
					fprintf(stdout, "Records created successfully\n");
				}

				sqlite3_close(sql_db);

				create_object_list_json(object[i], str_time_stamp_as_name);

				curl = curl_easy_init();
				if (curl) {

					// Set URL
					//curl_easy_setopt(curl, CURLOPT_URL, "http://www.example.com/");
					//curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "POST");
					curl_easy_setopt(curl, CURLOPT_URL, str_anpr_url.c_str());
					/*curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
					curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, "https");
					struct curl_slist* headers = NULL;
					curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);*/
					curl_mime* mime;
					curl_mimepart* part;
					mime = curl_mime_init(curl);
					part = curl_mime_addpart(mime);
					curl_mime_name(part, "file");
					curl_mime_filedata(part, str_image_path.c_str());
					part = curl_mime_addpart(mime);
					curl_mime_name(part, "file");
					curl_mime_filedata(part, str_object_list_json_path.c_str());
					curl_easy_setopt(curl, CURLOPT_MIMEPOST, mime);
					// If you want to set any more options, do it here, before making the request.

					// Perform the request which prints to stdout
					result = curl_easy_perform(curl);

					// Error check
					if (result != CURLE_OK) {
						std::cerr << "Error during curl request: "
							<< curl_easy_strerror(result) << std::endl;
					}
					else
						cout << "post to server successful" << endl;

					curl_mime_free(mime);
					curl_easy_cleanup(curl);
				}
				else {
					std::cerr << "Error initializing curl." << std::endl;
				}
			}

			//outfile.open(str_html_path);

			//if (!outfile)
			//{
			//	cout << "File not found !" << endl;
			//	//break;
			//}

			//outfile << "<!DOCTYPE html>" << endl;
			//outfile << "<html>" << endl;
			//outfile << "<head>" << endl;
			//outfile << "<meta http-equiv=\"refresh\" content=\"0.2\">" << endl;
			//outfile << "</head>" << endl;
			//outfile << "<body>" << endl;
			//outfile << "<p7>&nbsp&nbsp&nbsp" << (int)(object[i].f_velocity_in_dir * 3.6) << "<br></p7>" << endl;
			//outfile << "<p7>KMPH</p7>" << endl;
			//outfile << "</body>" << endl;
			//outfile << "</html>" << endl;

			//outfile.close();

			//this_thread::sleep_for(std::chrono::milliseconds(200));

		}
		//printf("***********************end***************************\n");
		//printf("\n");

	}

	closesocket(s);
	WSACleanup();

	return 0;
}