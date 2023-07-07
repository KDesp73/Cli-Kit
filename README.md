# Ansi-Text-Manipulation-Library

An ANSI based text manipulation library in C++ for both Linux and Windows

## Usage

1. Clone the repository

```bash
git clone https://github.com/KDesp73/Ansi-Text-Manipulation-Library
```

2. In your `CMakeLists.txt` file include the library

```cmake
add_subdirectory(Ansi-Text-Manipulation-Library)

target_link_libraries(${PROJECT_NAME} AnsiTextManipulationLibrary)
```

3. To use the classes and methods of this library include the `ansi_lib.hpp` file

## Documentation

[Check it here](./Documentation.md)

## File Tree

```
.
├── ansi_lib.h
├── CMakeLists.txt
├── Documentation.md
├── include
│   ├── animations.h
│   ├── menu.h
│   ├── menu_utils.h
│   └── text.h
├── LICENSE
├── README.md
├── scripts
│   ├── build
│   ├── clean
│   └── clean_and_build
└── src
    ├── animations
    │   └── animations.cpp
    ├── main.cpp
    ├── menu
    │   ├── menu.cpp
    │   └── menu_utils.cpp
    └── text
        └── text.cpp
```

## License

This work is published under the [GNU GENERAL PUBLIC LICENSE](LICENSE)
