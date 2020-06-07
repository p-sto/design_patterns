//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "CSVDataExtraction.h"
#include "helper.h"
#include <string>
#include <vector>
#include <iostream>

static char DELIMITER = ',';

void CSVDataExtraction::parseFileContent(std::vector<std::string> file_content) {
    std::cout << "Processing file content, contains " << file_content.size() << " lines." << std::endl;
    for (unsigned int i = 0; i < file_content.size(); i++) {
        std::vector<std::string> split_line = split_line_by_delimiter(file_content[i], DELIMITER);
        for (unsigned int j = 0; j < split_line.size(); j++) {
            std::cout << split_line[j] << std::endl;
        }
    }
}