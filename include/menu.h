#pragma once

#include <string>
#include <vector>

using namespace std;

namespace CliKit{
namespace Menu{
    void menu(string title, int bgColor, std::vector<std::string> options, void (*handleOptionsFunc)(int selectedOption));
};
};
