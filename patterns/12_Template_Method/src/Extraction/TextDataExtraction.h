//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_TEXTDATAEXTRACTION_H
#define DESIGN_PATTERN_TEXTDATAEXTRACTION_H

#include "DataExtractionABC.h"
#include <string>
#include <vector>

class TextDataExtraction: public DataExtractionABC {
public:
    void parseFileContent(std::vector<std::string> file_content);
};


#endif //DESIGN_PATTERN_TEXTDATAEXTRACTION_H
