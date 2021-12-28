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

using std::placeholders::_1;


/*
class MySubscriber : public rclcpp::Node
{
public:
	MySubscriber()
  : Node("minimal_subscriber")
  {
    subscription_ = this->create_subscription<std_msgs::msg::String>(
      "topic", 10, std::bind(&MySubscriber::topic_callback, this, _1));

  }
*/


MySubscriber :: MySubscriber() : Node("minimal_subscriber")


  {
    subscription_ = this->create_subscription<std_msgs::msg::String>(
      "topic", 10, std::bind(&MySubscriber::topic_callback, this, _1));

  }



  //MySubscriber :: topic_callback(const std_msgs::msg::String::ConstSharedPtr msg) const
void MySubscriber :: topic_callback(const std_msgs::msg::String::ConstSharedPtr msg) const {

  // incrementer();
  RCLCPP_INFO(this->get_logger(), " xx Noticed message: '%s'", msg->data.c_str());
 // }
  //rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
 //int counter;
}


/*private:
  void topic_callback(const std_msgs::msg::String::ConstSharedPtr msg) const
  {
	//counter++;
    RCLCPP_INFO(this->get_logger(), " Noticed message: '%s'",msg->data.c_str());
  }
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};
*/


//void MySubscriber :: incrementer(void) {
//  counter++;

//}



int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MySubscriber>());
  rclcpp::shutdown();
  return 0;
}
