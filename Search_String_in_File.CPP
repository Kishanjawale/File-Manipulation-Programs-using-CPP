#include<iostream>
#include <fstream>
#include <string>

bool searchInFile(const std::string& fileName, const std::string& searchData) {
    std::ifstream inputFile(fileName);
    std::string line;

    if (inputFile.is_open()) {
        while (getline(inputFile, line)) {
            if (line.find(searchData) != std::string::npos) {
                inputFile.close();
                return true;
            }
        }
        inputFile.close();
    } else {
        std::cerr << "Unable to open file: " << fileName << std::endl;
    }

    return false;
}

int main() {
    // Example data
    std::string fileName = "Search_String_in_File.CPP";
    
    // Reading search data from user
    std::cout << "Enter the string to search in the file: ";
    std::string searchData;
    std::getline(std::cin, searchData);

    // Checking if the data exists in the file
    bool found = searchInFile(fileName, searchData);

    // Printing the result
    if (found) {
        std::cout << "The string '" << searchData << "' is found in the file." << std::endl;
    } else {
        std::cout << "The string '" << searchData << "' is not found in the file." << std::endl;
    }

    return 0;
}
