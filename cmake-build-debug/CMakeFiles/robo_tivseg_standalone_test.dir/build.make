# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/z/Downloads/clion-2019.1.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/z/Downloads/clion-2019.1.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/z/PSE/robo_tivseg_standalone_test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/z/PSE/robo_tivseg_standalone_test/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/robo_tivseg_standalone_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/robo_tivseg_standalone_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/robo_tivseg_standalone_test.dir/flags.make

CMakeFiles/robo_tivseg_standalone_test.dir/test/test.cpp.o: CMakeFiles/robo_tivseg_standalone_test.dir/flags.make
CMakeFiles/robo_tivseg_standalone_test.dir/test/test.cpp.o: ../test/test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/z/PSE/robo_tivseg_standalone_test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/robo_tivseg_standalone_test.dir/test/test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/robo_tivseg_standalone_test.dir/test/test.cpp.o -c /home/z/PSE/robo_tivseg_standalone_test/test/test.cpp

CMakeFiles/robo_tivseg_standalone_test.dir/test/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robo_tivseg_standalone_test.dir/test/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/z/PSE/robo_tivseg_standalone_test/test/test.cpp > CMakeFiles/robo_tivseg_standalone_test.dir/test/test.cpp.i

CMakeFiles/robo_tivseg_standalone_test.dir/test/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robo_tivseg_standalone_test.dir/test/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/z/PSE/robo_tivseg_standalone_test/test/test.cpp -o CMakeFiles/robo_tivseg_standalone_test.dir/test/test.cpp.s

CMakeFiles/robo_tivseg_standalone_test.dir/src/AbstractModule.cpp.o: CMakeFiles/robo_tivseg_standalone_test.dir/flags.make
CMakeFiles/robo_tivseg_standalone_test.dir/src/AbstractModule.cpp.o: ../src/AbstractModule.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/z/PSE/robo_tivseg_standalone_test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/robo_tivseg_standalone_test.dir/src/AbstractModule.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/robo_tivseg_standalone_test.dir/src/AbstractModule.cpp.o -c /home/z/PSE/robo_tivseg_standalone_test/src/AbstractModule.cpp

CMakeFiles/robo_tivseg_standalone_test.dir/src/AbstractModule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robo_tivseg_standalone_test.dir/src/AbstractModule.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/z/PSE/robo_tivseg_standalone_test/src/AbstractModule.cpp > CMakeFiles/robo_tivseg_standalone_test.dir/src/AbstractModule.cpp.i

CMakeFiles/robo_tivseg_standalone_test.dir/src/AbstractModule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robo_tivseg_standalone_test.dir/src/AbstractModule.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/z/PSE/robo_tivseg_standalone_test/src/AbstractModule.cpp -o CMakeFiles/robo_tivseg_standalone_test.dir/src/AbstractModule.cpp.s

CMakeFiles/robo_tivseg_standalone_test.dir/src/ProtocolModule.cpp.o: CMakeFiles/robo_tivseg_standalone_test.dir/flags.make
CMakeFiles/robo_tivseg_standalone_test.dir/src/ProtocolModule.cpp.o: ../src/ProtocolModule.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/z/PSE/robo_tivseg_standalone_test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/robo_tivseg_standalone_test.dir/src/ProtocolModule.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/robo_tivseg_standalone_test.dir/src/ProtocolModule.cpp.o -c /home/z/PSE/robo_tivseg_standalone_test/src/ProtocolModule.cpp

CMakeFiles/robo_tivseg_standalone_test.dir/src/ProtocolModule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robo_tivseg_standalone_test.dir/src/ProtocolModule.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/z/PSE/robo_tivseg_standalone_test/src/ProtocolModule.cpp > CMakeFiles/robo_tivseg_standalone_test.dir/src/ProtocolModule.cpp.i

CMakeFiles/robo_tivseg_standalone_test.dir/src/ProtocolModule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robo_tivseg_standalone_test.dir/src/ProtocolModule.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/z/PSE/robo_tivseg_standalone_test/src/ProtocolModule.cpp -o CMakeFiles/robo_tivseg_standalone_test.dir/src/ProtocolModule.cpp.s

CMakeFiles/robo_tivseg_standalone_test.dir/src/ObstacleModule.cpp.o: CMakeFiles/robo_tivseg_standalone_test.dir/flags.make
CMakeFiles/robo_tivseg_standalone_test.dir/src/ObstacleModule.cpp.o: ../src/ObstacleModule.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/z/PSE/robo_tivseg_standalone_test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/robo_tivseg_standalone_test.dir/src/ObstacleModule.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/robo_tivseg_standalone_test.dir/src/ObstacleModule.cpp.o -c /home/z/PSE/robo_tivseg_standalone_test/src/ObstacleModule.cpp

CMakeFiles/robo_tivseg_standalone_test.dir/src/ObstacleModule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robo_tivseg_standalone_test.dir/src/ObstacleModule.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/z/PSE/robo_tivseg_standalone_test/src/ObstacleModule.cpp > CMakeFiles/robo_tivseg_standalone_test.dir/src/ObstacleModule.cpp.i

CMakeFiles/robo_tivseg_standalone_test.dir/src/ObstacleModule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robo_tivseg_standalone_test.dir/src/ObstacleModule.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/z/PSE/robo_tivseg_standalone_test/src/ObstacleModule.cpp -o CMakeFiles/robo_tivseg_standalone_test.dir/src/ObstacleModule.cpp.s

CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStub.cpp.o: CMakeFiles/robo_tivseg_standalone_test.dir/flags.make
CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStub.cpp.o: ../test/SensorManagerStub.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/z/PSE/robo_tivseg_standalone_test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStub.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStub.cpp.o -c /home/z/PSE/robo_tivseg_standalone_test/test/SensorManagerStub.cpp

CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStub.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStub.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/z/PSE/robo_tivseg_standalone_test/test/SensorManagerStub.cpp > CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStub.cpp.i

CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStub.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStub.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/z/PSE/robo_tivseg_standalone_test/test/SensorManagerStub.cpp -o CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStub.cpp.s

CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleNever.cpp.o: CMakeFiles/robo_tivseg_standalone_test.dir/flags.make
CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleNever.cpp.o: ../test/SensorManagerStubObstacleNever.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/z/PSE/robo_tivseg_standalone_test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleNever.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleNever.cpp.o -c /home/z/PSE/robo_tivseg_standalone_test/test/SensorManagerStubObstacleNever.cpp

CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleNever.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleNever.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/z/PSE/robo_tivseg_standalone_test/test/SensorManagerStubObstacleNever.cpp > CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleNever.cpp.i

CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleNever.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleNever.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/z/PSE/robo_tivseg_standalone_test/test/SensorManagerStubObstacleNever.cpp -o CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleNever.cpp.s

CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleAlways.cpp.o: CMakeFiles/robo_tivseg_standalone_test.dir/flags.make
CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleAlways.cpp.o: ../test/SensorManagerStubObstacleAlways.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/z/PSE/robo_tivseg_standalone_test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleAlways.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleAlways.cpp.o -c /home/z/PSE/robo_tivseg_standalone_test/test/SensorManagerStubObstacleAlways.cpp

CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleAlways.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleAlways.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/z/PSE/robo_tivseg_standalone_test/test/SensorManagerStubObstacleAlways.cpp > CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleAlways.cpp.i

CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleAlways.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleAlways.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/z/PSE/robo_tivseg_standalone_test/test/SensorManagerStubObstacleAlways.cpp -o CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleAlways.cpp.s

# Object files for target robo_tivseg_standalone_test
robo_tivseg_standalone_test_OBJECTS = \
"CMakeFiles/robo_tivseg_standalone_test.dir/test/test.cpp.o" \
"CMakeFiles/robo_tivseg_standalone_test.dir/src/AbstractModule.cpp.o" \
"CMakeFiles/robo_tivseg_standalone_test.dir/src/ProtocolModule.cpp.o" \
"CMakeFiles/robo_tivseg_standalone_test.dir/src/ObstacleModule.cpp.o" \
"CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStub.cpp.o" \
"CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleNever.cpp.o" \
"CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleAlways.cpp.o"

# External object files for target robo_tivseg_standalone_test
robo_tivseg_standalone_test_EXTERNAL_OBJECTS =

robo_tivseg_standalone_test: CMakeFiles/robo_tivseg_standalone_test.dir/test/test.cpp.o
robo_tivseg_standalone_test: CMakeFiles/robo_tivseg_standalone_test.dir/src/AbstractModule.cpp.o
robo_tivseg_standalone_test: CMakeFiles/robo_tivseg_standalone_test.dir/src/ProtocolModule.cpp.o
robo_tivseg_standalone_test: CMakeFiles/robo_tivseg_standalone_test.dir/src/ObstacleModule.cpp.o
robo_tivseg_standalone_test: CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStub.cpp.o
robo_tivseg_standalone_test: CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleNever.cpp.o
robo_tivseg_standalone_test: CMakeFiles/robo_tivseg_standalone_test.dir/test/SensorManagerStubObstacleAlways.cpp.o
robo_tivseg_standalone_test: CMakeFiles/robo_tivseg_standalone_test.dir/build.make
robo_tivseg_standalone_test: /usr/lib/libgtest.a
robo_tivseg_standalone_test: /usr/lib/libgtest_main.a
robo_tivseg_standalone_test: /usr/lib/libgtest.a
robo_tivseg_standalone_test: CMakeFiles/robo_tivseg_standalone_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/z/PSE/robo_tivseg_standalone_test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable robo_tivseg_standalone_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/robo_tivseg_standalone_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/robo_tivseg_standalone_test.dir/build: robo_tivseg_standalone_test

.PHONY : CMakeFiles/robo_tivseg_standalone_test.dir/build

CMakeFiles/robo_tivseg_standalone_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/robo_tivseg_standalone_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/robo_tivseg_standalone_test.dir/clean

CMakeFiles/robo_tivseg_standalone_test.dir/depend:
	cd /home/z/PSE/robo_tivseg_standalone_test/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/z/PSE/robo_tivseg_standalone_test /home/z/PSE/robo_tivseg_standalone_test /home/z/PSE/robo_tivseg_standalone_test/cmake-build-debug /home/z/PSE/robo_tivseg_standalone_test/cmake-build-debug /home/z/PSE/robo_tivseg_standalone_test/cmake-build-debug/CMakeFiles/robo_tivseg_standalone_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/robo_tivseg_standalone_test.dir/depend

