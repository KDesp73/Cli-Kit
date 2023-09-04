#include "files.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>
#include <dirent.h>

using namespace CliKit;
using namespace std;

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

// Function to read a specific line from a file
std::string Files::readLineFromFile(const std::string& filename, int lineNumber) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("File not found or cannot be opened.");
    }
    
    std::string line;
    int currentLineNumber = 0;
    
    while (currentLineNumber < lineNumber && std::getline(file, line)) {
        currentLineNumber++;
    }
    
    if (currentLineNumber == lineNumber) {
        return line;
    } else {
        throw std::runtime_error("Line number exceeds the number of lines in the file.");
    }
}

// Function to write a specific line to a file
void Files::writeLineToFile(const std::string& filename, int lineNumber, const std::string& lineToWrite) {
    std::ifstream inFile(filename);
    if (!inFile.is_open()) {
        throw std::runtime_error("File not found or cannot be opened.");
    }
    
    std::vector<std::string> lines;
    std::string line;
    
    while (std::getline(inFile, line)) {
        lines.push_back(line);
    }
    
    inFile.close();
    
    if (lineNumber < 1 || lineNumber > static_cast<int>(lines.size())) {
        throw std::runtime_error("Line number is out of range.");
    }
    
    lines[lineNumber - 1] = lineToWrite; // Adjust for 0-based index
    
    std::ofstream outFile(filename);
    if (!outFile.is_open()) {
        throw std::runtime_error("Unable to open file for writing.");
    }
    
    for (const std::string& updatedLine : lines) {
        outFile << updatedLine << "\n";
    }
    
    outFile.close();
}

std::vector<string> Files::listDirectory(const std::string &path){
    std::vector<std::string> filenames;

    DIR* dir = opendir(directory_path.c_str());
    if (dir) {
        dirent* entry;
        while ((entry = readdir(dir)) != nullptr) {
            if (entry->d_type == DT_REG) {
                filenames.push_back(entry->d_name);
            }
        }
        closedir(dir);
    } else {
        std::cerr << "Error: Unable to open directory " << directory_path << std::endl;
    }

    return filenames;
}


std::string Files::getExecutablePath() {
    std::vector<char> buffer(1024);
    ssize_t len = readlink("/proc/self/exe", buffer.data(), buffer.size());
    if (len != -1) {
        buffer[len] = '\0';
        return std::string(buffer.data());
    } else {
        // Handle error
        return "";
    }
}
