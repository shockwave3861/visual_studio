/**************************************************************************************

      II    N     N     N     N      OOOO      SSSSS     EEEEE    N     N    TTTTTTT
     II    NNN   N     NNN   N    OO    OO    S         E        NNN   N       T
    II    N NN  N     N NN  N    OO    OO    SSSSS     EEE      N NN  N       T
   II    N  NN N     N  NN N    OO    OO        S     E        N  NN N       T
  II    N    NN     N    NN      OOOO      SSSSS     EEEEE    N    NN       T
                         copyright (c) 2019, InnoSenT GmbH
                                 all rights reserved

***************************************************************************************

    filename:			iSYS5220_radarAPI_structs.h
    brief:				structs
    creation:			22.08.2019
    author:				Sebastian Weidmann

    version:			v1.101
    last edit:          22.08.2019
    last editor:        Sebastian Weidmann
    change:
    compile switches:



***************************************************************************************/

#ifndef iSYS5220_RADARAPI_STRUCTS_H
#define iSYS5220_RADARAPI_STRUCTS_H

/**************************************************************************************
  includes
**************************************************************************************/
#include "iSYS5220_radarAPI_basicTypes.h"
#include "iSYS5220_radarAPI_enums.h"

#include <cstdlib>
#include <string>


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

#define MAX_TRACKS (0x3C)
#define MAX_DETECTIONS (0x3C * 4)
#define MAX_SYSTEMS_CONNECTED (255)
#define ISYS_5220_MAX_NR_OF_TRACKS     	(256)
#define ISYS_5220_MAX_NR_OF_DETECTIONS  (512)
#define ISYS_5220_MAX_NR_OF_IGNOREZONES                  (10)
#define ISYS_5220_MAX_NR_OF_EVENTZONES                   (64)
#define ISYS_5220_MAX_NR_OF_POINTS_PER_EVENT_ZONE        (20)
#define ISYS_5220_MAX_NR_OF_POINTS_PER_IGNORE_ZONE       (10)
#define ISYS_5220_MAX_LENGTH_EVENTZONE_NAME              (20)
#define ISYS_5220_MAX_LENGTH_IGNOREZONE_NAME             (20)
#define ISYS_5220_MAX_LENGTH_DESCRIPTION_NAME            (64)
#define ISYS_5220_MAX_NR_OF_CONDITIONS                   (10)
#define ISYS_5220_MAX_EVENT_MESSAGE_LENGTH               (128)
#define ISYS_5220_MAX_NR_OF_EVENT_MESSAGES               (256)


#ifdef __cplusplus
extern "C" {
#endif

#ifdef WIN32
/* windows stuff */
#else
typedef unsigned long DWORD;
typedef unsigned short WORD;
typedef unsigned int UNINT32;
#endif

/**************************************************************************************
   typedefs
**************************************************************************************/
typedef struct iSYS5220_eventMessage{
    char c_eventMessage[ISYS_5220_MAX_EVENT_MESSAGE_LENGTH];
    uint8_t ui8_eventMessageLength;
} iSYS5220_EventMessage_t;

typedef struct iSYS5220_EventMessageList{
    iSYS5220_EventMessage_t eventMessages[ISYS_5220_MAX_NR_OF_EVENT_MESSAGES];
    uint8_t nrOfMessages;
} iSYS5220_EventMessageList_t;

typedef struct {
    uint32_t ui32_objectID;
    uint16_t ui16_ageCount;
    uint16_t ui16_predictionCount;
    uint16_t ui16_staticCount;
    float32_t f32_trackQuality;                             /* track quality */
    union iSYS5220_TrackClass_u classID;                    /* object class of vehicle [id] */
    sint16_t si16_motion_eventZoneIndex;                    /* object in motion eventzone [index] */
    sint16_t si16_presence_eventZoneIndex;                  /* object in presence eventzone [index] */
    float32_t f32_positionX_m;                              /* position x in cartesian coordiante system [meter] */
    float32_t f32_positionY_m;                              /* position y in cartesian coordiante system [meter] */
    float32_t f32_velocityX_mps;                            /* velocity x in cartesian coordiante system [meter per second] */
    float32_t f32_velocityY_mps;                            /* velocity y in cartesian coordiante system [meter per second] */
    float32_t f32_velocityInDir_mps;                        /* velocity in direction Meter per Second [meter per second] */
    float32_t f32_directionX;                               /* normed direction x */
    float32_t f32_directionY;                               /* normed direction y */
    float32_t f32_distanceToFront_m;                        /* distance To Front [meter] */
    float32_t f32_distanceToBack_m;                         /* distance To Back [meter] */
    float32_t f32_length_m;                                 /* length of object [meter] */
    float32_t f32_width_m;                                  /* width of object [meter] */
} iSYS5220_TrackedObject_t;

typedef struct {
    union iSYS5220_ObjectListError_u error;
    float32_t f32_rainInterferenceLevel;
    uint32_t nrOfTracks;
    uint32_t systemState;
    uint8_t configurationChanged;
    uint32_t reserved3;
    iSYS5220_TrackedObject_t trackedObjects[ISYS_5220_MAX_NR_OF_TRACKS];
    iSYS5220_EventMessageList_t eventMessages;
} iSYS5220_ObjectList_t;

typedef struct {
    uint32_t ui32_objectID;
    uint16_t ui16_ageCount;
    uint16_t ui16_predictionCount;
    uint16_t ui16_staticCount;
    float32_t f32_trackQuality;                             /* track quality */
    union iSYS5220_TrackClass_u classID;                    /* object class of vehicle [] */
    sint16_t si16_motion_eventZoneIndex;                    /* object in motion eventzone [index] */
    sint16_t si16_presence_eventZoneIndex;                  /* object in presence eventzone [index] */
    float32_t f32_positionX_feet;                           /* position x in cartesian coordiante system [feet] */
    float32_t f32_positionY_feet;                           /* position y in cartesian coordiante system [feet] */
    float32_t f32_velocityX_mph;                            /* velocity x in cartesian coordiante system [miles per hour] */
    float32_t f32_velocityY_mph;                            /* velocity y in cartesian coordiante system [miles per hour] */
    float32_t f32_velocityInDir_mph;                        /* velocity in direction [miles per hour] */
    float32_t f32_directionX;                               /* normed direction x */
    float32_t f32_directionY;                               /* normed direction y */
    float32_t f32_distanceToFront_feet;                     /* distance To Front [feet] */
    float32_t f32_distanceToBack_feet;                     /* distance To Back [feet] */
    float32_t f32_length_feet;                             /* length of object [feet] */
    float32_t f32_width_feet;                              /* width of object [feet] */
} iSYS5220_TrackedObjectImperial_t;

typedef struct {
    union iSYS5220_ObjectListError_u error;
    float32_t f32_rainInterferenceLevel;
    uint32_t nrOfTracks;
    uint32_t systemState;
    uint8_t configurationChanged;
    uint32_t reserved3;
    iSYS5220_TrackedObjectImperial_t trackedObjects[ISYS_5220_MAX_NR_OF_TRACKS];
    iSYS5220_EventMessageList_t eventMessages;
} iSYS5220_ObjectListImperial_t;

typedef struct {
    float32_t swVersion;
    float32_t blVersion;
    float32_t serialNumber;
}iSYS5220_DeviceInfo_t;

typedef struct {
    uint32_t productcode;
    uint32_t serialNumber;
    uint32_t swVersionMajor;
    uint32_t swVersionMinor;
    uint32_t hwVersionMajor;
    uint32_t hwVersionMinor;
    uint32_t reserverd1;
    uint32_t reserverd2;
} iSYS5220_SystemInfo_t;

typedef struct {
    float32_t x;
    float32_t y;
} iSYS5220_PointXY_t;

union iSYS5220_TrafficDirection_u{
    iSYS5220_TrafficDirection_t direction;
    uint32_t dummy;
};

typedef struct {
    bool enable;
    uint8_t outputNumber;
    iSYS5220_ConditionClass_t conditionClass;
    iSYS5220_ConditionDirection_t direction;
    float32_t velocity_min_kmh;
    float32_t velocity_max_kmh;
    float32_t queuelength_min_m;
    float32_t queuelength_max_m;
    uint16_t eventmessage_delay;
    uint16_t eventmessage_extend;
    float32_t eta_min_s;
    float32_t eta_max_s;
    uint8_t nrOfPedestBikes_min;
    uint8_t nrOfPedestBikes_max;
    uint8_t nrOfCars_min;
    uint8_t nrOfCars_max;
    uint8_t nrOfSmallTrucks_min;
    uint8_t nrOfSmallTrucks_max;
    uint8_t nrOfBigTrucks_min;
    uint8_t nrOfBigTrucks_max;
} iSYS5220_Condition_t;

/* event zone struct */
typedef struct {
    bool enable;
    bool eventFlag;
    char zoneName[ISYS_5220_MAX_LENGTH_EVENTZONE_NAME];
    uint8_t zoneNameLength;
    uint32_t nrOfZonePoints;
    iSYS5220_PointXY_t zoneData[ISYS_5220_MAX_NR_OF_POINTS_PER_EVENT_ZONE];
    iSYS5220_Condition_t conditions[ISYS_5220_MAX_NR_OF_CONDITIONS];
    iSYS5220_EventZoneType_t zoneType;    /* EventZone Type */
    uint8_t phaseNumber;
    uint8_t outputNumber;
    uint16_t eventmessage_delay;
    uint16_t eventmessage_extend;
    bool eta_enable;
    iSYS5220_PointXY_t etaPoint;
} iSYS5220_EventZone_t;

typedef struct {
    iSYS5220_EventZone_t eventZones[ISYS_5220_MAX_NR_OF_EVENTZONES];
} iSYS5220_EventZones_t;

/* ignore zone struct */
typedef struct {
    bool enable;
    bool eventFlag;
    char zoneName[ISYS_5220_MAX_LENGTH_EVENTZONE_NAME];
    uint8_t zoneNameLength;
    uint32_t nrOfZonePoints;
    iSYS5220_PointXY_t zoneData[ISYS_5220_MAX_NR_OF_POINTS_PER_IGNORE_ZONE];
    bool ignoreEverything;
} iSYS5220_IgnoreZone_t;

typedef struct {
    iSYS5220_IgnoreZone_t ignoreZones[ISYS_5220_MAX_NR_OF_IGNOREZONES];
} iSYS5220_IgnoreZones_t;

/* description */
typedef struct{
    char description[ISYS_5220_MAX_LENGTH_DESCRIPTION_NAME];
    uint8_t descriptionLength;
}iSYS5220_Description_t;

/* self test */
typedef struct{
    uint32_t errorPowerSupply:1;
    uint32_t errorAquisition:1;
    uint32_t errorRxPath:1;
    uint32_t errorIncSensor:1;
    uint32_t errorGpsSensor:1;
    uint32_t errorCalibData:1;
    uint32_t errorPeripherie:1;
    uint32_t errorTemperature:1;
    uint32_t errorInterface:1;

    uint32_t reserved:23;
}iSYS5220_SelfTestFlags_t;

typedef union{
    iSYS5220_SelfTestFlags_t flags;
    uint32_t all;
}iSYS5220_SelfTest_u;

typedef struct APIHandle *APIHandle_t;

#ifdef __cplusplus
}
#endif

#endif // iSYS5220_RADARAPI_STRUCTS_H
