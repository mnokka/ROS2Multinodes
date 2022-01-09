

#include "parameter.h"

using namespace std::chrono_literals;

ParametersClass::ParametersClass(): Node("parameter")
    {
      this->declare_parameter<std::string>("my_parameter", "Initial hardcode parameter");
      timer_ = this->create_wall_timer(
      1000ms, std::bind(&ParametersClass::respond, this));
    }

void ParametersClass::respond()
    {
      this->get_parameter("my_parameter", parameter_string_);
      RCLCPP_INFO(this->get_logger(), "Current parameter: %s", parameter_string_.c_str());
    }




int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ParametersClass>());
  rclcpp::shutdown();
  return 0;
}
