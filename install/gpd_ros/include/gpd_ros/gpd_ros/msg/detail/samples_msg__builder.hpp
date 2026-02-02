// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gpd_ros:msg/SamplesMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gpd_ros/msg/samples_msg.hpp"


#ifndef GPD_ROS__MSG__DETAIL__SAMPLES_MSG__BUILDER_HPP_
#define GPD_ROS__MSG__DETAIL__SAMPLES_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gpd_ros/msg/detail/samples_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gpd_ros
{

namespace msg
{

namespace builder
{

class Init_SamplesMsg_samples
{
public:
  explicit Init_SamplesMsg_samples(::gpd_ros::msg::SamplesMsg & msg)
  : msg_(msg)
  {}
  ::gpd_ros::msg::SamplesMsg samples(::gpd_ros::msg::SamplesMsg::_samples_type arg)
  {
    msg_.samples = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpd_ros::msg::SamplesMsg msg_;
};

class Init_SamplesMsg_header
{
public:
  Init_SamplesMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SamplesMsg_samples header(::gpd_ros::msg::SamplesMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SamplesMsg_samples(msg_);
  }

private:
  ::gpd_ros::msg::SamplesMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpd_ros::msg::SamplesMsg>()
{
  return gpd_ros::msg::builder::Init_SamplesMsg_header();
}

}  // namespace gpd_ros

#endif  // GPD_ROS__MSG__DETAIL__SAMPLES_MSG__BUILDER_HPP_
