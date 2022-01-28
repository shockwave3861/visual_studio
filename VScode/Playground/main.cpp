#include "stdio.h"

#define ISYS_5220_MAX_EVENT_MESSAGE_LENGTH               (128)
#define ISYS_5220_MAX_NR_OF_EVENT_MESSAGES               (256)
#define ISYS_5220_MAX_NR_OF_TRACKS     	(256)

typedef struct iSYS5220_eventMessage {
	char c_eventMessage[ISYS_5220_MAX_EVENT_MESSAGE_LENGTH];
	int ui8_eventMessageLength;
} iSYS5220_EventMessage_t;

typedef struct iSYS5220_EventMessageList {
	iSYS5220_EventMessage_t eventMessages[ISYS_5220_MAX_NR_OF_EVENT_MESSAGES];
	int nrOfMessages;
} iSYS5220_EventMessageList_t;

typedef enum {
	ISYS5220_API_TRACK_CLASS_OTHERS = 2u,
	ISYS5220_API_TRACK_CLASS_PEDESTRIAN = 10u,
	ISYS5220_API_TRACK_CLASS_BICYCLE = 12u,
	ISYS5220_API_TRACK_CLASS_CAR = 30u,
	ISYS5220_API_TRACK_CLASS_SMALL_TRUCK = 60u,
	ISYS5220_API_TRACK_CLASS_BIG_TRUCK = 70u
}iSYS5220_TrackClass_t;

union iSYS5220_TrackClass_u {
	iSYS5220_TrackClass_t iSYS5220_TrackClass;
	int dummy;
};

typedef enum {
	ISYS5220_API_OBJECT_LIST_OK = 0x00,
	ISYS5220_API_OBJECT_LIST_FULL = 0x01,
	ISYS5220_API_OBJECT_LIST_REFRESHED = 0x02,
	ISYS5220_API_OBJECT_LIST_ALREADY_REQUESTED = 0x03,
	ISYS5220_API_OBJECT_LIST_NOT_RUNNING = 0x04,
	ISYS5220_API_OBJECT_LIST_FIRMWARE_UPDATE_RUNNING = 0x05,
	ISYS5220_API_OBJECT_LIST_LISTENING = 0x06,
	ISYS5220_API_OBJECT_LIST_COMMUNICATION_TIMEOUT = 0x07
} iSYS5220_ObjectListError_t;

union iSYS5220_ObjectListError_u {
	iSYS5220_ObjectListError_t iSYS5220_ObjectListError;
	int dummy;
};

typedef struct {
	int ui32_objectID;
	int ui16_ageCount;
	int ui16_predictionCount;
	int ui16_staticCount;
	float f32_trackQuality;                             /* track quality */
	union iSYS5220_TrackClass_u classID;                    /* object class of vehicle [id] */
	int si16_motion_eventZoneIndex;                    /* object in motion eventzone [index] */
	int si16_presence_eventZoneIndex;                  /* object in presence eventzone [index] */
	float f32_positionX_m;                              /* position x in cartesian coordiante system [meter] */
	float f32_positionY_m;                              /* position y in cartesian coordiante system [meter] */
	float f32_velocityX_mps;                            /* velocity x in cartesian coordiante system [meter per second] */
	float f32_velocityY_mps;                            /* velocity y in cartesian coordiante system [meter per second] */
	float f32_velocityInDir_mps;                        /* velocity in direction Meter per Second [meter per second] */
	float f32_directionX;                               /* normed direction x */
	float f32_directionY;                               /* normed direction y */
	float f32_distanceToFront_m;                        /* distance To Front [meter] */
	float f32_distanceToBack_m;                         /* distance To Back [meter] */
	float f32_length_m;                                 /* length of object [meter] */
	float f32_width_m;                                  /* width of object [meter] */
} iSYS5220_TrackedObject_t;

typedef struct {
	union iSYS5220_ObjectListError_u error;
	float f32_rainInterferenceLevel;
	int nrOfTracks;
	int systemState;
	int configurationChanged;
	int reserved3;
	iSYS5220_TrackedObject_t trackedObjects[ISYS_5220_MAX_NR_OF_TRACKS];
	iSYS5220_EventMessageList_t eventMessages;
} iSYS5220_ObjectList_t;


int main(void) {
	
	//iSYS5220_TrackClass_t test = ISYS5220_API_TRACK_CLASS_CAR;
	//printf("%d", test);
	iSYS5220_ObjectList_t obj;
	obj.trackedObjects[0].classID.iSYS5220_TrackClass = ISYS5220_API_TRACK_CLASS_BICYCLE;
	printf("%d", obj.trackedObjects[0].classID.iSYS5220_TrackClass);
}