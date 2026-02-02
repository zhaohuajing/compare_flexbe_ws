// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gpd_ros:srv/ComputeGraspPoses.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gpd_ros/srv/compute_grasp_poses.hpp"


#ifndef GPD_ROS__SRV__DETAIL__COMPUTE_GRASP_POSES__TRAITS_HPP_
#define GPD_ROS__SRV__DETAIL__COMPUTE_GRASP_POSES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gpd_ros/srv/detail/compute_grasp_poses__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'grasps'
#include "gpd_ros/msg/detail/grasp_config_list__traits.hpp"

namespace gpd_ros
{

namespace srv
{

inline void to_flow_style_yaml(
  const ComputeGraspPoses_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: grasps
  {
    out << "grasps: ";
    to_flow_style_yaml(msg.grasps, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputeGraspPoses_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: grasps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grasps:\n";
    to_block_style_yaml(msg.grasps, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputeGraspPoses_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gpd_ros

namespace rosidl_generator_traits
{

[[deprecated("use gpd_ros::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gpd_ros::srv::ComputeGraspPoses_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gpd_ros::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gpd_ros::srv::to_yaml() instead")]]
inline std::string to_yaml(const gpd_ros::srv::ComputeGraspPoses_Request & msg)
{
  return gpd_ros::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gpd_ros::srv::ComputeGraspPoses_Request>()
{
  return "gpd_ros::srv::ComputeGraspPoses_Request";
}

template<>
inline const char * name<gpd_ros::srv::ComputeGraspPoses_Request>()
{
  return "gpd_ros/srv/ComputeGraspPoses_Request";
}

template<>
struct has_fixed_size<gpd_ros::srv::ComputeGraspPoses_Request>
  : std::integral_constant<bool, has_fixed_size<gpd_ros::msg::GraspConfigList>::value> {};

template<>
struct has_bounded_size<gpd_ros::srv::ComputeGraspPoses_Request>
  : std::integral_constant<bool, has_bounded_size<gpd_ros::msg::GraspConfigList>::value> {};

template<>
struct is_message<gpd_ros::srv::ComputeGraspPoses_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'target_poses'
// Member 'approach_poses'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace gpd_ros
{

namespace srv
{

inline void to_flow_style_yaml(
  const ComputeGraspPoses_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_poses
  {
    if (msg.target_poses.size() == 0) {
      out << "target_poses: []";
    } else {
      out << "target_poses: [";
      size_t pending_items = msg.target_poses.size();
      for (auto item : msg.target_poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: approach_poses
  {
    if (msg.approach_poses.size() == 0) {
      out << "approach_poses: []";
    } else {
      out << "approach_poses: [";
      size_t pending_items = msg.approach_poses.size();
      for (auto item : msg.approach_poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputeGraspPoses_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_poses.size() == 0) {
      out << "target_poses: []\n";
    } else {
      out << "target_poses:\n";
      for (auto item : msg.target_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: approach_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.approach_poses.size() == 0) {
      out << "approach_poses: []\n";
    } else {
      out << "approach_poses:\n";
      for (auto item : msg.approach_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputeGraspPoses_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gpd_ros

namespace rosidl_generator_traits
{

[[deprecated("use gpd_ros::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gpd_ros::srv::ComputeGraspPoses_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gpd_ros::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gpd_ros::srv::to_yaml() instead")]]
inline std::string to_yaml(const gpd_ros::srv::ComputeGraspPoses_Response & msg)
{
  return gpd_ros::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gpd_ros::srv::ComputeGraspPoses_Response>()
{
  return "gpd_ros::srv::ComputeGraspPoses_Response";
}

template<>
inline const char * name<gpd_ros::srv::ComputeGraspPoses_Response>()
{
  return "gpd_ros/srv/ComputeGraspPoses_Response";
}

template<>
struct has_fixed_size<gpd_ros::srv::ComputeGraspPoses_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gpd_ros::srv::ComputeGraspPoses_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gpd_ros::srv::ComputeGraspPoses_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace gpd_ros
{

namespace srv
{

inline void to_flow_style_yaml(
  const ComputeGraspPoses_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputeGraspPoses_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputeGraspPoses_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gpd_ros

namespace rosidl_generator_traits
{

[[deprecated("use gpd_ros::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gpd_ros::srv::ComputeGraspPoses_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  gpd_ros::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gpd_ros::srv::to_yaml() instead")]]
inline std::string to_yaml(const gpd_ros::srv::ComputeGraspPoses_Event & msg)
{
  return gpd_ros::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gpd_ros::srv::ComputeGraspPoses_Event>()
{
  return "gpd_ros::srv::ComputeGraspPoses_Event";
}

template<>
inline const char * name<gpd_ros::srv::ComputeGraspPoses_Event>()
{
  return "gpd_ros/srv/ComputeGraspPoses_Event";
}

template<>
struct has_fixed_size<gpd_ros::srv::ComputeGraspPoses_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gpd_ros::srv::ComputeGraspPoses_Event>
  : std::integral_constant<bool, has_bounded_size<gpd_ros::srv::ComputeGraspPoses_Request>::value && has_bounded_size<gpd_ros::srv::ComputeGraspPoses_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<gpd_ros::srv::ComputeGraspPoses_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gpd_ros::srv::ComputeGraspPoses>()
{
  return "gpd_ros::srv::ComputeGraspPoses";
}

template<>
inline const char * name<gpd_ros::srv::ComputeGraspPoses>()
{
  return "gpd_ros/srv/ComputeGraspPoses";
}

template<>
struct has_fixed_size<gpd_ros::srv::ComputeGraspPoses>
  : std::integral_constant<
    bool,
    has_fixed_size<gpd_ros::srv::ComputeGraspPoses_Request>::value &&
    has_fixed_size<gpd_ros::srv::ComputeGraspPoses_Response>::value
  >
{
};

template<>
struct has_bounded_size<gpd_ros::srv::ComputeGraspPoses>
  : std::integral_constant<
    bool,
    has_bounded_size<gpd_ros::srv::ComputeGraspPoses_Request>::value &&
    has_bounded_size<gpd_ros::srv::ComputeGraspPoses_Response>::value
  >
{
};

template<>
struct is_service<gpd_ros::srv::ComputeGraspPoses>
  : std::true_type
{
};

template<>
struct is_service_request<gpd_ros::srv::ComputeGraspPoses_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gpd_ros::srv::ComputeGraspPoses_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GPD_ROS__SRV__DETAIL__COMPUTE_GRASP_POSES__TRAITS_HPP_
