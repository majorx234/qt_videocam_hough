cmake_minimum_required(VERSION 2.8)
project( video_file_hdl)

find_package( OpenCV REQUIRED )

include_directories( include)

set(VIDEO_FILE_HDL_HEADERFILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/include/video_file_hdl.hpp
    )    
set(VIDEO_FILE_HDL_SOURCEFILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/video_file_hdl.cpp
    ) 
set(VIDEO_FILE_HDL_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/include PARENT_SCOPE)

add_library(libvideo_file_hdl  
   ${VIDEO_FILE_HDL_HEADERFILES}  
   ${VIDEO_FILE_HDL_SOURCEFILES}
)
target_link_libraries(libvideo_file_hdl
   ${OpenCV_LIBS}
)