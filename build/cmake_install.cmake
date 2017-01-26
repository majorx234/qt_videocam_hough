# Install script for directory: /home/major/c_zeuch/hauptseminar

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/major/c_zeuch/hauptseminar/build/houghparameter/cmake_install.cmake")
  include("/home/major/c_zeuch/hauptseminar/build/hough/cmake_install.cmake")
  include("/home/major/c_zeuch/hauptseminar/build/video_cam/cmake_install.cmake")
  include("/home/major/c_zeuch/hauptseminar/build/video_file_hdl/cmake_install.cmake")
  include("/home/major/c_zeuch/hauptseminar/build/opencv_video_hough_test/cmake_install.cmake")
  include("/home/major/c_zeuch/hauptseminar/build/timemeasurement/cmake_install.cmake")
  include("/home/major/c_zeuch/hauptseminar/build/benchmark/cmake_install.cmake")
  include("/home/major/c_zeuch/hauptseminar/build/cvmat2qimage/cmake_install.cmake")
  include("/home/major/c_zeuch/hauptseminar/build/qt_opencv_tool/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/major/c_zeuch/hauptseminar/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
