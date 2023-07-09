# Cli Kit

An ANSI based library in C++ for both Linux and Windows, that allows users to add menus, loading animations and color to their cli applications

## Usage

1. Clone the repository

```bash
git clone https://github.com/KDesp73/Cli-Kit
```

2. In your `CMakeLists.txt` file include the library

```cmake
add_subdirectory(Cli-Kit)

target_link_libraries(${PROJECT_NAME} CliKit)
```

3. To use the classes and methods of this library include the `cli_kit.h` file

## Documentation

[Check it here](./Documentation.md)

## File Tree

```
.
├── cli_kit.h
├── CMakeLists.txt
├── Documentation.md
├── include
│   ├── animations.h
│   ├── menu.h
│   ├── menu_utils.h
│   └── text.h
├── LICENSE
├── README.md
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
