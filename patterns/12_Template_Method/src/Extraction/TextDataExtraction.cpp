//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "TextDataExtraction.h"
#include <iostream>

void TextDataExtraction::parseFileContent(std::vector<std::string> file_content) {
    std::cout << "Processing file content, contains " << file_content.size() << " lines." << std::endl;
    for (unsigned int i = 0; i < file_content.size(); i++) {
        std::cout << file_content[i] << std::endl;
    }
}