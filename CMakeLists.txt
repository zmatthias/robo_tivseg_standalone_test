cmake_minimum_required(VERSION 3.14)
project(robo_tivseg_standalone_test)

set(CMAKE_CXX_STANDARD 17)

add_executable(robo_tivseg_standalone_test test/test.cpp src/trythis.cpp)