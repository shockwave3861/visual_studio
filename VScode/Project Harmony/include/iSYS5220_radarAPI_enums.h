/**************************************************************************************

      II    N     N     N     N      OOOO      SSSSS     EEEEE    N     N    TTTTTTT
     II    NNN   N     NNN   N    OO    OO    S         E        NNN   N       T
    II    N NN  N     N NN  N    OO    OO    SSSSS     EEE      N NN  N       T
   II    N  NN N     N  NN N    OO    OO        S     E        N  NN N       T
  II    N    NN     N    NN      OOOO      SSSSS     EEEEE    N    NN       T
                         copyright (c) 2019, InnoSenT GmbH
                                 all rights reserved

***************************************************************************************

    filename:			iSYS5220_radarAPI_enums.h
    brief:				enums
    creation:			22.08.2019
    author:				Sebastian Weidmann
    version:			v1.101
    last edit:          22.08.2019
    last editor:        Sebastian Weidmann
    change:
    compile switches:



***************************************************************************************/

#ifndef RADARAPI_ENUMS_H
#define RADARAPI_ENUMS_H

/**************************************************************************************
  includes
**************************************************************************************/
#include "iSYS5220_radarAPI_basicTypes.h"


/**************************************************************************************
   typedefs
**************************************************************************************/

typedef enum {
    ISYS5220_API_ERR_OK                                          = 0x0000,
    ISYS5220_API_ERR_HANDLE_NOT_INITIALISED                      ,
    ISYS5220_API_ERR_SYSTEM_ALREADY_INITIALISED                  ,
    ISYS5220_API_ERR_SYSTEM_NOT_INITIALISED                      ,
    ISYS5220_API_ERR_CMD_SOCKET_CONNECTION_LOST                  ,
    ISYS5220_API_ERR_CMD_NOT_ACCEPTED                            ,
    ISYS5220_API_ERR_CMD_NOT_WRITEABLE                           ,
    ISYS5220_API_ERR_CMD_DATA_CORRUPTED                          ,
    ISYS5220_API_ERR_CMD_PARAMETER                               ,
    ISYS5220_API_ERR_CREATE_HANDLE                               ,
    ISYS5220_API_ERR_OBJECT_SOCKET_NO_CONNECTION_AVAILABLE       ,
    ISYS5220_API_ERR_OBJECT_SOCKET_CONNECTION_LOST               ,
    ISYS5220_API_ERR_SYSTEM_FILENAME_NOT_VALID                   ,
    ISYS5220_API_ERR_CMD_TOO_MUCH_DATA_TO_READ                   ,
    ISYS5220_API_ERR_CMD_STILL_DATA_AVAILABLE                    ,
    ISYS5220_API_ERR_NULL_POINTER                                ,
    ISYS5220_API_ERR_OBJECT_NO_VALID_SOCKET                      ,
    ISYS5220_API_ERR_CMD_UNKNOWN                                 ,
    ISYS5220_API_ERR_FUNCTION_DEPRECATED                         ,
    ISYS5220_API_ERR_CONNECTION_CLOSED                           ,
    ISYS5220_API_ERR_CONNECTION_RESET                            ,
    ISYS5220_API_ERR_COMMUNICATION_TIMEOUT                       ,
    ISYS5220_API_ERR_COMMUNICATION_ERROR                         ,
    ISYS5220_API_ERR_CONNECTION_LOST                             ,
    ISYS5220_API_ERR_ISYS_NOT_FOUND                              ,
    ISYS5220_API_ERR_IP_MASK                                     ,
    ISYS5220_API_ERR_CMD_TOO_LESS_DATA_TO_READ                   ,
    ISYS5220_API_ERR_MUTEX_ERROR                                 ,
    ISYS5220_API_ERR_OBJECT_LIST_MUTEX                           ,
    ISYS5220_API_ERR_OBJECT_THREAD_INIT                          ,
    ISYS5220_API_ERR_OBJECT_LIST_TIMEOUT                         ,
    ISYS5220_API_ERR_OBJECT_LIST_UNKNOWN                         ,
    ISYS5220_API_ERR_OBJECT_LIST_DISCONNECTED_BY_SYSTEM          ,
    ISYS5220_API_ERR_OBJECT_LIST_DISCONNECTED_BY_DLL             ,
    ISYS5220_API_ERR_OBJECT_LIST_RESET                           ,
    ISYS5220_API_ERR_OBJECT_LIST_SOCKET_NULL                     ,
    ISYS5220_API_ERR_OBJECT_LIST_SET_MUTEX                       ,
    ISYS5220_API_ERR_OBJECT_LIST_NO_VALID_MUTEX                  ,
    ISYS5220_API_ERR_OBJECT_LIST_MUTEX_TIMED_OUT                 ,
    ISYS5220_API_ERR_COMMBUFFER_RAWDATA_SOCKET_CONNECTION_LOST   = 0x100 ,
    ISYS5220_API_ERR_COMMBUFFER_RAWDATA_TIMEOUT                  ,
    ISYS5220_API_ERR_COMMBUFFER_RAWDATA_MUTEX                    ,
    ISYS5220_API_ERR_COMMBUFFER_RAWDATA_MUTEX_TIMEOUT            ,
    ISYS5220_API_ERR_COMMBUFFER_RAWDATA_INIT                     ,
    ISYS5220_API_ERR_NO_CONNECTION_AVAILABLE                     = 0x200 ,
    ISYS5220_API_ERR_NO_VALID_SOCKET                             ,
    ISYS5220_API_ERR_ISYS_SW_VERSION_NOT_SUPPORTED               ,
    ISYS5220_API_ERR_RAWDATA_NO_FIRST_VALID_FRAME                ,
    ISYS5220_API_ERR_OBJECT_LIST_SIZE_METRIC_IMPERIAL            ,
    ISYS5220_API_ERR_FIRMWARE_VERSION_INCOMPATIBLE
} iSYS5220_Result_t;

typedef enum {
    ISYS5220_API_TRACK_CLASS_OTHERS          =  2u,
    ISYS5220_API_TRACK_CLASS_PEDESTRIAN      = 10u,
    ISYS5220_API_TRACK_CLASS_BICYCLE         = 12u,
    ISYS5220_API_TRACK_CLASS_CAR             = 30u,
    ISYS5220_API_TRACK_CLASS_SMALL_TRUCK     = 60u,
    ISYS5220_API_TRACK_CLASS_BIG_TRUCK       = 70u
}iSYS5220_TrackClass_t;

union iSYS5220_TrackClass_u {
    iSYS5220_TrackClass_t iSYS5220_TrackClass;
    uint32_t dummy;
};

typedef enum {
    ISYS5220_API_OBJECT_LIST_OK                          = 0x00,
    ISYS5220_API_OBJECT_LIST_FULL                        = 0x01,
    ISYS5220_API_OBJECT_LIST_REFRESHED                   = 0x02,
    ISYS5220_API_OBJECT_LIST_ALREADY_REQUESTED           = 0x03,
    ISYS5220_API_OBJECT_LIST_NOT_RUNNING                 = 0x04,
    ISYS5220_API_OBJECT_LIST_FIRMWARE_UPDATE_RUNNING     = 0x05,
    ISYS5220_API_OBJECT_LIST_LISTENING                   = 0x06,
    ISYS5220_API_OBJECT_LIST_COMMUNICATION_TIMEOUT       = 0x07
} iSYS5220_ObjectListError_t;

union iSYS5220_ObjectListError_u {
    iSYS5220_ObjectListError_t iSYS5220_ObjectListError;
    uint32_t dummy;
};

typedef enum {
    ISYS5220_API_TARGET_LIST_OK                          = 0x00,
    ISYS5220_API_TARGET_LIST_FULL                        = 0x01,
    ISYS5220_API_TARGET_LIST_REFRESHED                   = 0x02,
    ISYS5220_API_TARGET_LIST_ALREADY_REQUESTED           = 0x03,
    ISYS5220_API_TARGET_LIST_NOT_ACTIVE                  = 0x04,
    ISYS5220_API_TARGET_LIST_FIRMWARE_UPDATE_RUNNING     = 0x05,
    ISYS5220_API_TARGET_LIST_LISTENING                   = 0x06,
    ISYS5220_API_TARGET_LIST_COMMUNICATION_TIMEOUT       = 0x07
} iSYS5220_TargetListError_t;

union iSYS5220_TargetListError_u {
    iSYS5220_TargetListError_t iSYS5220_TargetListError;
    uint32_t dummy;
};

typedef enum {
    ISYS5220_API_LOCATION_RAM = 0,
    ISYS5220_API_LOCATION_EEPROM = 1
} iSYS5220_SaveLocation_t;

typedef enum {
    ISYS5220_API_NETWORK_DHCP = 0,
    ISYS5220_API_NETWORK_STATICIP = 1
} iSYS5220_NetworkSetting_t;

typedef enum {
    ISYS5220_API_DIRECTION_APPROACHING               = 0x00,
    ISYS5220_API_DIRECTION_RECEDING                  = 0x01,
    ISYS5220_API_DIRECTION_BOTH                      = 0x02
}iSYS5220_TrafficDirection_t;

typedef enum {
    ISYS5220_FREQUENCY_CHANNEL_1 = 1,
    ISYS5220_FREQUENCY_CHANNEL_2 = 2,
    ISYS5220_FREQUENCY_CHANNEL_3 = 3,
    ISYS5220_FREQUENCY_CHANNEL_4 = 4
} iSYS5220_FrequencyChannel_t;

typedef enum {
    ISYS5220_EVENTZONE_MOTION                 = 0x00,
    ISYS5220_EVENTZONE_PRESENCE               = 0x01,
    ISYS5220_EVENTZONE_SIDEWALK               = 0x02
} iSYS5220_EventZoneType_t;

typedef enum {
    ISYS5220_CONDITIONCLASS_ALL                    = 0x00,
    ISYS5220_CONDITIONCLASS_CAR                    = 0x01,
    ISYS5220_CONDITIONCLASS_BIKE_PEDEST            = 0x02,
    ISYS5220_CONDITIONCLASS_SMALL_TRUCK            = 0x03,
    ISYS5220_CONDITIONCLASS_BIG_TRUCK              = 0x04,
    ISYS5220_CONDITIONCLASS_CAR_BIG_TRUCK          = 0x05,
    ISYS5220_CONDITIONCLASS_CAR_SMALL_TRUCK        = 0x06,
    ISYS5220_CONDITIONCLASS_CAR_SMALL_BIG_TRUCK    = 0x07
} iSYS5220_ConditionClass_t;

typedef enum {
    ISYS5220_CONDITIONDIRECTION_BOTH           = 0x00,
    ISYS5220_CONDITIONDIRECTION_APPROACHING    = 0x01,
    ISYS5220_CONDITIONDIRECTION_RECEDING       = 0x02
} iSYS5220_ConditionDirection_t;

typedef enum {
    ISYS5220_UNIT_METER                       = 0x00,
    ISYS5220_UNIT_KMH                         = 0x01,
    ISYS5220_UNIT_FEET                        = 0x02,
    ISYS5220_UNIT_MPH                         = 0x03
} iSYS5220_UnitType_t;

typedef enum {
    ISYS5220_BAUDRATE_115200 = 115200,
    ISYS5220_BAUDRATE_230400 = 230400
} iSYS5220_RS485_Baudrate_t;

typedef enum {
    ISYS5220_UDP_MODE_BROADCAST = 0,
    ISYS5220_UDP_MODE_MULTICAST = 1,
    ISYS5220_UDP_MODE_IP        = 2
} iSYS5220_Udp_Mode_t;

typedef enum {
    /* UTC-10 */
    ISYS5220_API_TIMEZONE_ALEUTIAN                   = 0,  /* US/Aleutian */
    ISYS5220_API_TIMEZONE_HAWAII                     ,     /* US/Hawaii */

    /* UTC-9:30 */
    ISYS5220_API_TIMEZONE_MARQUESAS                  ,     /* Pacific/Marquesas */

    /* UTC-9:00 */
    ISYS5220_API_TIMEZONE_ALASKA                     ,     /* US/Alaska */

    /* UTC-8:00 */
    ISYS5220_API_TIMEZONE_PACIFIC_TIME               ,     /* US/Pacific */

    /* UTC-7:00 */
    ISYS5220_API_TIMEZONE_ARIZONA                    ,     /* US/Arizona */
    ISYS5220_API_TIMEZONE_MOUNTAIN_TIME              ,     /* US/Mountain */
    ISYS5220_API_TIMEZONE_LA_PAZ                     ,     /* America/La_Paz */

    /* UTC-6:00 */
    ISYS5220_API_TIMEZONE_CENTRAL_TIME               ,     /* US/Central */
    ISYS5220_API_TIMEZONE_MEXICO_CITY                ,     /* America/Mexico_City */
    ISYS5220_API_TIMEZONE_EASTER                     ,     /* Pacific/Easter */

    /* UTC-5:00 */
    ISYS5220_API_TIMEZONE_BOGOTA_LIMA_QUITO_RIO_BRANCO   ,     /* America/Bogota */
    ISYS5220_API_TIMEZONE_EASTERN_TIME               ,     /* US/Easternr */

    /* UTC-4:00 */
    ISYS5220_API_TIMEZONE_ASUNCION                   ,     /* America/Asuncion */
    ISYS5220_API_TIMEZONE_CARACAS                    ,     /* America/Caracas */
    ISYS5220_API_TIMEZONE_CUIABA                     ,     /* America/Cuiaba */
    ISYS5220_API_TIMEZONE_SANTAGIO                   ,     /* America/Santiago */

    /* UTC-3:00 */
    ISYS5220_API_TIMEZONE_BUENOS_AIRES               ,     /* America/Argentina/Buenos_Aires */
    ISYS5220_API_TIMEZONE_CAYENNE                    ,     /* America/Cayenne */
    ISYS5220_API_TIMEZONE_MONTEVIDEO                 ,     /* America/Montevideo */
    ISYS5220_API_TIMEZONE_EL_SALVADOR                ,     /* America/El_Salvador */
    ISYS5220_API_TIMEZONE_MIQUELON                   ,     /* America/Miquelon */

    /* UTC-0:00  GREENWICH-TIME */
    ISYS5220_API_TIMEZONE_CASABLANCA                 ,     /* Africa/Casablanca */
    ISYS5220_API_TIMEZONE_DUBLIN                     ,     /* Europe/Dublin */
    ISYS5220_API_TIMEZONE_MONROVIA                   ,     /* Africa/Monrovia */

    /* UTC+1:00 */
    ISYS5220_API_TIMEZONE_AMSTERDAM_BERLIN_ROME_STOCKHOLM_VIENNA                  ,     /* Europe/Amsterdam */
    ISYS5220_API_TIMEZONE_BELGRADE                   ,     /* Europe/Belgrade */
    ISYS5220_API_TIMEZONE_BRUSSELS                   ,     /* Europe/Brussels */
    ISYS5220_API_TIMEZONE_SARAJEVO                   ,     /* Europe/Sarajevo */
    ISYS5220_API_TIMEZONE_WINDHOEK                   ,     /* Africa/Windhoek */

    /* UTC+2:00 */
    ISYS5220_API_TIMEZONE_AMMAM                      ,     /* Asia/Amman */
    ISYS5220_API_TIMEZONE_ATHENS                     ,     /* Europe/Athens */
    ISYS5220_API_TIMEZONE_BEIRUT                     ,     /* Asia/Beirut */
    ISYS5220_API_TIMEZONE_CHISINAU                   ,     /* Europe/Chisinau */
    ISYS5220_API_TIMEZONE_DAMASCUS                   ,     /* Asia/Damascus */
    ISYS5220_API_TIMEZONE_GAZA                       ,     /* Asia/Gaza */
    ISYS5220_API_TIMEZONE_HARARE                     ,     /* Africa/Harare */
    ISYS5220_API_TIMEZONE_HELSINKI                   ,     /* Europe/Helsinki */
    ISYS5220_API_TIMEZONE_JERUSALEM                  ,     /* Asia/Jerusalem */
    ISYS5220_API_TIMEZONE_KALININGRAD                ,     /* Europe/Kaliningrad */
    ISYS5220_API_TIMEZONE_CAIRO                      ,     /* Africa/Cairo */
    ISYS5220_API_TIMEZONE_TRIPOLIS                   ,     /* Africa/Tripoli */

    /* UTC+3:00 */
    ISYS5220_API_TIMEZONE_ISTANBUL                   ,     /* Europe/Istanbul */
    ISYS5220_API_TIMEZONE_KUWAIT                     ,     /* Asia/Kuwait */
    ISYS5220_API_TIMEZONE_MINSK                      ,     /* Europe/Minsk */
    ISYS5220_API_TIMEZONE_MOSCOW                     ,     /* Europe/Moscow */
    ISYS5220_API_TIMEZONE_NAIROBI                    ,     /* Africa/Nairobi */

    /* UTC+4:00 */
    ISYS5220_API_TIMEZONE_BAKU                       ,     /* Asia/Baku */
    ISYS5220_API_TIMEZONE_SAMARA                     ,     /* Europe/Samara */

    /* UTC+4:30 */
    ISYS5220_API_TIMEZONE_KABUL                      ,     /* Asia/Kabul */

    /* UTC+5:00 */
    ISYS5220_API_TIMEZONE_ASHGABAT                   ,     /* Asia/Ashgabat */
    ISYS5220_API_TIMEZONE_KARACHI                    ,     /* Asia/Karachi */

    /* UTC+5:30 */
    ISYS5220_API_TIMEZONE_KOLKATA                    ,     /* Asia/Kolkata */

    /* UTC+5:45 */
    ISYS5220_API_TIMEZONE_KATMANDU                   ,     /* Asia/Katmandu */

    /* UTC+6:00 */
    ISYS5220_API_TIMEZONE_OMSK                       ,     /* Asia/Omsk */

    /* UTC+7:00 */
    ISYS5220_API_TIMEZONE_BANGKOK_HANOI_JAKARTA      ,     /* Asia/Bangkok */
    ISYS5220_API_TIMEZONE_HOVD                       ,     /* Asia/Hovd */
    ISYS5220_API_TIMEZONE_KRASNOYARSK                ,     /* Asia/Krasnoyarsk */

    /* UTC+8:00 */
    ISYS5220_API_TIMEZONE_IRKUTSK                    ,     /* Asia/Irkutsk */
    ISYS5220_API_TIMEZONE_KUALA_LUMPUR               ,     /* Asia/Kuala_Lumpur */
    ISYS5220_API_TIMEZONE_HONG_KONG                  ,     /* Asia/Hong_Kong */
    ISYS5220_API_TIMEZONE_PERTH                      ,     /* Australia/Perth */
    ISYS5220_API_TIMEZONE_ULAN_BATOR                 ,     /* Asia/Ulan_Bator */
    ISYS5220_API_TIMEZONE_TAIPEI                     ,     /* Asia/Taipei */

    /* UTC+8:30 */
    ISYS5220_API_TIMEZONE_PYONGYANG                  ,     /* Asia/Pyongyang */

    /* UTC+8:45 */
    ISYS5220_API_TIMEZONE_EUCLA                      ,     /* Australia/Eucla */

    /* UTC+9:00 */
    ISYS5220_API_TIMEZONE_SEOUL                      ,     /* Asia/Seoul */

    /* UTC+9:30 */
    ISYS5220_API_TIMEZONE_ADELAIDE                   ,     /* Australia/Adelaide */
    ISYS5220_API_TIMEZONE_DARWIN                     ,     /* Australia/Darwin */

    /* UTC+10:00 */
    ISYS5220_API_TIMEZONE_BRISBANE                   ,     /* Australia/Brisbane */
    ISYS5220_API_TIMEZONE_CANBERRA                   ,     /* Australia/Canberra */
    ISYS5220_API_TIMEZONE_GUAM                       ,     /* Pacific/Guam */
    ISYS5220_API_TIMEZONE_HOBART                     ,     /* Australia/Hobart */
    ISYS5220_API_TIMEZONE_VLADIVOSTOK                ,     /* Asia/Vladivostok */

    /* UTC+10:30 */
    ISYS5220_API_TIMEZONE_LORD_HOWE                  ,     /* Australia/Lord_Howe */

    /* UTC+11:00 */
    ISYS5220_API_TIMEZONE_MAGADAN                    ,     /* Asia/Magadan */
    ISYS5220_API_TIMEZONE_NORFOLK                    ,     /* Pacific/Norfolk */

    /* UTC+12:00 */
    ISYS5220_API_TIMEZONE_AUCKLAND                   ,     /* Pacific/Auckland */
    ISYS5220_API_TIMEZONE_FIJI                       ,     /* Pacific/Fiji */

    /* UTC+12:45 */
    ISYS5220_API_TIMEZONE_CHATHAM                    ,     /* Pacific/Chatham */

    /* UTC+13:00 */
    ISYS5220_API_TIMEZONE_SAMOA                      ,     /* Pacific/Samoa */

    /* UTC+14:00 */
    ISYS5220_API_TIMEZONE_KIRIMATI                   ,     /* Pacific/Kiritimati */

    /* UTC MAX */
    ISYS5220_API_TIMEZONE_MAX
} iSYS5220_TimeZone_t ;

#endif // RADARAPI_ENUMS_H
