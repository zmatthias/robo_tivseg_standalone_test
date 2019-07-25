cmake_minimum_required(VERSION 3.14)
project(robo_tivseg_standalone_test)

set(CMAKE_CXX_STANDARD 17)

find_package(GTest MODULE REQUIRED)


set (TEST_INCLUDE_CPPS "")
list (APPEND TEST_INCLUDE_CPPS src/ObstacleModule.cpp)
list (APPEND TEST_INCLUDE_CPPS src/ProtocolModule.cpp)

list (APPEND TEST_INCLUDE_CPPS test/SensorManager_Stub.cpp)


add_executable(robo_tivseg_standalone_test test/test.cpp ${RELEASE_INCLUDE_CPPS})
target_link_libraries(robo_tivseg_standalone_test GTest::GTest GTest::Main)
