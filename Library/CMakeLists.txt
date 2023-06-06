cmake_minimum_required(VERSION 3.16)

project(AnsiTextManipulationLibrary)
set(CMAKE_CXX_STANDARD 14)

set(SOURCES
   

    src/text/text.hpp
    src/${LIB_DIR}/text/text.cpp

    src/${LIB_DIR}/menu/menu.hpp
    src/${LIB_DIR}/menu/menu.cpp
    src/${LIB_DIR}/menu/menu_utils.hpp
    src/${LIB_DIR}/menu/menu_utils.cpp
)

add_library(AnsiTextManipulationLibrary ${SOURCES})