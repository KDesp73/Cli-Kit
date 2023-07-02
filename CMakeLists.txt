cmake_minimum_required(VERSION 3.16)

project(AnsiTextManipulationLibrary)
set(CMAKE_CXX_STANDARD 14)

include_directories(src/include/)

set(SOURCES
    src/text/text.cpp
    src/menu/menu.cpp
    src/menu/menu_utils.cpp
)

set(INCLUDE
    ansi_lib.h
    src/include/text.h
    src/include/menu.h
    src/include/menu_utils.h
)


add_library(${PROJECT_NAME} ${SOURCES} ${INCLUDE})
