cmake_minimum_required(VERSION 3.16)

project(CliKit)
set(CMAKE_CXX_STANDARD 14)

include_directories(include)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SOURCES
    src/text/text.cpp

    src/menu/menu.cpp
    src/menu/menu_utils.cpp
    
    src/animations/animations.cpp
    
    src/sound/sound.cpp

    src/files/files.cpp
)

set(INCLUDE
    cli_kit.h
    
    include/text.h
    
    include/menu.h
    include/menu_utils.h
    
    include/animations.h
    include/sound.h
    include/files.h
)


add_library(${PROJECT_NAME} ${SOURCES} ${INCLUDE})


