/*
 ===================================================================================
 Name        : extract_raw_data.c
 Author      : Infineon Technologies
 Version     :
 Copyright   : 2014-2017, Infineon Technologies AG
 Description : Example of how to extract raw data using the C communication library
 ===================================================================================
 */

/*
 * Copyright (c) 2014-2017, Infineon Technologies AG
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,are permitted provided that the
 * following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this list of conditions and the following
 * disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following
 * disclaimer in the documentation and/or other materials provided with the distribution.
 *
 * Neither the name of the copyright holders nor the names of its contributors may be used to endorse or promote
 * products derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <string.h>
#include "include/Protocol.h"
#include "include/COMPort.h"
#include "include/EndpointTargetDetection.h"


void delay(int number_of_seconds)
{
	// Converting time into milli_seconds 
	int milli_seconds = 1000 * number_of_seconds;

	// Storing start time 
	clock_t start_time = clock();

	// looping till required time is not achieved 
	while (clock() < start_time + milli_seconds);
}


void received_frame_data(void* context,
						int32_t protocol_handle,
						uint8_t endpoint,
						const Target_Info_t* target_info,
						uint8_t num_targets)
{
	printf("number of targets : %d\n", num_targets);
	for (int i = 0; i < num_targets; i++)
	{
		printf("target id       : %d\n", (target_info+i)->target_id);
		printf("target distance : %f\n", (target_info+i)->radius);
		//printf("target speed    : %f\n", (target_info+i)->radial_speed);
		printf("azimuth         : %f\n", (target_info + i)->azimuth);
		printf("elevation : %f\n", (target_info + i)->elevation);
	}

	printf("\n");
}

int radar_auto_connect(void)
{
	int radar_handle = 0;
	int num_of_ports = 0;
	char comp_port_list[256];
	char* comport;
	const char *delim = ";";

	//----------------------------------------------------------------------------

	num_of_ports = com_get_port_list(comp_port_list, (size_t)256);

	//printf("num of ports : %d\n", num_of_ports);

	if (num_of_ports == 0)
	{
		return -1;
	}
	else
	{
		comport = strtok(comp_port_list, delim);
		//printf("comport : %s\n", comport);
		while (num_of_ports > 0)
		{
			num_of_ports--;

			// open COM port
			radar_handle = protocol_connect(comport);

			if (radar_handle >= 0)
			{
				break;
			}

			comport = strtok(NULL, delim);
		}

		return radar_handle;
	}

}

int read_targ(void)
{
	int res = -1;
	int protocolHandle = 0;
	int endpointRadarBase = 0;

	// open COM port
	protocolHandle = radar_auto_connect();

	// get endpoint ids
	if (protocolHandle >= 0)
	{
		for (int i = 1; i <= protocol_get_num_endpoints(protocolHandle); ++i) {
			// current endpoint is radar base endpoint
			if (ep_targetdetect_is_compatible_endpoint(protocolHandle, i) == 0) {
				endpointRadarBase = i;
				continue;
			}
		}
	}


	if (endpointRadarBase >= 0)
	{
		// register call back functions for adc data
		ep_targetdetect_set_callback_target_processing(received_frame_data, NULL);

		while (1)
		{
			// get raw data
			res = ep_targetdetect_get_targets(protocolHandle, endpointRadarBase);
			delay(1);
		}
	}
	return res;
}



void main() {
	read_targ();
}