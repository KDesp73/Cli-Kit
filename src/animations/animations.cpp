#include "animations.h"

#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace TuiKit;


void Animations::loadingBar(int current, int total, int barWidth) {
    float progress = static_cast<float>(current) / total;
    int filledWidth = static_cast<int>(progress * barWidth);

    cout << "[";
    for (int i = 0; i < barWidth; ++i) {
        if (i < filledWidth) {
            cout << "=";
        } else {
            cout << " ";
        }
    }
    cout << "] " << static_cast<int>(progress * 100.0f) << "%\r";
    cout.flush();
}

void Animations::loadingAnimation(int delayMs, int iterations) {
    const std::string animationFrames = "-\\|/";
    int frameIndex = 0;

    for (int i = 0; i < iterations; ++i) {
        std::cout << "\r" << animationFrames[frameIndex] << " Loading... ";
        std::cout.flush();
        frameIndex = (frameIndex + 1) % animationFrames.length();
        std::this_thread::sleep_for(std::chrono::milliseconds(delayMs));
    }
}
