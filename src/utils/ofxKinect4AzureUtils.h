#pragma once

#include "k4a.h"
#include "k4abt.h"

enum OFX_K4A_TRANSFORM_TYPE {
	NONE,
	COLOR_TO_DEPTH,
	DEPTH_TO_COLOR
};

//for skelton
struct ofxKinect4AzureJoint {
	glm::vec3 position;
	glm::quat quaternion;
};

struct ofxKinect4AzureBody {
	int id;
	ofxKinect4AzureJoint joint[K4ABT_JOINT_COUNT];
};

//for imu
struct ofxKinect4AzureImuSample {
	float temperature=0;
	pair<uint64_t,glm::vec3> acc;
	pair<uint64_t, glm::vec3> gyro;
};

static const std::map<k4abt_joint_id_t, string> joint_id_to_name
{
	{ K4ABT_JOINT_PELVIS ,"PELVIS" },
{ K4ABT_JOINT_SPINE_NAVEL ,"SPINE_NAVEL" },
{ K4ABT_JOINT_SPINE_CHEST ,"SPINE_CHEST" },
{ K4ABT_JOINT_NECK ,"NECK" },
{ K4ABT_JOINT_CLAVICLE_LEFT ,"CLAVICLE_LEFT" },
{ K4ABT_JOINT_SHOULDER_LEFT ,"SHOULDER_LEFT" },
{ K4ABT_JOINT_ELBOW_LEFT ,"ELBOW_LEFT" },
{ K4ABT_JOINT_WRIST_LEFT ,"WRIST_LEFT" },
{ K4ABT_JOINT_CLAVICLE_RIGHT ,"CLAVICLE_RIGHT" },
{ K4ABT_JOINT_SHOULDER_RIGHT ,"SHOULDER_RIGHT" },
{ K4ABT_JOINT_ELBOW_RIGHT ,"ELBOW_RIGHT" },
{ K4ABT_JOINT_WRIST_RIGHT ,"WRIST_RIGHT" },
{ K4ABT_JOINT_HIP_LEFT ,"HIP_LEFT" },
{ K4ABT_JOINT_KNEE_LEFT ,"KNEE_LEFT" },
{ K4ABT_JOINT_ANKLE_LEFT ,"ANKLE_LEFT" },
{ K4ABT_JOINT_FOOT_LEFT ,"FOOT_LEFT" },
{ K4ABT_JOINT_HIP_RIGHT ,"HIP_RIGHT" },
{ K4ABT_JOINT_KNEE_RIGHT ,"KNEE_RIGHT" },
{ K4ABT_JOINT_ANKLE_RIGHT ,"ANKLE_RIGHT" },
{ K4ABT_JOINT_FOOT_RIGHT ,"FOOT_RIGHT" },
{ K4ABT_JOINT_HEAD ,"HEAD" },
{ K4ABT_JOINT_NOSE ,"NOSE" },
{ K4ABT_JOINT_EYE_LEFT ,"EYE_LEFT" },
{ K4ABT_JOINT_EAR_LEFT ,"EAR_LEFT" },
{ K4ABT_JOINT_EYE_RIGHT ,"EYE_RIGHT" },
{ K4ABT_JOINT_EAR_RIGHT ,"EAR_RIGHT" }
};

static const std::map<string, k4abt_joint_id_t> name_to_joint_id
{
	{ "PELVIS" ,K4ABT_JOINT_PELVIS },
{ "SPINE_NAVEL",K4ABT_JOINT_SPINE_NAVEL },
{ "SPINE_CHEST",K4ABT_JOINT_SPINE_CHEST },
{ "NECK",K4ABT_JOINT_NECK },
{ "CLAVICLE_LEFT",K4ABT_JOINT_CLAVICLE_LEFT },
{ "SHOULDER_LEFT", K4ABT_JOINT_SHOULDER_LEFT },
{ "ELBOW_LEFT", K4ABT_JOINT_ELBOW_LEFT },
{ "WRIST_LEFT", K4ABT_JOINT_WRIST_LEFT },
{ "CLAVICLE_RIGHT",K4ABT_JOINT_CLAVICLE_RIGHT },
{ "SHOULDER_RIGHT",K4ABT_JOINT_SHOULDER_RIGHT },
{ "ELBOW_RIGHT",K4ABT_JOINT_ELBOW_RIGHT },
{ "WRIST_RIGHT",K4ABT_JOINT_WRIST_RIGHT },
{ "HIP_LEFT",K4ABT_JOINT_HIP_LEFT },
{ "KNEE_LEFT",K4ABT_JOINT_KNEE_LEFT },
{ "ANKLE_LEFT" ,K4ABT_JOINT_ANKLE_LEFT },
{ "FOOT_LEFT",K4ABT_JOINT_FOOT_LEFT },
{ "HIP_RIGHT",K4ABT_JOINT_HIP_RIGHT },
{ "KNEE_RIGHT",K4ABT_JOINT_KNEE_RIGHT },
{ "ANKLE_RIGHT",K4ABT_JOINT_ANKLE_RIGHT },
{ "FOOT_RIGHT",K4ABT_JOINT_FOOT_RIGHT },
{ "HEAD",K4ABT_JOINT_HEAD },
{ "NOSE" ,K4ABT_JOINT_NOSE },
{ "EYE_LEFT" ,K4ABT_JOINT_EYE_LEFT },
{ "EAR_LEFT",K4ABT_JOINT_EAR_LEFT },
{ "EYE_RIGHT",K4ABT_JOINT_EYE_RIGHT },
{ "EAR_RIGHT" ,K4ABT_JOINT_EAR_RIGHT }
};

