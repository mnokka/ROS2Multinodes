cmake_minimum_required(VERSION 3.5)
project(multinodes)



# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

find_package(example_interfaces REQUIRED)

# find the header files
include_directories(include/multinode)


add_executable(mytalker src/publisher.cpp)
ament_target_dependencies(mytalker rclcpp std_msgs)

add_executable(mytalker2 src/publisher2.cpp)
ament_target_dependencies(mytalker2 rclcpp std_msgs)

#install(TARGETS
#  mytalker
#  DESTINATION lib/${PROJECT_NAME})


add_executable(mylistener src/subscriber.cpp)
ament_target_dependencies(mylistener rclcpp std_msgs)

add_executable(mylistener2 src/subscriber2.cpp)
ament_target_dependencies(mylistener2 rclcpp std_msgs)

add_executable(mylistener3 src/subscriber3.cpp)
ament_target_dependencies(mylistener3 rclcpp std_msgs)

add_executable(adder_server src/adder_server.cpp)
ament_target_dependencies(adder_server
rclcpp example_interfaces)

install(TARGETS
  mytalker
  mytalker2
  mylistener
  mylistener2
  mylistener3
  adder_server
  DESTINATION lib/${PROJECT_NAME})



# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)


# Install launch files.
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}/
)


ament_package()
