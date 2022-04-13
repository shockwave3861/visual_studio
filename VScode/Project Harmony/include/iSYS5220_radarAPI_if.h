/**************************************************************************************

      II    N     N     N     N      OOOO      SSSSS     EEEEE    N     N    TTTTTTT
     II    NNN   N     NNN   N    OO    OO    S         E        NNN   N       T
    II    N NN  N     N NN  N    OO    OO    SSSSS     EEE      N NN  N       T
   II    N  NN N     N  NN N    OO    OO        S     E        N  NN N       T
  II    N    NN     N    NN      OOOO      SSSSS     EEEEE    N    NN       T
                         copyright (c) 2019, InnoSenT GmbH
                                 all rights reserved

***************************************************************************************

    filename:			iSYS5220_radarAPI_if.h
    brief:
    creation:			22.08.2019
    author:             Sebastian Weidmann

    version:			v1.101
    last edit:          22.08.2019
    last editor:        Sebastian Weidmann
    change:
    compile switches:


***************************************************************************************/

#ifndef iSYS5220_RADARAPI_IF_H
#define iSYS5220_RADARAPI_IF_H

/**************************************************************************************
  includes
**************************************************************************************/
#include "iSYS5220_radarAPI_basicTypes.h"
#include "iSYS5220_radarAPI_enums.h"
#include "iSYS5220_radarAPI_structs.h"


/**************************************************************************************
 defines
**************************************************************************************/
#if defined(_WIN32) && !defined(ISYS5220_RADARAPI_LIBRARY_AS_SOURCE)
    #ifdef iSYS5220_RADARAPI_LIBRARY
        #define RADAR_API_EXPORT __declspec(dllexport)
    #else
        #define RADAR_API_EXPORT __declspec(dllimport)
    #endif
#else
    #ifndef RADAR_API_EXPORT
        #define RADAR_API_EXPORT
    #endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

/**************************************************************************************
 api functions
**************************************************************************************/
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getApiVersion(float32_t *version);

/* system functions */
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_initSystem(APIHandle_t *pHandle, uint8_t ipPart1, uint8_t ipPart2, uint8_t ipPart3, uint8_t ipPart4);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_exitSystem(APIHandle_t pHandle);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_restartSystem(APIHandle_t pHandle);   /* restart system */
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getSystemInfo(APIHandle_t pHandle, iSYS5220_SystemInfo_t *systemInfo); /* get the status of system */
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setDescription(APIHandle_t pHandle, iSYS5220_Description_t description);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getDescription(APIHandle_t pHandle, iSYS5220_Description_t *pDescription);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_selfTest(APIHandle_t pHandle, iSYS5220_SelfTest_u *pSelfTestResult);

/* system configuration functions */
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setNetworkHostname(APIHandle_t pHandle, char *hostName, uint8_t length);    /* set network hostname */
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getNetworkHostname(APIHandle_t pHandle, char *hostName, uint8_t *length);   /* get network hostname */
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setRS485BaudRate(APIHandle_t pHandle, iSYS5220_RS485_Baudrate_t baudrate);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getRS485BaudRate(APIHandle_t pHandle, iSYS5220_RS485_Baudrate_t *baudrate);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setStaticIP(APIHandle_t pHandle, uint8_t ipPart1, uint8_t ipPart2, uint8_t ipPart3, uint8_t ipPart4,
                                                        uint8_t subnetPart1, uint8_t subnetPart2, uint8_t subnetPart3, uint8_t subnetPart4,
                                                        uint8_t stdGatewayPart1, uint8_t stdGatewayPart2, uint8_t stdGatewayPart3, uint8_t stdGatewayPart4); /* change static ip address */
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setDhcpIP(APIHandle_t pHandle);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setInstallationHeight(APIHandle_t pHandle, float32_t height_m);   /* installation height - used by signal processing */
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getInstallationHeight(APIHandle_t pHandle, float32_t *pHeight_m);   /* installation height - used by signal processing */
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setInstallationHeightImperial(APIHandle_t pHandle, float32_t height_ft);   /* installation height - used by signal processing */
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getInstallationHeightImperial(APIHandle_t pHandle, float32_t *pHeight_ft);   /* installation height - used by signal processing */
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setElevationAngle(APIHandle_t pHandle, float32_t angle_deg); /* elevation angle - used by signal processing*/
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getElevationAngle(APIHandle_t pHandle, float32_t *pAngle_deg); /* elevation angle - used by signal processing*/
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getInclinationAngles(APIHandle_t pHandle, float32_t *pPitch_deg, float32_t *pRoll_deg); /* measured by internal inclination sensor */
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getDateTime(APIHandle_t pHandle, uint16_t *year, uint16_t *month, uint16_t *day, uint16_t *hour, uint16_t *minute, uint16_t *second, iSYS5220_TimeZone_t *timeZone);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setDateTime(APIHandle_t pHandle, uint16_t year, uint16_t month, uint16_t day, uint16_t hour, uint16_t minute, uint16_t second, iSYS5220_TimeZone_t timeZone);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getGpsDateTimeSyncEnable(APIHandle_t pHandle, bool_t *enable);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setGpsDateTimeSyncEnable(APIHandle_t pHandle, bool_t enable);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getNtpSyncEnable(APIHandle_t pHandle, bool_t *enable);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setNtpSyncEnable(APIHandle_t pHandle, bool_t enable);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getGpsCoordinates(APIHandle_t pHandle, float32_t *lat, float32_t *lng);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setFrequencyChannel(APIHandle_t pHandle, iSYS5220_FrequencyChannel_t channel);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getFrequencyChannel(APIHandle_t pHandle, iSYS5220_FrequencyChannel_t *channel);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setRainInterferenceLevelThreshold(APIHandle_t pHandle, float32_t threshold_dB);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getRainInterferenceLevelThreshold(APIHandle_t pHandle, float32_t *pThreshold_dB);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setHighwayMode(APIHandle_t pHandle, uint8_t enable);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getHighwayMode(APIHandle_t pHandle, uint8_t *enable);

RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setSimulation(APIHandle_t pHandle, uint8_t enable);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getSimulation(APIHandle_t pHandle, uint8_t *enable);

RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setPlayback(APIHandle_t pHandle, uint8_t enable);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getPlayback(APIHandle_t pHandle, uint8_t *enable);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_uploadPlaybackFile(APIHandle_t pHandle, const char *FilePath);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getUploadPlaybackFileStatus(APIHandle_t pHandle, uint8_t *status_percent, iSYS5220_Result_t *errorcode);

RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setMaxStopTimeObject(APIHandle_t pHandle, uint16_t time_s); /* time (seconds) static track is hold */
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getMaxStopTimeObject(APIHandle_t pHandle, uint16_t *pTime_s); /* time (seconds) static track is hold */

RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setUdpSettings(APIHandle_t pHandle, iSYS5220_Udp_Mode_t mode, uint16_t port, uint8_t dstIpPart1, uint8_t dstIpPart2, uint8_t dstIpPart3, uint8_t dstIpPart4);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getUdpSettings(APIHandle_t pHandle, iSYS5220_Udp_Mode_t *mode, uint16_t *port, uint8_t *dstIpPart1, uint8_t *dstIpPart2, uint8_t *dstIpPart3, uint8_t *dstIpPart4);



/* traffic eventzone functions */
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setEventZones(APIHandle_t pHandle, iSYS5220_EventZones_t eventzones);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getEventZones(APIHandle_t pHandle, iSYS5220_EventZones_t *eventzones);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setEventZonesImperial(APIHandle_t pHandle, iSYS5220_EventZones_t eventzones);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getEventZonesImperial(APIHandle_t pHandle, iSYS5220_EventZones_t *eventzones);

RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setUnitTypes(APIHandle_t pHandle, iSYS5220_UnitType_t distanceUnit, iSYS5220_UnitType_t velocityUnit);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getUnitTypes(APIHandle_t pHandle, iSYS5220_UnitType_t *distanceUnit, iSYS5220_UnitType_t *velocityUnit);


/* traffic ignorezone functions */
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setIgnoreZones(APIHandle_t pHandle, iSYS5220_IgnoreZones_t ignorezones);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getIgnoreZones(APIHandle_t pHandle, iSYS5220_IgnoreZones_t *ignorezones);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_setIgnoreZonesImperial(APIHandle_t pHandle, iSYS5220_IgnoreZones_t ignorezones);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getIgnoreZonesImperial(APIHandle_t pHandle, iSYS5220_IgnoreZones_t *ignorezones);

/* read object list functions */
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getObjectList(APIHandle_t pHandle, iSYS5220_ObjectList_t *pObjectList);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_getObjectListImperial(APIHandle_t pHandle, iSYS5220_ObjectListImperial_t *pObjectListImperial);
RADAR_API_EXPORT iSYS5220_Result_t iSYS5220_removeObject(APIHandle_t pHandle, uint32_t ui32_objectID);      /* remove track */

/**************************************************************************************
 api functions end
**************************************************************************************/


#ifdef __cplusplus
}
#endif

#endif // iSYS5220_RADARAPI_IF_H























