cmake_minimum_required(VERSION 2.8)
project( timemeasurement)

include_directories( include)

set(TIMEMEASUREMENT_HEADERFILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/include/timemeasurement.h
    )
set(TIMEMEASUREMENT_SOURCEFILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/timemeasurement.cpp
    )
set(TIMEMEASUREMENT_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/include PARENT_SCOPE)  

add_library(libtimemeasurement  
   ${TIMEMEASUREMENT_HEADERFILES}  
   ${TIMEMEASUREMENT_SOURCEFILES}
)