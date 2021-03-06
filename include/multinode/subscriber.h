#ifndef ROS2_MULTI_NODE_SUBSCRIBER_H
#define ROS2_MULTI_NODE_SUBSCRIBER_H


#include<iostream>

#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#include <string>
#include <cinttypes>  // printf
//#include <memory>
//#include <unistd.h>

using namespace std::chrono_literals;

namespace multinode
{
class MySubscriber : public rclcpp::Node {
public:
  MySubscriber(const rclcpp::NodeOptions & options);

private:

  //void topic_callback(const std_msgs::msg::String::ConstSharedPtr msg) const;
  // cant be conts-cont if calling function which modifies other data, compiler goes bonkers
  void topic_callback(std_msgs::msg::String::ConstSharedPtr msg);

  void incrementer();
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
  int counter_=0;
  std::string counterstring="kissa";
 // stream mystream;


};


}

#endif /* SUBSCRIBER */
