// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gpd_ros:srv/ComputeGraspPoses.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gpd_ros/srv/compute_grasp_poses.h"


#ifndef GPD_ROS__SRV__DETAIL__COMPUTE_GRASP_POSES__STRUCT_H_
#define GPD_ROS__SRV__DETAIL__COMPUTE_GRASP_POSES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'grasps'
#include "gpd_ros/msg/detail/grasp_config_list__struct.h"

/// Struct defined in srv/ComputeGraspPoses in the package gpd_ros.
typedef struct gpd_ros__srv__ComputeGraspPoses_Request
{
  gpd_ros__msg__GraspConfigList grasps;
} gpd_ros__srv__ComputeGraspPoses_Request;

// Struct for a sequence of gpd_ros__srv__ComputeGraspPoses_Request.
typedef struct gpd_ros__srv__ComputeGraspPoses_Request__Sequence
{
  gpd_ros__srv__ComputeGraspPoses_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpd_ros__srv__ComputeGraspPoses_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'target_poses'
// Member 'approach_poses'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/ComputeGraspPoses in the package gpd_ros.
typedef struct gpd_ros__srv__ComputeGraspPoses_Response
{
  geometry_msgs__msg__Pose__Sequence target_poses;
  geometry_msgs__msg__Pose__Sequence approach_poses;
} gpd_ros__srv__ComputeGraspPoses_Response;

// Struct for a sequence of gpd_ros__srv__ComputeGraspPoses_Response.
typedef struct gpd_ros__srv__ComputeGraspPoses_Response__Sequence
{
  gpd_ros__srv__ComputeGraspPoses_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpd_ros__srv__ComputeGraspPoses_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  gpd_ros__srv__ComputeGraspPoses_Event__request__MAX_SIZE = 1
};
// response
enum
{
  gpd_ros__srv__ComputeGraspPoses_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ComputeGraspPoses in the package gpd_ros.
typedef struct gpd_ros__srv__ComputeGraspPoses_Event
{
  service_msgs__msg__ServiceEventInfo info;
  gpd_ros__srv__ComputeGraspPoses_Request__Sequence request;
  gpd_ros__srv__ComputeGraspPoses_Response__Sequence response;
} gpd_ros__srv__ComputeGraspPoses_Event;

// Struct for a sequence of gpd_ros__srv__ComputeGraspPoses_Event.
typedef struct gpd_ros__srv__ComputeGraspPoses_Event__Sequence
{
  gpd_ros__srv__ComputeGraspPoses_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpd_ros__srv__ComputeGraspPoses_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPD_ROS__SRV__DETAIL__COMPUTE_GRASP_POSES__STRUCT_H_
