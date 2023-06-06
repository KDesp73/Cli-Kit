#pragma once

#include <string>
#include <vector>

namespace AnsiTextLib{
    void menu(int bgColor, std::vector<std::string> options, void (*handleOptionsFunc)(int selectedOption));
};
