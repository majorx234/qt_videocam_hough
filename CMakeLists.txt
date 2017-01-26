cmake_minimum_required(VERSION 2.8.11)
PROJECT(qt_videocam_hough)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)

add_subdirectory(houghparameter)
include_directories(${HOUGHPARAMETER_HEADERS})

add_subdirectory(hough)
include_directories(${HOUGH_HEADERS})

add_subdirectory(video_cam)
include_directories(${VIDEO_CAM_HEADERS})

add_subdirectory(video_file_hdl)
include_directories(${VIDEO_FILE_HDL_HEADERS})

add_subdirectory(opencv_video_hough_test)

add_subdirectory(timemeasurement)
include_directories(${TIMEMEASUREMENT_HEADERS})

add_subdirectory(benchmark)

add_subdirectory(cvmat2qimage)
include_directories(${CVMAT2QIMAGE_HEADERS})

add_subdirectory(qt_opencv_tool)
include_directories(${QT_OPENCV_TOOL_HEADERS})