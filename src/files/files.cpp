#include "files.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace CliKit;

// Function to check if a file exists
bool Files::fileExists(const std::string& filename) {
    std::ifstream file(filename);
    return file.good();
}

// Function to read the contents of a file
std::string Files::readFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("File not found or cannot be opened.");
    }
    
    std::string content;
    std::string line;
    
    while (std::getline(file, line)) {
        content += line + "\n";
    }
    
    return content;
}

// Function to write data to a file
void Files::writeFile(const std::string& filename, const std::string& data) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file for writing.");
    }
    
    file << data;
    file.close();
}

// Function to append data to a file
void Files::appendFile(const std::string& filename, const std::string& data) {
    std::ofstream file(filename, std::ios::app);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file for appending.");
    }
    
    file << data;
    file.close();
}
