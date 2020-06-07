//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_CSVDATAEXTRACTION_H
#define DESIGN_PATTERN_CSVDATAEXTRACTION_H

#include "DataExtractionABC.h"
#include <vector>
#include <string>

class CSVDataExtraction: public DataExtractionABC {
public:
    void parseFileContent(std::vector<std::string> file_content);
};


#endif //DESIGN_PATTERN_CSVDATAEXTRACTION_H
