cmake_minimum_required(VERSION 3.16)

project(CliKit)
set(CMAKE_CXX_STANDARD 14)

include_directories(include)

if(UNIX AND NOT APPLE)
    # Find the ALSA library
    find_package(ALSA REQUIRED)

    # Add your source files
    add_executable(YourExecutable main.cpp)

    # Link against the ALSA library
    target_link_libraries(YourExecutable ${ALSA_LIBRARIES})
    message("ALSA linked.")
endif()

set(SOURCES
    src/text/text.cpp

    src/menu/menu.cpp
    src/menu/menu_utils.cpp
    
    src/animations/animations.cpp
    
    src/sound/sound.cpp
)

set(INCLUDE
    cli_kit.h
    
    include/text.h
    
    include/menu.h
    include/menu_utils.h
    
    include/animations.h
    include/sound.h
)


add_library(${PROJECT_NAME} ${SOURCES} ${INCLUDE})
