# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/major/c_zeuch/hauptseminar

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/major/c_zeuch/hauptseminar/build

# Include any dependencies generated for this target.
include video_cam/CMakeFiles/libvideo_cam.dir/depend.make

# Include the progress variables for this target.
include video_cam/CMakeFiles/libvideo_cam.dir/progress.make

# Include the compile flags for this target's objects.
include video_cam/CMakeFiles/libvideo_cam.dir/flags.make

video_cam/CMakeFiles/libvideo_cam.dir/src/video_cam.cpp.o: video_cam/CMakeFiles/libvideo_cam.dir/flags.make
video_cam/CMakeFiles/libvideo_cam.dir/src/video_cam.cpp.o: ../video_cam/src/video_cam.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/major/c_zeuch/hauptseminar/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object video_cam/CMakeFiles/libvideo_cam.dir/src/video_cam.cpp.o"
	cd /home/major/c_zeuch/hauptseminar/build/video_cam && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libvideo_cam.dir/src/video_cam.cpp.o -c /home/major/c_zeuch/hauptseminar/video_cam/src/video_cam.cpp

video_cam/CMakeFiles/libvideo_cam.dir/src/video_cam.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libvideo_cam.dir/src/video_cam.cpp.i"
	cd /home/major/c_zeuch/hauptseminar/build/video_cam && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/major/c_zeuch/hauptseminar/video_cam/src/video_cam.cpp > CMakeFiles/libvideo_cam.dir/src/video_cam.cpp.i

video_cam/CMakeFiles/libvideo_cam.dir/src/video_cam.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libvideo_cam.dir/src/video_cam.cpp.s"
	cd /home/major/c_zeuch/hauptseminar/build/video_cam && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/major/c_zeuch/hauptseminar/video_cam/src/video_cam.cpp -o CMakeFiles/libvideo_cam.dir/src/video_cam.cpp.s

video_cam/CMakeFiles/libvideo_cam.dir/src/video_cam.cpp.o.requires:

.PHONY : video_cam/CMakeFiles/libvideo_cam.dir/src/video_cam.cpp.o.requires

video_cam/CMakeFiles/libvideo_cam.dir/src/video_cam.cpp.o.provides: video_cam/CMakeFiles/libvideo_cam.dir/src/video_cam.cpp.o.requires
	$(MAKE) -f video_cam/CMakeFiles/libvideo_cam.dir/build.make video_cam/CMakeFiles/libvideo_cam.dir/src/video_cam.cpp.o.provides.build
.PHONY : video_cam/CMakeFiles/libvideo_cam.dir/src/video_cam.cpp.o.provides

video_cam/CMakeFiles/libvideo_cam.dir/src/video_cam.cpp.o.provides.build: video_cam/CMakeFiles/libvideo_cam.dir/src/video_cam.cpp.o


# Object files for target libvideo_cam
libvideo_cam_OBJECTS = \
"CMakeFiles/libvideo_cam.dir/src/video_cam.cpp.o"

# External object files for target libvideo_cam
libvideo_cam_EXTERNAL_OBJECTS =

liblibvideo_cam.a: video_cam/CMakeFiles/libvideo_cam.dir/src/video_cam.cpp.o
liblibvideo_cam.a: video_cam/CMakeFiles/libvideo_cam.dir/build.make
liblibvideo_cam.a: video_cam/CMakeFiles/libvideo_cam.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/major/c_zeuch/hauptseminar/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../liblibvideo_cam.a"
	cd /home/major/c_zeuch/hauptseminar/build/video_cam && $(CMAKE_COMMAND) -P CMakeFiles/libvideo_cam.dir/cmake_clean_target.cmake
	cd /home/major/c_zeuch/hauptseminar/build/video_cam && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libvideo_cam.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
video_cam/CMakeFiles/libvideo_cam.dir/build: liblibvideo_cam.a

.PHONY : video_cam/CMakeFiles/libvideo_cam.dir/build

video_cam/CMakeFiles/libvideo_cam.dir/requires: video_cam/CMakeFiles/libvideo_cam.dir/src/video_cam.cpp.o.requires

.PHONY : video_cam/CMakeFiles/libvideo_cam.dir/requires

video_cam/CMakeFiles/libvideo_cam.dir/clean:
	cd /home/major/c_zeuch/hauptseminar/build/video_cam && $(CMAKE_COMMAND) -P CMakeFiles/libvideo_cam.dir/cmake_clean.cmake
.PHONY : video_cam/CMakeFiles/libvideo_cam.dir/clean

video_cam/CMakeFiles/libvideo_cam.dir/depend:
	cd /home/major/c_zeuch/hauptseminar/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/major/c_zeuch/hauptseminar /home/major/c_zeuch/hauptseminar/video_cam /home/major/c_zeuch/hauptseminar/build /home/major/c_zeuch/hauptseminar/build/video_cam /home/major/c_zeuch/hauptseminar/build/video_cam/CMakeFiles/libvideo_cam.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : video_cam/CMakeFiles/libvideo_cam.dir/depend

