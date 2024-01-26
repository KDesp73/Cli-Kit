# Documentation

> Everything in this library is under the `TuiKit` namespace

## `menu` Method

### Description
The `menu` method is used to display a menu with a customizable background color and a list of options. When an option is selected, the corresponding function provided as a parameter will be called, passing the selected option as an argument.

### Syntax

```cpp
void menu(int bgColor, std::vector<std::string> options, void (*handleOptionsFunc)(int selectedOption));
```

### Parameters

- bgColor (int): The background color of the menu.
- options (std::vectorstd::string): A vector of strings representing the menu options.
- handleOptionsFunc (void (*)(int selectedOption)): A function pointer to the function that will handle the selected option. It should take an integer argument representing the selected option.

### Usage

To use the menu method, follow these steps:

1. Define a function that will handle the selected option. The function should have the following signature: void handleOption(int selectedOption).
2. Create a vector of strings containing the menu options.
3. Call the menu method, passing the desired background color, the options vector, and the function pointer to the handleOptionsFunc parameter.

### Example

```cpp
#include <iostream>
#include <vector>

#include "tui_kit.h"

int main() {
    std::vector<std::string> options = {"Option 1", "Option 2", "Option 3"};
    int option  = TuiKit::menu(4, options);

    return 0;
}

```

---

## Text Class

The `Text` class provides static members and methods for text formatting and manipulation.

### Static Constants

- `static const string normal`: Normal text formatting.
- `static const string bold`: Bold text formatting.
- `static const string underline`: Underline text formatting.
- `static const string italic`: Italic text formatting.
- `static const string clear`: Clear formatting.
- `static const string erase_line`: Erase current line.
- `static const string black`: Black color.
- `static const string red`: Red color.
- `static const string green`: Green color.
- `static const string yellow`: Yellow color.
- `static const string blue`: Blue color.
- `static const string purple`: Purple color.
- `static const string cyan`: Cyan color.
- `static const string lgrey`: Light gray color.
- `static const string dgrey`: Dark gray color.
- `static const string u_black`: Black color with underline.
- `static const string u_red`: Red color with underline.
- `static const string u_green`: Green color with underline.
- `static const string u_yellow`: Yellow color with underline.
- `static const string u_blue`: Blue color with underline.
- `static const string u_purple`: Purple color with underline.
- `static const string u_cyan`: Cyan color with underline.
- `static const string u_lgrey`: Light gray color with underline.
- `static const string u_dgrey`: Dark gray color with underline.
- `static const string b_black`: Black color with bold.
- `static const string b_red`: Red color with bold.
- `static const string b_green`: Green color with bold.
- `static const string b_yellow`: Yellow color with bold.
- `static const string b_blue`: Blue color with bold.
- `static const string b_purple`: Purple color with bold.
- `static const string b_cyan`: Cyan color with bold.
- `static const string b_lgrey`: Light gray color with bold.
- `static const string b_dgrey`: Dark gray color with bold.

### Static Methods

- `static string color(string where, int color)`: Applies the specified color to the given text.

where: "fg" or "bg"

color: 0-255

![47952855-ecb12480-df75-11e8-89d4-ac26c50e80b9](https://github.com/DMG-TechLabs/Text-Based-Game/assets/63654361/4885e933-066b-458a-924b-db07df25f975)

- `static void delayedTyping(string text)`: Prints the text with a delayed typing effect.
- `static void clearScreen()`: Clears the screen.

---

## Animations

- `void loadingBar(int current, int total, int barWidth = 50)`: If this method is added in a for loop it can track the progress made in the form of a loading bar

- `void loadingAnimation(int delayMs = 100, int iterations = 10)`: Prints a loading animation for a fixed number of seconds
