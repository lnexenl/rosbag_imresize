cmake_minimum_required(VERSION 3.21)
project(rosbag_imresize)
find_package(roscpp)
if(roscpp_FOUND)
    message(ROS\ FOUNDED\ VERSION: ${roscpp_VERSION})
endif()
set(CMAKE_CXX_STANDARD 17)

include_directories(${roscpp_INCLUDE_DIRS})

add_executable(rosbag_imresize main.cpp)
LINK_LIBRARIES(${roscpp_LIBRARIES})
