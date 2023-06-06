# Ansi-Text-Manipulation-Library

An ANSI based text manipulation library in C++ for both Linux and Windows

## Usage

1. Clone the repository

```bash
git clone https://github.com/KDesp73/Ansi-Text-Manipulation-Library
```

2. In your `CMakeLists.txt` file include the library

```cmake
include(path_to_library/CMakeLists.txt)

target_link_libraries(Your_Project AnsiTextManipulationLibrary)
```

## Documentation

[Check it here](https://github.com/KDesp73/Ansi-Text-Manipulation-Library/blob/main/Documentation.md)

## File Tree

```
.
└── CMakeLists.txt
    └── src
        ├── ansi_lib.hpp
        ├── main.cpp
        ├── menu
        │   ├── menu.cpp
        │   ├── menu.hpp
        │   ├── menu_utils.cpp
        │   └── menu_utils.hpp
        └── text
            ├── text.cpp
            └── text.hpp
```

## License

This work is published under the [GNU GENERAL PUBLIC LICENSE](https://github.com/KDesp73/Ansi-Text-Manipulation-Library/blob/main/LICENSE)
