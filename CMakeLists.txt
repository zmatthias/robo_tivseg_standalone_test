cmake_minimum_required (VERSION 3.1.0)

if(DEFINED ENV{VCPKG_ROOT} AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake"
      CACHE STRING "")
elseif (NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  if (WIN32)
    set(CMAKE_TOOLCHAIN_FILE "C:/repos/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "")
  endif()
endif()

project ("robo_tivseg")


# Enable debug postfix
set(CMAKE_DEBUG_POSTFIX d)

# Enable C++ 11 features
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED TRUE)

find_package(realsense2 CONFIG REQUIRED)
find_package(SDL REQUIRED SDL_BUILDING_LIBRARY)
find_package(GTest MODULE REQUIRED)
find_package(OpenCV REQUIRED)

# Make sure tivseg_ctrl files are found
include_directories("include")
if (WIN32)
  link_directories("lib/x64_windows_msvc17")
else()
  link_directories("lib/x64_linux")
endif()

# Output paths
SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)
SET(DOC_OUTPUT_PATH ${CMAKE_BINARY_DIR}/doc)

##############################################################################
# The actual code
##############################################################################

add_subdirectory(test)

