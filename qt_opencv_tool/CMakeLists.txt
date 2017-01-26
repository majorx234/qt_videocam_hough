cmake_minimum_required(VERSION 2.8.11)
PROJECT(qt_opencv_tool)

set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Core REQUIRED)


QT5_WRAP_UI(UISrcs 
            src/mainwindow.ui
            src/hough_param_window.ui)

QT5_WRAP_CPP( MOCrcs 
              include/mainwindow.hpp
              src/mainwindow.cpp
              include/hough_param_window.hpp
              src/hough_param_window.cpp)

#QT5_ADD_RESOURCES(ENTITY_RC_SRCS "${CMAKE_CURRENT_SOURCE_DIR}/*.qrc")

set(RESOURCE ${CMAKE_CURRENT_SOURCE_DIR}/icons/icons.qrc)
qt5_add_resources(RESOURCE_ADDED ${RESOURCE})

MESSAGE("QRC File in " ${RESOURCE})
MESSAGE("Icons added2: " ${RESOURCE_ADDED})


set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)

set(LIBQT_OPENCV_TOOL_SOURCEFILES 
  ${CMAKE_CURRENT_SOURCE_DIR}/src/mainwindow.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/src/hough_param_window.cpp
)

set(QT_OPENCV_TOOL_SOURCEFILES 
  ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
)

set(LIBQT_OPENCV_TOOL_HEADERFILES
  ${CMAKE_CURRENT_SOURCE_DIR}/include/mainwindow.hpp)

set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(QT_OPENCV_TOOL_HEADERS ${PROJECT_INCLUDE_DIR} PARENT_SCOPE)

include_directories(${Qt5Widgets_INCLUDE_DIRS})
include_directories(${Qt5Core_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
include_directories(${PROJECT_INCLUDE_DIR})

include_directories(${VIDEO_CAM_HEADERS})
include_directories(${VIDEO_FILE_HDL_HEADERS})
include_directories(${HOUGHPARAMETER_HEADERS})
include_directories(${HOUGH_HEADERS})
include_directories(${TIMEMEASUREMENT_HEADERS})

set(ICON_FILES  ${CMAKE_CURRENT_SOURCE_DIR}/icons/record.png
                ${CMAKE_CURRENT_SOURCE_DIR}/icons/record_stop.png
                )

#additional Ressources:
if (NOT CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_CURRENT_BINARY_DIR)
    foreach(item IN LISTS data_SHADOW)
        message(STATUS ${item})
        
        add_custom_command(
            OUTPUT "${item}"
            COMMAND ${CMAKE_COMMAND} -E copy "${item}" "${CMAKE_CURRENT_BINARY_DIR}/icons/${item}"
            DEPENDS "${item}"
        )
    endforeach()
endif()

link_directories(${CMAKE_BINARY_DIR})

add_library(libqt_opencv_tool 
  ${LIBQT_OPENCV_TOOL_SOURCEFILES}
  ${LIBQT_OPENCV_TOOL_HEADERFILES}
# ${ENTITY_RC_SRCS} 
  ${UISrcs}
  ${MOCrcs}
  )

qt5_use_modules(libqt_opencv_tool Widgets Core)

add_executable(qt_opencv_tool ${QT_OPENCV_TOOL_SOURCEFILES}
${RESOURCE_ADDED}
  )

qt5_use_modules(qt_opencv_tool Core Gui Widgets)

TARGET_LINK_LIBRARIES(libqt_opencv_tool
  libhough 
  libvideo_cam
  libvideo_file_hdl
  libcvmat2qimage 
  libtimemeasurement
  pthread
)  

target_link_libraries(qt_opencv_tool
    libqt_opencv_tool 
)

