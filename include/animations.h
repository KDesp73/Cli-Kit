#pragma once

#include <iostream>
#include <string>

namespace CliKit{
namespace Animations{
    void loadingBar(int current, int total, int barWidth = 50);
    void loadingAnimation(int delayMs = 100, int iterations = 10);
};
};
