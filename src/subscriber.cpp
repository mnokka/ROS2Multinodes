// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


// from: https://docs.ros.org/en/rolling/Tutorials/Writing-A-Simple-Cpp-Service-And-Client.html

/*#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
*/


#include "subscriber.h"


namespace multinode
{

using std::placeholders::_1;

MySubscriber::MySubscriber(const rclcpp::NodeOptions & options)
: Node("minimal_subscriber", options), counter_(0)
{
  subscription_ = this->create_subscription<std_msgs::msg::String>(
    "topic", 10, std::bind(&MySubscriber::topic_callback, this, _1));
  incrementer();
}


//void MySubscriber::topic_callback(const std_msgs::msg::String::ConstSharedPtr msg) const
// cant be conts-cont if calling function which modifies other data, compiler goes bonkers
void MySubscriber::topic_callback( std_msgs::msg::String::ConstSharedPtr msg)
{

  RCLCPP_INFO(this->get_logger(), "First listener noticed message: '%s'", msg->data.c_str());
  RCLCPP_INFO(this->get_logger(), "Another info message line");
  incrementer();
}


void MySubscriber::incrementer(void)
{
  counter_++;
  counterstring = std::to_string(counter_);
  std::string mystring="Counter value";
  RCLCPP_INFO(this->get_logger(),(mystring+ counterstring).c_str() ); // some compiler complains as need to be  const char * format
  //printf("testing printf usage\n"); //works

}

}
int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::NodeOptions options;
  auto subscriber_node = std::make_shared<multinode::MySubscriber>(options);
  rclcpp::spin(subscriber_node);
  rclcpp::shutdown();
  return 0;
}
