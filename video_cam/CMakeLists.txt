cmake_minimum_required(VERSION 2.8)
project( video_cam)

find_package( OpenCV REQUIRED )

include_directories( include)

set(VIDEO_CAM_HEADERFILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/include/video_cam.hpp
    )    
set(VIDEO_CAM_SOURCEFILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/video_cam.cpp
    ) 
set(VIDEO_CAM_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/include PARENT_SCOPE)

add_library(libvideo_cam  
   ${VIDEO_CAM_HEADERFILES}  
   ${VIDEO_CAM_SOURCEFILES}
)
target_link_libraries(libvideo_cam
   ${OpenCV_LIBS}
)
