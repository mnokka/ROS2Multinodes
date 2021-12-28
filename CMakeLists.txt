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

# find the header files
include_directories(include)


add_executable(mytalker src/publisher.cpp)
ament_target_dependencies(mytalker rclcpp std_msgs)

install(TARGETS
  mytalker
  DESTINATION lib/${PROJECT_NAME})


add_executable(mylistener src/subscriber.cpp)
ament_target_dependencies(mylistener rclcpp std_msgs)

install(TARGETS
  mytalker
  mylistener
  DESTINATION lib/${PROJECT_NAME})



# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)


# Install launch files.
#install(DIRECTORY
#  launch
#  DESTINATION share/${PROJECT_NAME}/
#)


ament_package()
