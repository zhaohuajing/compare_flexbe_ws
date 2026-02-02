// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gpd_ros:msg/CloudIndexed.idl
// generated code does not contain a copyright notice
#include "gpd_ros/msg/detail/cloud_indexed__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gpd_ros/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gpd_ros/msg/detail/cloud_indexed__struct.h"
#include "gpd_ros/msg/detail/cloud_indexed__functions.h"
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

#include "gpd_ros/msg/detail/cloud_sources__functions.h"  // cloud_sources
#include "std_msgs/msg/detail/int64__functions.h"  // indices

// forward declare type support functions

bool cdr_serialize_gpd_ros__msg__CloudSources(
  const gpd_ros__msg__CloudSources * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_gpd_ros__msg__CloudSources(
  eprosima::fastcdr::Cdr & cdr,
  gpd_ros__msg__CloudSources * ros_message);

size_t get_serialized_size_gpd_ros__msg__CloudSources(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_gpd_ros__msg__CloudSources(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_gpd_ros__msg__CloudSources(
  const gpd_ros__msg__CloudSources * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_gpd_ros__msg__CloudSources(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_gpd_ros__msg__CloudSources(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gpd_ros, msg, CloudSources)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
bool cdr_serialize_std_msgs__msg__Int64(
  const std_msgs__msg__Int64 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
bool cdr_deserialize_std_msgs__msg__Int64(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Int64 * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
size_t get_serialized_size_std_msgs__msg__Int64(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
size_t max_serialized_size_std_msgs__msg__Int64(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
bool cdr_serialize_key_std_msgs__msg__Int64(
  const std_msgs__msg__Int64 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
size_t get_serialized_size_key_std_msgs__msg__Int64(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
size_t max_serialized_size_key_std_msgs__msg__Int64(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gpd_ros
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Int64)();


using _CloudIndexed__ros_msg_type = gpd_ros__msg__CloudIndexed;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpd_ros
bool cdr_serialize_gpd_ros__msg__CloudIndexed(
  const gpd_ros__msg__CloudIndexed * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: cloud_sources
  {
    cdr_serialize_gpd_ros__msg__CloudSources(
      &ros_message->cloud_sources, cdr);
  }

  // Field name: indices
  {
    size_t size = ros_message->indices.size;
    auto array_ptr = ros_message->indices.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_std_msgs__msg__Int64(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpd_ros
bool cdr_deserialize_gpd_ros__msg__CloudIndexed(
  eprosima::fastcdr::Cdr & cdr,
  gpd_ros__msg__CloudIndexed * ros_message)
{
  // Field name: cloud_sources
  {
    cdr_deserialize_gpd_ros__msg__CloudSources(cdr, &ros_message->cloud_sources);
  }

  // Field name: indices
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->indices.data) {
      std_msgs__msg__Int64__Sequence__fini(&ros_message->indices);
    }
    if (!std_msgs__msg__Int64__Sequence__init(&ros_message->indices, size)) {
      fprintf(stderr, "failed to create array for field 'indices'");
      return false;
    }
    auto array_ptr = ros_message->indices.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_std_msgs__msg__Int64(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpd_ros
size_t get_serialized_size_gpd_ros__msg__CloudIndexed(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CloudIndexed__ros_msg_type * ros_message = static_cast<const _CloudIndexed__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: cloud_sources
  current_alignment += get_serialized_size_gpd_ros__msg__CloudSources(
    &(ros_message->cloud_sources), current_alignment);

  // Field name: indices
  {
    size_t array_size = ros_message->indices.size;
    auto array_ptr = ros_message->indices.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_std_msgs__msg__Int64(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpd_ros
size_t max_serialized_size_gpd_ros__msg__CloudIndexed(
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

  // Field name: cloud_sources
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_gpd_ros__msg__CloudSources(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: indices
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Int64(
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
    using DataType = gpd_ros__msg__CloudIndexed;
    is_plain =
      (
      offsetof(DataType, indices) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpd_ros
bool cdr_serialize_key_gpd_ros__msg__CloudIndexed(
  const gpd_ros__msg__CloudIndexed * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: cloud_sources
  {
    cdr_serialize_key_gpd_ros__msg__CloudSources(
      &ros_message->cloud_sources, cdr);
  }

  // Field name: indices
  {
    size_t size = ros_message->indices.size;
    auto array_ptr = ros_message->indices.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_std_msgs__msg__Int64(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpd_ros
size_t get_serialized_size_key_gpd_ros__msg__CloudIndexed(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CloudIndexed__ros_msg_type * ros_message = static_cast<const _CloudIndexed__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: cloud_sources
  current_alignment += get_serialized_size_key_gpd_ros__msg__CloudSources(
    &(ros_message->cloud_sources), current_alignment);

  // Field name: indices
  {
    size_t array_size = ros_message->indices.size;
    auto array_ptr = ros_message->indices.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_std_msgs__msg__Int64(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpd_ros
size_t max_serialized_size_key_gpd_ros__msg__CloudIndexed(
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
  // Field name: cloud_sources
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_gpd_ros__msg__CloudSources(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: indices
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Int64(
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
    using DataType = gpd_ros__msg__CloudIndexed;
    is_plain =
      (
      offsetof(DataType, indices) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _CloudIndexed__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const gpd_ros__msg__CloudIndexed * ros_message = static_cast<const gpd_ros__msg__CloudIndexed *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_gpd_ros__msg__CloudIndexed(ros_message, cdr);
}

static bool _CloudIndexed__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  gpd_ros__msg__CloudIndexed * ros_message = static_cast<gpd_ros__msg__CloudIndexed *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_gpd_ros__msg__CloudIndexed(cdr, ros_message);
}

static uint32_t _CloudIndexed__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gpd_ros__msg__CloudIndexed(
      untyped_ros_message, 0));
}

static size_t _CloudIndexed__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_gpd_ros__msg__CloudIndexed(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CloudIndexed = {
  "gpd_ros::msg",
  "CloudIndexed",
  _CloudIndexed__cdr_serialize,
  _CloudIndexed__cdr_deserialize,
  _CloudIndexed__get_serialized_size,
  _CloudIndexed__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _CloudIndexed__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CloudIndexed,
  get_message_typesupport_handle_function,
  &gpd_ros__msg__CloudIndexed__get_type_hash,
  &gpd_ros__msg__CloudIndexed__get_type_description,
  &gpd_ros__msg__CloudIndexed__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gpd_ros, msg, CloudIndexed)() {
  return &_CloudIndexed__type_support;
}

#if defined(__cplusplus)
}
#endif
