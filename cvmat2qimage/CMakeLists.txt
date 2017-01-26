cmake_minimum_required(VERSION 2.8.11)
PROJECT(qt_opencv_tool)



set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Core REQUIRED)

QT5_WRAP_CPP( MOCrcs_cvmat2qimage 
              include/cvmat2qimage.hpp
              src/cvmat2qimage.cpp
              )
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build) 

set(CVMAT2QIMAGE_SOURCEFILES 
  ${CMAKE_CURRENT_SOURCE_DIR}/src/cvmat2qimage.cpp
)            

set(CVMAT2QIMAGE_HEADERFILES
  ${CMAKE_CURRENT_SOURCE_DIR}/include/cvmat2qimage.hpp)

set(CVMAT2QIMAGE_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/include PARENT_SCOPE)  

include_directories( include)
include_directories(${Qt5Widgets_INCLUDE_DIRS})
include_directories(${Qt5Core_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
include_directories(${PROJECT_INCLUDE_DIR})

add_library(libcvmat2qimage
            ${CVMAT2QIMAGE_SOURCEFILES}
            ${QCVMAT2QIMAGE_HEADERFILES}
            ${MOCrcs_cvmat2qimage}
            )
qt5_use_modules(libcvmat2qimage Core)  