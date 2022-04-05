#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;


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

motion_zone ww;


int main()
{
	motion_zone mz[5];
	
	for (int i = 0; i < 5; i++)
	{
		mz[i].time_stamp = "test time";
		mz[i].zone_number = i;
		mz[i].speed = 44.5;
		mz[i].object_class = 30;
		mz[i].direction = 1;
		mz[i].system_state = 0;
		mz[i].output_number = 0;
		mz[i].phase_number = 0;
		mz[i].object_id = i;
		mz[i].eta = 4.2;
	}


	for (int i = 0; i < 5; i++)
	{
		cout << mz[i].time_stamp << endl;
		cout << mz[i].zone_number << endl;
		cout << mz[i].speed << endl;
		cout << mz[i].object_class << endl;
		cout << mz[i].direction << endl;
		cout << mz[i].system_state << endl;
		cout << mz[i].output_number << endl;
		cout << mz[i].phase_number << endl;
		cout << mz[i].object_id << endl;
		cout << mz[i].eta << endl;
		cout << "" << endl;
	}


}