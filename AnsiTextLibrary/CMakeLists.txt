cmake_minimum_required(VERSION 3.16)

project(AnsiTextManipulationLibrary)
set(CMAKE_CXX_STANDARD 14)

set(SOURCES
   

    src/text/text.hpp
    src/text/text.cpp

    src/menu/menu.hpp
    src/menu/menu.cpp
    src/menu/menu_utils.hpp
    src/menu/menu_utils.cpp
)

add_library(AnsiTextManipulationLibrary ${SOURCES})