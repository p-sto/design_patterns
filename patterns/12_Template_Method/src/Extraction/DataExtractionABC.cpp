//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "DataExtractionABC.h"

#include <string>
#include <vector>
#include <fstream>
#include <iostream>

std::vector<std::string> DataExtractionABC::getFileContent(std::string file_name) {
    std::string line;
    std::vector<std::string> file_content;
    std::ifstream fil;
    fil.open(file_name);
    while(getline(fil, line)) {
        file_content.push_back(line);
    }
    fil.close();
    return file_content;
}

void DataExtractionABC::processData(std::string file_name) {
    std::vector<std::string> file_content = this->getFileContent(file_name);
    this->parseFileContent(file_content);
}