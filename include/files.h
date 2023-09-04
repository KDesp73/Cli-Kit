#pragma once

#include <string>

namespace CliKit{
namespace Files{
    bool fileExists(const std::string& filename);
    std::string readFile(const std::string& filename);
    void writeFile(const std::string& filename, const std::string& data);
    void appendFile(const std::string& filename, const std::string& data);
    std::string readLineFromFile(const std::string& filename, int lineNumber);
    void writeLineToFile(const std::string& filename, int lineNumber, const std::string& lineToWrite);
};
};
