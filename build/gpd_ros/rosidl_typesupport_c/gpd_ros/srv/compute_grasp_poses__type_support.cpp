// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from gpd_ros:srv/ComputeGraspPoses.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "gpd_ros/srv/detail/compute_grasp_poses__struct.h"
#include "gpd_ros/srv/detail/compute_grasp_poses__type_support.h"
#include "gpd_ros/srv/detail/compute_grasp_poses__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace gpd_ros
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ComputeGraspPoses_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ComputeGraspPoses_Request_type_support_ids_t;

static const _ComputeGraspPoses_Request_type_support_ids_t _ComputeGraspPoses_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ComputeGraspPoses_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ComputeGraspPoses_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ComputeGraspPoses_Request_type_support_symbol_names_t _ComputeGraspPoses_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gpd_ros, srv, ComputeGraspPoses_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpd_ros, srv, ComputeGraspPoses_Request)),
  }
};

typedef struct _ComputeGraspPoses_Request_type_support_data_t
{
  void * data[2];
} _ComputeGraspPoses_Request_type_support_data_t;

static _ComputeGraspPoses_Request_type_support_data_t _ComputeGraspPoses_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ComputeGraspPoses_Request_message_typesupport_map = {
  2,
  "gpd_ros",
  &_ComputeGraspPoses_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ComputeGraspPoses_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ComputeGraspPoses_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ComputeGraspPoses_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ComputeGraspPoses_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &gpd_ros__srv__ComputeGraspPoses_Request__get_type_hash,
  &gpd_ros__srv__ComputeGraspPoses_Request__get_type_description,
  &gpd_ros__srv__ComputeGraspPoses_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace gpd_ros

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, gpd_ros, srv, ComputeGraspPoses_Request)() {
  return &::gpd_ros::srv::rosidl_typesupport_c::ComputeGraspPoses_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gpd_ros/srv/detail/compute_grasp_poses__struct.h"
// already included above
// #include "gpd_ros/srv/detail/compute_grasp_poses__type_support.h"
// already included above
// #include "gpd_ros/srv/detail/compute_grasp_poses__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gpd_ros
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ComputeGraspPoses_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ComputeGraspPoses_Response_type_support_ids_t;

static const _ComputeGraspPoses_Response_type_support_ids_t _ComputeGraspPoses_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ComputeGraspPoses_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ComputeGraspPoses_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ComputeGraspPoses_Response_type_support_symbol_names_t _ComputeGraspPoses_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gpd_ros, srv, ComputeGraspPoses_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpd_ros, srv, ComputeGraspPoses_Response)),
  }
};

typedef struct _ComputeGraspPoses_Response_type_support_data_t
{
  void * data[2];
} _ComputeGraspPoses_Response_type_support_data_t;

static _ComputeGraspPoses_Response_type_support_data_t _ComputeGraspPoses_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ComputeGraspPoses_Response_message_typesupport_map = {
  2,
  "gpd_ros",
  &_ComputeGraspPoses_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ComputeGraspPoses_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ComputeGraspPoses_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ComputeGraspPoses_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ComputeGraspPoses_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &gpd_ros__srv__ComputeGraspPoses_Response__get_type_hash,
  &gpd_ros__srv__ComputeGraspPoses_Response__get_type_description,
  &gpd_ros__srv__ComputeGraspPoses_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace gpd_ros

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, gpd_ros, srv, ComputeGraspPoses_Response)() {
  return &::gpd_ros::srv::rosidl_typesupport_c::ComputeGraspPoses_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gpd_ros/srv/detail/compute_grasp_poses__struct.h"
// already included above
// #include "gpd_ros/srv/detail/compute_grasp_poses__type_support.h"
// already included above
// #include "gpd_ros/srv/detail/compute_grasp_poses__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gpd_ros
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ComputeGraspPoses_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ComputeGraspPoses_Event_type_support_ids_t;

static const _ComputeGraspPoses_Event_type_support_ids_t _ComputeGraspPoses_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ComputeGraspPoses_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ComputeGraspPoses_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ComputeGraspPoses_Event_type_support_symbol_names_t _ComputeGraspPoses_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gpd_ros, srv, ComputeGraspPoses_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpd_ros, srv, ComputeGraspPoses_Event)),
  }
};

typedef struct _ComputeGraspPoses_Event_type_support_data_t
{
  void * data[2];
} _ComputeGraspPoses_Event_type_support_data_t;

static _ComputeGraspPoses_Event_type_support_data_t _ComputeGraspPoses_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ComputeGraspPoses_Event_message_typesupport_map = {
  2,
  "gpd_ros",
  &_ComputeGraspPoses_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ComputeGraspPoses_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ComputeGraspPoses_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ComputeGraspPoses_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ComputeGraspPoses_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &gpd_ros__srv__ComputeGraspPoses_Event__get_type_hash,
  &gpd_ros__srv__ComputeGraspPoses_Event__get_type_description,
  &gpd_ros__srv__ComputeGraspPoses_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace gpd_ros

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, gpd_ros, srv, ComputeGraspPoses_Event)() {
  return &::gpd_ros::srv::rosidl_typesupport_c::ComputeGraspPoses_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gpd_ros/srv/detail/compute_grasp_poses__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace gpd_ros
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _ComputeGraspPoses_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ComputeGraspPoses_type_support_ids_t;

static const _ComputeGraspPoses_type_support_ids_t _ComputeGraspPoses_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ComputeGraspPoses_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ComputeGraspPoses_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ComputeGraspPoses_type_support_symbol_names_t _ComputeGraspPoses_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gpd_ros, srv, ComputeGraspPoses)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpd_ros, srv, ComputeGraspPoses)),
  }
};

typedef struct _ComputeGraspPoses_type_support_data_t
{
  void * data[2];
} _ComputeGraspPoses_type_support_data_t;

static _ComputeGraspPoses_type_support_data_t _ComputeGraspPoses_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ComputeGraspPoses_service_typesupport_map = {
  2,
  "gpd_ros",
  &_ComputeGraspPoses_service_typesupport_ids.typesupport_identifier[0],
  &_ComputeGraspPoses_service_typesupport_symbol_names.symbol_name[0],
  &_ComputeGraspPoses_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ComputeGraspPoses_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ComputeGraspPoses_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ComputeGraspPoses_Request_message_type_support_handle,
  &ComputeGraspPoses_Response_message_type_support_handle,
  &ComputeGraspPoses_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace gpd_ros

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, gpd_ros, srv, ComputeGraspPoses)() {
  return &::gpd_ros::srv::rosidl_typesupport_c::ComputeGraspPoses_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
