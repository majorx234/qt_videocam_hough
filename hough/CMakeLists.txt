cmake_minimum_required(VERSION 2.8)
project(hough)

find_package( OpenCV REQUIRED )

include_directories( include)

set(HOUGH_HEADERFILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/include/hough.hpp
    )
set(HOUGH_SOURCEFILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/hough.cpp
    )
set(HOUGH_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/include PARENT_SCOPE)    

add_library(libhough  
   ${HOUGH_HEADERFILES}  
   ${HOUGH_SOURCEFILES}
)

target_link_libraries(libhough
   ${OpenCV_LIBS}
)