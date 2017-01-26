cmake_minimum_required(VERSION 2.8)
project( opencv_video_hough_test)

find_package( OpenCV REQUIRED )

include_directories( include)

set(sourceFiles
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
    )

add_executable(${CMAKE_PROJECT_NAME} ${sourceFiles})
target_link_libraries( ${CMAKE_PROJECT_NAME}  ${OpenCV_LIBS} libhough libvideo_cam)