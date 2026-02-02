// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from gpd_ros:srv/DetectGrasps.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "gpd_ros/srv/detail/detect_grasps__functions.h"
#include "gpd_ros/srv/detail/detect_grasps__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace gpd_ros
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _DetectGrasps_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DetectGrasps_Request_type_support_ids_t;

static const _DetectGrasps_Request_type_support_ids_t _DetectGrasps_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DetectGrasps_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DetectGrasps_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DetectGrasps_Request_type_support_symbol_names_t _DetectGrasps_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpd_ros, srv, DetectGrasps_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gpd_ros, srv, DetectGrasps_Request)),
  }
};

typedef struct _DetectGrasps_Request_type_support_data_t
{
  void * data[2];
} _DetectGrasps_Request_type_support_data_t;

static _DetectGrasps_Request_type_support_data_t _DetectGrasps_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DetectGrasps_Request_message_typesupport_map = {
  2,
  "gpd_ros",
  &_DetectGrasps_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DetectGrasps_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DetectGrasps_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DetectGrasps_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DetectGrasps_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &gpd_ros__srv__DetectGrasps_Request__get_type_hash,
  &gpd_ros__srv__DetectGrasps_Request__get_type_description,
  &gpd_ros__srv__DetectGrasps_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gpd_ros

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gpd_ros::srv::DetectGrasps_Request>()
{
  return &::gpd_ros::srv::rosidl_typesupport_cpp::DetectGrasps_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gpd_ros, srv, DetectGrasps_Request)() {
  return get_message_type_support_handle<gpd_ros::srv::DetectGrasps_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gpd_ros/srv/detail/detect_grasps__functions.h"
// already included above
// #include "gpd_ros/srv/detail/detect_grasps__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gpd_ros
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _DetectGrasps_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DetectGrasps_Response_type_support_ids_t;

static const _DetectGrasps_Response_type_support_ids_t _DetectGrasps_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DetectGrasps_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DetectGrasps_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DetectGrasps_Response_type_support_symbol_names_t _DetectGrasps_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpd_ros, srv, DetectGrasps_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gpd_ros, srv, DetectGrasps_Response)),
  }
};

typedef struct _DetectGrasps_Response_type_support_data_t
{
  void * data[2];
} _DetectGrasps_Response_type_support_data_t;

static _DetectGrasps_Response_type_support_data_t _DetectGrasps_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DetectGrasps_Response_message_typesupport_map = {
  2,
  "gpd_ros",
  &_DetectGrasps_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DetectGrasps_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DetectGrasps_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DetectGrasps_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DetectGrasps_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &gpd_ros__srv__DetectGrasps_Response__get_type_hash,
  &gpd_ros__srv__DetectGrasps_Response__get_type_description,
  &gpd_ros__srv__DetectGrasps_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gpd_ros

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gpd_ros::srv::DetectGrasps_Response>()
{
  return &::gpd_ros::srv::rosidl_typesupport_cpp::DetectGrasps_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gpd_ros, srv, DetectGrasps_Response)() {
  return get_message_type_support_handle<gpd_ros::srv::DetectGrasps_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gpd_ros/srv/detail/detect_grasps__functions.h"
// already included above
// #include "gpd_ros/srv/detail/detect_grasps__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gpd_ros
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _DetectGrasps_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DetectGrasps_Event_type_support_ids_t;

static const _DetectGrasps_Event_type_support_ids_t _DetectGrasps_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DetectGrasps_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DetectGrasps_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DetectGrasps_Event_type_support_symbol_names_t _DetectGrasps_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpd_ros, srv, DetectGrasps_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gpd_ros, srv, DetectGrasps_Event)),
  }
};

typedef struct _DetectGrasps_Event_type_support_data_t
{
  void * data[2];
} _DetectGrasps_Event_type_support_data_t;

static _DetectGrasps_Event_type_support_data_t _DetectGrasps_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DetectGrasps_Event_message_typesupport_map = {
  2,
  "gpd_ros",
  &_DetectGrasps_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DetectGrasps_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DetectGrasps_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DetectGrasps_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DetectGrasps_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &gpd_ros__srv__DetectGrasps_Event__get_type_hash,
  &gpd_ros__srv__DetectGrasps_Event__get_type_description,
  &gpd_ros__srv__DetectGrasps_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gpd_ros

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gpd_ros::srv::DetectGrasps_Event>()
{
  return &::gpd_ros::srv::rosidl_typesupport_cpp::DetectGrasps_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gpd_ros, srv, DetectGrasps_Event)() {
  return get_message_type_support_handle<gpd_ros::srv::DetectGrasps_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "gpd_ros/srv/detail/detect_grasps__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gpd_ros
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _DetectGrasps_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DetectGrasps_type_support_ids_t;

static const _DetectGrasps_type_support_ids_t _DetectGrasps_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DetectGrasps_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DetectGrasps_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DetectGrasps_type_support_symbol_names_t _DetectGrasps_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpd_ros, srv, DetectGrasps)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gpd_ros, srv, DetectGrasps)),
  }
};

typedef struct _DetectGrasps_type_support_data_t
{
  void * data[2];
} _DetectGrasps_type_support_data_t;

static _DetectGrasps_type_support_data_t _DetectGrasps_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DetectGrasps_service_typesupport_map = {
  2,
  "gpd_ros",
  &_DetectGrasps_service_typesupport_ids.typesupport_identifier[0],
  &_DetectGrasps_service_typesupport_symbol_names.symbol_name[0],
  &_DetectGrasps_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DetectGrasps_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DetectGrasps_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<gpd_ros::srv::DetectGrasps_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<gpd_ros::srv::DetectGrasps_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<gpd_ros::srv::DetectGrasps_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<gpd_ros::srv::DetectGrasps>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<gpd_ros::srv::DetectGrasps>,
  &gpd_ros__srv__DetectGrasps__get_type_hash,
  &gpd_ros__srv__DetectGrasps__get_type_description,
  &gpd_ros__srv__DetectGrasps__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gpd_ros

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<gpd_ros::srv::DetectGrasps>()
{
  return &::gpd_ros::srv::rosidl_typesupport_cpp::DetectGrasps_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, gpd_ros, srv, DetectGrasps)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<gpd_ros::srv::DetectGrasps>();
}

#ifdef __cplusplus
}
#endif
