// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gpd_ros:msg/GraspConfig.idl
// generated code does not contain a copyright notice
#include "gpd_ros/msg/detail/grasp_config__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gpd_ros/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gpd_ros/msg/detail/grasp_config__struct.h"
#include "gpd_ros/msg/detail/grasp_config__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/point__functions.h"  // position, sample
#include "geometry_msgs/msg/detail/vector3__functions.h"  // approach, axis, binormal
#include "std_msgs/msg/detail/float32__functions.h"  // score, width

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
bool cdr_serialize_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
bool cdr_deserialize_geometry_msgs__msg__Point(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Point * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
bool cdr_serialize_key_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
size_t get_serialized_size_key_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
size_t max_serialized_size_key_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
bool cdr_serialize_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
bool cdr_deserialize_geometry_msgs__msg__Vector3(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Vector3 * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
bool cdr_serialize_key_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
size_t get_serialized_size_key_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
size_t max_serialized_size_key_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
bool cdr_serialize_std_msgs__msg__Float32(
  const std_msgs__msg__Float32 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
bool cdr_deserialize_std_msgs__msg__Float32(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Float32 * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
size_t get_serialized_size_std_msgs__msg__Float32(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
size_t max_serialized_size_std_msgs__msg__Float32(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
bool cdr_serialize_key_std_msgs__msg__Float32(
  const std_msgs__msg__Float32 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
size_t get_serialized_size_key_std_msgs__msg__Float32(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
size_t max_serialized_size_key_std_msgs__msg__Float32(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32)();


using _GraspConfig__ros_msg_type = gpd_ros__msg__GraspConfig;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpd_ros
bool cdr_serialize_gpd_ros__msg__GraspConfig(
  const gpd_ros__msg__GraspConfig * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: position
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->position, cdr);
  }

  // Field name: approach
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->approach, cdr);
  }

  // Field name: binormal
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->binormal, cdr);
  }

  // Field name: axis
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->axis, cdr);
  }

  // Field name: width
  {
    cdr_serialize_std_msgs__msg__Float32(
      &ros_message->width, cdr);
  }

  // Field name: score
  {
    cdr_serialize_std_msgs__msg__Float32(
      &ros_message->score, cdr);
  }

  // Field name: sample
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->sample, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpd_ros
bool cdr_deserialize_gpd_ros__msg__GraspConfig(
  eprosima::fastcdr::Cdr & cdr,
  gpd_ros__msg__GraspConfig * ros_message)
{
  // Field name: position
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->position);
  }

  // Field name: approach
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->approach);
  }

  // Field name: binormal
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->binormal);
  }

  // Field name: axis
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->axis);
  }

  // Field name: width
  {
    cdr_deserialize_std_msgs__msg__Float32(cdr, &ros_message->width);
  }

  // Field name: score
  {
    cdr_deserialize_std_msgs__msg__Float32(cdr, &ros_message->score);
  }

  // Field name: sample
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->sample);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpd_ros
size_t get_serialized_size_gpd_ros__msg__GraspConfig(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GraspConfig__ros_msg_type * ros_message = static_cast<const _GraspConfig__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: position
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->position), current_alignment);

  // Field name: approach
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->approach), current_alignment);

  // Field name: binormal
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->binormal), current_alignment);

  // Field name: axis
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->axis), current_alignment);

  // Field name: width
  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->width), current_alignment);

  // Field name: score
  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->score), current_alignment);

  // Field name: sample
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->sample), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpd_ros
size_t max_serialized_size_gpd_ros__msg__GraspConfig(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: approach
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: binormal
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: axis
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: width
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Float32(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: score
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Float32(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: sample
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = gpd_ros__msg__GraspConfig;
    is_plain =
      (
      offsetof(DataType, sample) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpd_ros
bool cdr_serialize_key_gpd_ros__msg__GraspConfig(
  const gpd_ros__msg__GraspConfig * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: position
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->position, cdr);
  }

  // Field name: approach
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->approach, cdr);
  }

  // Field name: binormal
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->binormal, cdr);
  }

  // Field name: axis
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->axis, cdr);
  }

  // Field name: width
  {
    cdr_serialize_key_std_msgs__msg__Float32(
      &ros_message->width, cdr);
  }

  // Field name: score
  {
    cdr_serialize_key_std_msgs__msg__Float32(
      &ros_message->score, cdr);
  }

  // Field name: sample
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->sample, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpd_ros
size_t get_serialized_size_key_gpd_ros__msg__GraspConfig(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GraspConfig__ros_msg_type * ros_message = static_cast<const _GraspConfig__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: position
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->position), current_alignment);

  // Field name: approach
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->approach), current_alignment);

  // Field name: binormal
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->binormal), current_alignment);

  // Field name: axis
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->axis), current_alignment);

  // Field name: width
  current_alignment += get_serialized_size_key_std_msgs__msg__Float32(
    &(ros_message->width), current_alignment);

  // Field name: score
  current_alignment += get_serialized_size_key_std_msgs__msg__Float32(
    &(ros_message->score), current_alignment);

  // Field name: sample
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->sample), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpd_ros
size_t max_serialized_size_key_gpd_ros__msg__GraspConfig(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: approach
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: binormal
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: axis
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: width
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Float32(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: score
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Float32(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: sample
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = gpd_ros__msg__GraspConfig;
    is_plain =
      (
      offsetof(DataType, sample) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GraspConfig__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const gpd_ros__msg__GraspConfig * ros_message = static_cast<const gpd_ros__msg__GraspConfig *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_gpd_ros__msg__GraspConfig(ros_message, cdr);
}

static bool _GraspConfig__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  gpd_ros__msg__GraspConfig * ros_message = static_cast<gpd_ros__msg__GraspConfig *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_gpd_ros__msg__GraspConfig(cdr, ros_message);
}

static uint32_t _GraspConfig__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gpd_ros__msg__GraspConfig(
      untyped_ros_message, 0));
}

static size_t _GraspConfig__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_gpd_ros__msg__GraspConfig(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GraspConfig = {
  "gpd_ros::msg",
  "GraspConfig",
  _GraspConfig__cdr_serialize,
  _GraspConfig__cdr_deserialize,
  _GraspConfig__get_serialized_size,
  _GraspConfig__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GraspConfig__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GraspConfig,
  get_message_typesupport_handle_function,
  &gpd_ros__msg__GraspConfig__get_type_hash,
  &gpd_ros__msg__GraspConfig__get_type_description,
  &gpd_ros__msg__GraspConfig__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gpd_ros, msg, GraspConfig)() {
  return &_GraspConfig__type_support;
}

#if defined(__cplusplus)
}
#endif
