cmake_minimum_required(VERSION 2.8)
project( houghparameter)

include_directories( include)

set(HOUGHPARAMETER_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/include PARENT_SCOPE) 
set(HOUGHPARAMETER_HEADERFILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/include/houghparameter.hpp
    )
