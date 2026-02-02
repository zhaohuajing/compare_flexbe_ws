// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gpd_ros:srv/ComputeGraspPoses.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gpd_ros/srv/detail/compute_grasp_poses__rosidl_typesupport_introspection_c.h"
#include "gpd_ros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gpd_ros/srv/detail/compute_grasp_poses__functions.h"
#include "gpd_ros/srv/detail/compute_grasp_poses__struct.h"


// Include directives for member types
// Member `grasps`
#include "gpd_ros/msg/grasp_config_list.h"
// Member `grasps`
#include "gpd_ros/msg/detail/grasp_config_list__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gpd_ros__srv__ComputeGraspPoses_Request__rosidl_typesupport_introspection_c__ComputeGraspPoses_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gpd_ros__srv__ComputeGraspPoses_Request__init(message_memory);
}

void gpd_ros__srv__ComputeGraspPoses_Request__rosidl_typesupport_introspection_c__ComputeGraspPoses_Request_fini_function(void * message_memory)
{
  gpd_ros__srv__ComputeGraspPoses_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember gpd_ros__srv__ComputeGraspPoses_Request__rosidl_typesupport_introspection_c__ComputeGraspPoses_Request_message_member_array[1] = {
  {
    "grasps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpd_ros__srv__ComputeGraspPoses_Request, grasps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gpd_ros__srv__ComputeGraspPoses_Request__rosidl_typesupport_introspection_c__ComputeGraspPoses_Request_message_members = {
  "gpd_ros__srv",  // message namespace
  "ComputeGraspPoses_Request",  // message name
  1,  // number of fields
  sizeof(gpd_ros__srv__ComputeGraspPoses_Request),
  false,  // has_any_key_member_
  gpd_ros__srv__ComputeGraspPoses_Request__rosidl_typesupport_introspection_c__ComputeGraspPoses_Request_message_member_array,  // message members
  gpd_ros__srv__ComputeGraspPoses_Request__rosidl_typesupport_introspection_c__ComputeGraspPoses_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  gpd_ros__srv__ComputeGraspPoses_Request__rosidl_typesupport_introspection_c__ComputeGraspPoses_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gpd_ros__srv__ComputeGraspPoses_Request__rosidl_typesupport_introspection_c__ComputeGraspPoses_Request_message_type_support_handle = {
  0,
  &gpd_ros__srv__ComputeGraspPoses_Request__rosidl_typesupport_introspection_c__ComputeGraspPoses_Request_message_members,
  get_message_typesupport_handle_function,
  &gpd_ros__srv__ComputeGraspPoses_Request__get_type_hash,
  &gpd_ros__srv__ComputeGraspPoses_Request__get_type_description,
  &gpd_ros__srv__ComputeGraspPoses_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gpd_ros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpd_ros, srv, ComputeGraspPoses_Request)() {
  gpd_ros__srv__ComputeGraspPoses_Request__rosidl_typesupport_introspection_c__ComputeGraspPoses_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpd_ros, msg, GraspConfigList)();
  if (!gpd_ros__srv__ComputeGraspPoses_Request__rosidl_typesupport_introspection_c__ComputeGraspPoses_Request_message_type_support_handle.typesupport_identifier) {
    gpd_ros__srv__ComputeGraspPoses_Request__rosidl_typesupport_introspection_c__ComputeGraspPoses_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gpd_ros__srv__ComputeGraspPoses_Request__rosidl_typesupport_introspection_c__ComputeGraspPoses_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gpd_ros/srv/detail/compute_grasp_poses__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gpd_ros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gpd_ros/srv/detail/compute_grasp_poses__functions.h"
// already included above
// #include "gpd_ros/srv/detail/compute_grasp_poses__struct.h"


// Include directives for member types
// Member `target_poses`
// Member `approach_poses`
#include "geometry_msgs/msg/pose.h"
// Member `target_poses`
// Member `approach_poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__ComputeGraspPoses_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gpd_ros__srv__ComputeGraspPoses_Response__init(message_memory);
}

void gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__ComputeGraspPoses_Response_fini_function(void * message_memory)
{
  gpd_ros__srv__ComputeGraspPoses_Response__fini(message_memory);
}

size_t gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__size_function__ComputeGraspPoses_Response__target_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__get_const_function__ComputeGraspPoses_Response__target_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__get_function__ComputeGraspPoses_Response__target_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__fetch_function__ComputeGraspPoses_Response__target_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__get_const_function__ComputeGraspPoses_Response__target_poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__assign_function__ComputeGraspPoses_Response__target_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__get_function__ComputeGraspPoses_Response__target_poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__resize_function__ComputeGraspPoses_Response__target_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__size_function__ComputeGraspPoses_Response__approach_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__get_const_function__ComputeGraspPoses_Response__approach_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__get_function__ComputeGraspPoses_Response__approach_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__fetch_function__ComputeGraspPoses_Response__approach_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__get_const_function__ComputeGraspPoses_Response__approach_poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__assign_function__ComputeGraspPoses_Response__approach_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__get_function__ComputeGraspPoses_Response__approach_poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__resize_function__ComputeGraspPoses_Response__approach_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__ComputeGraspPoses_Response_message_member_array[2] = {
  {
    "target_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpd_ros__srv__ComputeGraspPoses_Response, target_poses),  // bytes offset in struct
    NULL,  // default value
    gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__size_function__ComputeGraspPoses_Response__target_poses,  // size() function pointer
    gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__get_const_function__ComputeGraspPoses_Response__target_poses,  // get_const(index) function pointer
    gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__get_function__ComputeGraspPoses_Response__target_poses,  // get(index) function pointer
    gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__fetch_function__ComputeGraspPoses_Response__target_poses,  // fetch(index, &value) function pointer
    gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__assign_function__ComputeGraspPoses_Response__target_poses,  // assign(index, value) function pointer
    gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__resize_function__ComputeGraspPoses_Response__target_poses  // resize(index) function pointer
  },
  {
    "approach_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpd_ros__srv__ComputeGraspPoses_Response, approach_poses),  // bytes offset in struct
    NULL,  // default value
    gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__size_function__ComputeGraspPoses_Response__approach_poses,  // size() function pointer
    gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__get_const_function__ComputeGraspPoses_Response__approach_poses,  // get_const(index) function pointer
    gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__get_function__ComputeGraspPoses_Response__approach_poses,  // get(index) function pointer
    gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__fetch_function__ComputeGraspPoses_Response__approach_poses,  // fetch(index, &value) function pointer
    gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__assign_function__ComputeGraspPoses_Response__approach_poses,  // assign(index, value) function pointer
    gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__resize_function__ComputeGraspPoses_Response__approach_poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__ComputeGraspPoses_Response_message_members = {
  "gpd_ros__srv",  // message namespace
  "ComputeGraspPoses_Response",  // message name
  2,  // number of fields
  sizeof(gpd_ros__srv__ComputeGraspPoses_Response),
  false,  // has_any_key_member_
  gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__ComputeGraspPoses_Response_message_member_array,  // message members
  gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__ComputeGraspPoses_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__ComputeGraspPoses_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__ComputeGraspPoses_Response_message_type_support_handle = {
  0,
  &gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__ComputeGraspPoses_Response_message_members,
  get_message_typesupport_handle_function,
  &gpd_ros__srv__ComputeGraspPoses_Response__get_type_hash,
  &gpd_ros__srv__ComputeGraspPoses_Response__get_type_description,
  &gpd_ros__srv__ComputeGraspPoses_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gpd_ros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpd_ros, srv, ComputeGraspPoses_Response)() {
  gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__ComputeGraspPoses_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__ComputeGraspPoses_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__ComputeGraspPoses_Response_message_type_support_handle.typesupport_identifier) {
    gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__ComputeGraspPoses_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__ComputeGraspPoses_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gpd_ros/srv/detail/compute_grasp_poses__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gpd_ros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gpd_ros/srv/detail/compute_grasp_poses__functions.h"
// already included above
// #include "gpd_ros/srv/detail/compute_grasp_poses__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "gpd_ros/srv/compute_grasp_poses.h"
// Member `request`
// Member `response`
// already included above
// #include "gpd_ros/srv/detail/compute_grasp_poses__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__ComputeGraspPoses_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gpd_ros__srv__ComputeGraspPoses_Event__init(message_memory);
}

void gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__ComputeGraspPoses_Event_fini_function(void * message_memory)
{
  gpd_ros__srv__ComputeGraspPoses_Event__fini(message_memory);
}

size_t gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__size_function__ComputeGraspPoses_Event__request(
  const void * untyped_member)
{
  const gpd_ros__srv__ComputeGraspPoses_Request__Sequence * member =
    (const gpd_ros__srv__ComputeGraspPoses_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__get_const_function__ComputeGraspPoses_Event__request(
  const void * untyped_member, size_t index)
{
  const gpd_ros__srv__ComputeGraspPoses_Request__Sequence * member =
    (const gpd_ros__srv__ComputeGraspPoses_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__get_function__ComputeGraspPoses_Event__request(
  void * untyped_member, size_t index)
{
  gpd_ros__srv__ComputeGraspPoses_Request__Sequence * member =
    (gpd_ros__srv__ComputeGraspPoses_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__fetch_function__ComputeGraspPoses_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const gpd_ros__srv__ComputeGraspPoses_Request * item =
    ((const gpd_ros__srv__ComputeGraspPoses_Request *)
    gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__get_const_function__ComputeGraspPoses_Event__request(untyped_member, index));
  gpd_ros__srv__ComputeGraspPoses_Request * value =
    (gpd_ros__srv__ComputeGraspPoses_Request *)(untyped_value);
  *value = *item;
}

void gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__assign_function__ComputeGraspPoses_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  gpd_ros__srv__ComputeGraspPoses_Request * item =
    ((gpd_ros__srv__ComputeGraspPoses_Request *)
    gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__get_function__ComputeGraspPoses_Event__request(untyped_member, index));
  const gpd_ros__srv__ComputeGraspPoses_Request * value =
    (const gpd_ros__srv__ComputeGraspPoses_Request *)(untyped_value);
  *item = *value;
}

bool gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__resize_function__ComputeGraspPoses_Event__request(
  void * untyped_member, size_t size)
{
  gpd_ros__srv__ComputeGraspPoses_Request__Sequence * member =
    (gpd_ros__srv__ComputeGraspPoses_Request__Sequence *)(untyped_member);
  gpd_ros__srv__ComputeGraspPoses_Request__Sequence__fini(member);
  return gpd_ros__srv__ComputeGraspPoses_Request__Sequence__init(member, size);
}

size_t gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__size_function__ComputeGraspPoses_Event__response(
  const void * untyped_member)
{
  const gpd_ros__srv__ComputeGraspPoses_Response__Sequence * member =
    (const gpd_ros__srv__ComputeGraspPoses_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__get_const_function__ComputeGraspPoses_Event__response(
  const void * untyped_member, size_t index)
{
  const gpd_ros__srv__ComputeGraspPoses_Response__Sequence * member =
    (const gpd_ros__srv__ComputeGraspPoses_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__get_function__ComputeGraspPoses_Event__response(
  void * untyped_member, size_t index)
{
  gpd_ros__srv__ComputeGraspPoses_Response__Sequence * member =
    (gpd_ros__srv__ComputeGraspPoses_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__fetch_function__ComputeGraspPoses_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const gpd_ros__srv__ComputeGraspPoses_Response * item =
    ((const gpd_ros__srv__ComputeGraspPoses_Response *)
    gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__get_const_function__ComputeGraspPoses_Event__response(untyped_member, index));
  gpd_ros__srv__ComputeGraspPoses_Response * value =
    (gpd_ros__srv__ComputeGraspPoses_Response *)(untyped_value);
  *value = *item;
}

void gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__assign_function__ComputeGraspPoses_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  gpd_ros__srv__ComputeGraspPoses_Response * item =
    ((gpd_ros__srv__ComputeGraspPoses_Response *)
    gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__get_function__ComputeGraspPoses_Event__response(untyped_member, index));
  const gpd_ros__srv__ComputeGraspPoses_Response * value =
    (const gpd_ros__srv__ComputeGraspPoses_Response *)(untyped_value);
  *item = *value;
}

bool gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__resize_function__ComputeGraspPoses_Event__response(
  void * untyped_member, size_t size)
{
  gpd_ros__srv__ComputeGraspPoses_Response__Sequence * member =
    (gpd_ros__srv__ComputeGraspPoses_Response__Sequence *)(untyped_member);
  gpd_ros__srv__ComputeGraspPoses_Response__Sequence__fini(member);
  return gpd_ros__srv__ComputeGraspPoses_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__ComputeGraspPoses_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpd_ros__srv__ComputeGraspPoses_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(gpd_ros__srv__ComputeGraspPoses_Event, request),  // bytes offset in struct
    NULL,  // default value
    gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__size_function__ComputeGraspPoses_Event__request,  // size() function pointer
    gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__get_const_function__ComputeGraspPoses_Event__request,  // get_const(index) function pointer
    gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__get_function__ComputeGraspPoses_Event__request,  // get(index) function pointer
    gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__fetch_function__ComputeGraspPoses_Event__request,  // fetch(index, &value) function pointer
    gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__assign_function__ComputeGraspPoses_Event__request,  // assign(index, value) function pointer
    gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__resize_function__ComputeGraspPoses_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(gpd_ros__srv__ComputeGraspPoses_Event, response),  // bytes offset in struct
    NULL,  // default value
    gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__size_function__ComputeGraspPoses_Event__response,  // size() function pointer
    gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__get_const_function__ComputeGraspPoses_Event__response,  // get_const(index) function pointer
    gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__get_function__ComputeGraspPoses_Event__response,  // get(index) function pointer
    gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__fetch_function__ComputeGraspPoses_Event__response,  // fetch(index, &value) function pointer
    gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__assign_function__ComputeGraspPoses_Event__response,  // assign(index, value) function pointer
    gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__resize_function__ComputeGraspPoses_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__ComputeGraspPoses_Event_message_members = {
  "gpd_ros__srv",  // message namespace
  "ComputeGraspPoses_Event",  // message name
  3,  // number of fields
  sizeof(gpd_ros__srv__ComputeGraspPoses_Event),
  false,  // has_any_key_member_
  gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__ComputeGraspPoses_Event_message_member_array,  // message members
  gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__ComputeGraspPoses_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__ComputeGraspPoses_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__ComputeGraspPoses_Event_message_type_support_handle = {
  0,
  &gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__ComputeGraspPoses_Event_message_members,
  get_message_typesupport_handle_function,
  &gpd_ros__srv__ComputeGraspPoses_Event__get_type_hash,
  &gpd_ros__srv__ComputeGraspPoses_Event__get_type_description,
  &gpd_ros__srv__ComputeGraspPoses_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gpd_ros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpd_ros, srv, ComputeGraspPoses_Event)() {
  gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__ComputeGraspPoses_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__ComputeGraspPoses_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpd_ros, srv, ComputeGraspPoses_Request)();
  gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__ComputeGraspPoses_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpd_ros, srv, ComputeGraspPoses_Response)();
  if (!gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__ComputeGraspPoses_Event_message_type_support_handle.typesupport_identifier) {
    gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__ComputeGraspPoses_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__ComputeGraspPoses_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gpd_ros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "gpd_ros/srv/detail/compute_grasp_poses__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers gpd_ros__srv__detail__compute_grasp_poses__rosidl_typesupport_introspection_c__ComputeGraspPoses_service_members = {
  "gpd_ros__srv",  // service namespace
  "ComputeGraspPoses",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // gpd_ros__srv__detail__compute_grasp_poses__rosidl_typesupport_introspection_c__ComputeGraspPoses_Request_message_type_support_handle,
  NULL,  // response message
  // gpd_ros__srv__detail__compute_grasp_poses__rosidl_typesupport_introspection_c__ComputeGraspPoses_Response_message_type_support_handle
  NULL  // event_message
  // gpd_ros__srv__detail__compute_grasp_poses__rosidl_typesupport_introspection_c__ComputeGraspPoses_Response_message_type_support_handle
};


static rosidl_service_type_support_t gpd_ros__srv__detail__compute_grasp_poses__rosidl_typesupport_introspection_c__ComputeGraspPoses_service_type_support_handle = {
  0,
  &gpd_ros__srv__detail__compute_grasp_poses__rosidl_typesupport_introspection_c__ComputeGraspPoses_service_members,
  get_service_typesupport_handle_function,
  &gpd_ros__srv__ComputeGraspPoses_Request__rosidl_typesupport_introspection_c__ComputeGraspPoses_Request_message_type_support_handle,
  &gpd_ros__srv__ComputeGraspPoses_Response__rosidl_typesupport_introspection_c__ComputeGraspPoses_Response_message_type_support_handle,
  &gpd_ros__srv__ComputeGraspPoses_Event__rosidl_typesupport_introspection_c__ComputeGraspPoses_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    gpd_ros,
    srv,
    ComputeGraspPoses
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    gpd_ros,
    srv,
    ComputeGraspPoses
  ),
  &gpd_ros__srv__ComputeGraspPoses__get_type_hash,
  &gpd_ros__srv__ComputeGraspPoses__get_type_description,
  &gpd_ros__srv__ComputeGraspPoses__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpd_ros, srv, ComputeGraspPoses_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpd_ros, srv, ComputeGraspPoses_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpd_ros, srv, ComputeGraspPoses_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gpd_ros
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpd_ros, srv, ComputeGraspPoses)(void) {
  if (!gpd_ros__srv__detail__compute_grasp_poses__rosidl_typesupport_introspection_c__ComputeGraspPoses_service_type_support_handle.typesupport_identifier) {
    gpd_ros__srv__detail__compute_grasp_poses__rosidl_typesupport_introspection_c__ComputeGraspPoses_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)gpd_ros__srv__detail__compute_grasp_poses__rosidl_typesupport_introspection_c__ComputeGraspPoses_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpd_ros, srv, ComputeGraspPoses_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpd_ros, srv, ComputeGraspPoses_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpd_ros, srv, ComputeGraspPoses_Event)()->data;
  }

  return &gpd_ros__srv__detail__compute_grasp_poses__rosidl_typesupport_introspection_c__ComputeGraspPoses_service_type_support_handle;
}
