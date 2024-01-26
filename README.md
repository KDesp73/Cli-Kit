# tui-kit

An ANSI based library in C++ for both Linux and Windows, that allows users to add menus, loading animations and color to their cli applications

## Usage

1. Clone the repository in your project folder

```bash
git clone --depth=1 git@github.com:KDesp73/tui-kit.git
```

2. In your `CMakeLists.txt` file include the library

```cmake
add_subdirectory(tui-kit)
include_directories(tui-kit)

target_link_libraries(${PROJECT_NAME} TuiKit)
```

3. To use the classes and methods of this library include the `tui_kit.h` file

## Documentation

[Check it here](./Documentation.md)

## File Tree

```
.
├── tui_kit.h
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
