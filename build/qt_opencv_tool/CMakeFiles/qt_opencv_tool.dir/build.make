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
include qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/depend.make

# Include the progress variables for this target.
include qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/progress.make

# Include the compile flags for this target's objects.
include qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/flags.make

qt_opencv_tool/qrc_icons.cpp: ../qt_opencv_tool/icons/record.png
qt_opencv_tool/qrc_icons.cpp: ../qt_opencv_tool/icons/record_stop.png
qt_opencv_tool/qrc_icons.cpp: ../qt_opencv_tool/icons/icons.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/major/c_zeuch/hauptseminar/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_icons.cpp"
	cd /home/major/c_zeuch/hauptseminar/build/qt_opencv_tool && /usr/bin/rcc --name icons --output /home/major/c_zeuch/hauptseminar/build/qt_opencv_tool/qrc_icons.cpp /home/major/c_zeuch/hauptseminar/qt_opencv_tool/icons/icons.qrc

qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/src/main.cpp.o: qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/flags.make
qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/src/main.cpp.o: ../qt_opencv_tool/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/major/c_zeuch/hauptseminar/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/src/main.cpp.o"
	cd /home/major/c_zeuch/hauptseminar/build/qt_opencv_tool && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qt_opencv_tool.dir/src/main.cpp.o -c /home/major/c_zeuch/hauptseminar/qt_opencv_tool/src/main.cpp

qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt_opencv_tool.dir/src/main.cpp.i"
	cd /home/major/c_zeuch/hauptseminar/build/qt_opencv_tool && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/major/c_zeuch/hauptseminar/qt_opencv_tool/src/main.cpp > CMakeFiles/qt_opencv_tool.dir/src/main.cpp.i

qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt_opencv_tool.dir/src/main.cpp.s"
	cd /home/major/c_zeuch/hauptseminar/build/qt_opencv_tool && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/major/c_zeuch/hauptseminar/qt_opencv_tool/src/main.cpp -o CMakeFiles/qt_opencv_tool.dir/src/main.cpp.s

qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/src/main.cpp.o.requires:

.PHONY : qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/src/main.cpp.o.requires

qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/src/main.cpp.o.provides: qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/src/main.cpp.o.requires
	$(MAKE) -f qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/build.make qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/src/main.cpp.o.provides.build
.PHONY : qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/src/main.cpp.o.provides

qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/src/main.cpp.o.provides.build: qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/src/main.cpp.o


qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qrc_icons.cpp.o: qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/flags.make
qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qrc_icons.cpp.o: qt_opencv_tool/qrc_icons.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/major/c_zeuch/hauptseminar/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qrc_icons.cpp.o"
	cd /home/major/c_zeuch/hauptseminar/build/qt_opencv_tool && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qt_opencv_tool.dir/qrc_icons.cpp.o -c /home/major/c_zeuch/hauptseminar/build/qt_opencv_tool/qrc_icons.cpp

qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qrc_icons.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt_opencv_tool.dir/qrc_icons.cpp.i"
	cd /home/major/c_zeuch/hauptseminar/build/qt_opencv_tool && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/major/c_zeuch/hauptseminar/build/qt_opencv_tool/qrc_icons.cpp > CMakeFiles/qt_opencv_tool.dir/qrc_icons.cpp.i

qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qrc_icons.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt_opencv_tool.dir/qrc_icons.cpp.s"
	cd /home/major/c_zeuch/hauptseminar/build/qt_opencv_tool && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/major/c_zeuch/hauptseminar/build/qt_opencv_tool/qrc_icons.cpp -o CMakeFiles/qt_opencv_tool.dir/qrc_icons.cpp.s

qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qrc_icons.cpp.o.requires:

.PHONY : qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qrc_icons.cpp.o.requires

qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qrc_icons.cpp.o.provides: qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qrc_icons.cpp.o.requires
	$(MAKE) -f qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/build.make qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qrc_icons.cpp.o.provides.build
.PHONY : qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qrc_icons.cpp.o.provides

qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qrc_icons.cpp.o.provides.build: qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qrc_icons.cpp.o


qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qt_opencv_tool_automoc.cpp.o: qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/flags.make
qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qt_opencv_tool_automoc.cpp.o: qt_opencv_tool/qt_opencv_tool_automoc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/major/c_zeuch/hauptseminar/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qt_opencv_tool_automoc.cpp.o"
	cd /home/major/c_zeuch/hauptseminar/build/qt_opencv_tool && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qt_opencv_tool.dir/qt_opencv_tool_automoc.cpp.o -c /home/major/c_zeuch/hauptseminar/build/qt_opencv_tool/qt_opencv_tool_automoc.cpp

qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qt_opencv_tool_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt_opencv_tool.dir/qt_opencv_tool_automoc.cpp.i"
	cd /home/major/c_zeuch/hauptseminar/build/qt_opencv_tool && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/major/c_zeuch/hauptseminar/build/qt_opencv_tool/qt_opencv_tool_automoc.cpp > CMakeFiles/qt_opencv_tool.dir/qt_opencv_tool_automoc.cpp.i

qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qt_opencv_tool_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt_opencv_tool.dir/qt_opencv_tool_automoc.cpp.s"
	cd /home/major/c_zeuch/hauptseminar/build/qt_opencv_tool && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/major/c_zeuch/hauptseminar/build/qt_opencv_tool/qt_opencv_tool_automoc.cpp -o CMakeFiles/qt_opencv_tool.dir/qt_opencv_tool_automoc.cpp.s

qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qt_opencv_tool_automoc.cpp.o.requires:

.PHONY : qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qt_opencv_tool_automoc.cpp.o.requires

qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qt_opencv_tool_automoc.cpp.o.provides: qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qt_opencv_tool_automoc.cpp.o.requires
	$(MAKE) -f qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/build.make qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qt_opencv_tool_automoc.cpp.o.provides.build
.PHONY : qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qt_opencv_tool_automoc.cpp.o.provides

qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qt_opencv_tool_automoc.cpp.o.provides.build: qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qt_opencv_tool_automoc.cpp.o


# Object files for target qt_opencv_tool
qt_opencv_tool_OBJECTS = \
"CMakeFiles/qt_opencv_tool.dir/src/main.cpp.o" \
"CMakeFiles/qt_opencv_tool.dir/qrc_icons.cpp.o" \
"CMakeFiles/qt_opencv_tool.dir/qt_opencv_tool_automoc.cpp.o"

# External object files for target qt_opencv_tool
qt_opencv_tool_EXTERNAL_OBJECTS =

qt_opencv_tool/qt_opencv_tool: qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/src/main.cpp.o
qt_opencv_tool/qt_opencv_tool: qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qrc_icons.cpp.o
qt_opencv_tool/qt_opencv_tool: qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qt_opencv_tool_automoc.cpp.o
qt_opencv_tool/qt_opencv_tool: qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/build.make
qt_opencv_tool/qt_opencv_tool: liblibqt_opencv_tool.a
qt_opencv_tool/qt_opencv_tool: /usr/lib/libQt5Widgets.so.5.7.1
qt_opencv_tool/qt_opencv_tool: /usr/lib/libQt5Gui.so.5.7.1
qt_opencv_tool/qt_opencv_tool: liblibhough.a
qt_opencv_tool/qt_opencv_tool: liblibvideo_cam.a
qt_opencv_tool/qt_opencv_tool: liblibvideo_file_hdl.a
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_xphoto.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_xobjdetect.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_tracking.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_surface_matching.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_structured_light.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_stereo.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_saliency.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_rgbd.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_reg.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_plot.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_optflow.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_ximgproc.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_line_descriptor.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_hdf.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_fuzzy.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_dpm.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_dnn.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_datasets.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_text.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_face.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_ccalib.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_bioinspired.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_bgsegm.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_aruco.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_videostab.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_superres.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_stitching.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_xfeatures2d.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_shape.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_video.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_photo.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_objdetect.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_calib3d.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_features2d.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_ml.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_highgui.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_videoio.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_imgcodecs.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_imgproc.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_flann.so.3.1.0
qt_opencv_tool/qt_opencv_tool: /usr/lib/libopencv_core.so.3.1.0
qt_opencv_tool/qt_opencv_tool: liblibcvmat2qimage.a
qt_opencv_tool/qt_opencv_tool: /usr/lib/libQt5Core.so.5.7.1
qt_opencv_tool/qt_opencv_tool: liblibtimemeasurement.a
qt_opencv_tool/qt_opencv_tool: qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/major/c_zeuch/hauptseminar/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable qt_opencv_tool"
	cd /home/major/c_zeuch/hauptseminar/build/qt_opencv_tool && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/qt_opencv_tool.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/build: qt_opencv_tool/qt_opencv_tool

.PHONY : qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/build

qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/requires: qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/src/main.cpp.o.requires
qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/requires: qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qrc_icons.cpp.o.requires
qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/requires: qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/qt_opencv_tool_automoc.cpp.o.requires

.PHONY : qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/requires

qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/clean:
	cd /home/major/c_zeuch/hauptseminar/build/qt_opencv_tool && $(CMAKE_COMMAND) -P CMakeFiles/qt_opencv_tool.dir/cmake_clean.cmake
.PHONY : qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/clean

qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/depend: qt_opencv_tool/qrc_icons.cpp
	cd /home/major/c_zeuch/hauptseminar/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/major/c_zeuch/hauptseminar /home/major/c_zeuch/hauptseminar/qt_opencv_tool /home/major/c_zeuch/hauptseminar/build /home/major/c_zeuch/hauptseminar/build/qt_opencv_tool /home/major/c_zeuch/hauptseminar/build/qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : qt_opencv_tool/CMakeFiles/qt_opencv_tool.dir/depend

