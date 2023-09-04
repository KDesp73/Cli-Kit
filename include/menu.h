#pragma once

#include <string>
#include <vector>

using namespace std;

namespace CliKit{
namespace Menu{
    int menu(string title, int bgColor, std::vector<std::string> options);
};
};
