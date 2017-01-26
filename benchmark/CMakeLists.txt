cmake_minimum_required(VERSION 2.8)
project(Benchmark)

find_package( OpenCV REQUIRED )

include_directories( include)

set(benchmark_sourceFiles
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
    )

add_executable(opencv_benchmark 
                ${benchmark_sourceFiles})
target_link_libraries(  opencv_benchmark 
                        ${OpenCV_LIBS} 
                        libhough 
                        libvideo_cam 
                        libvideo_file_hdl
                        libtimemeasurement)    