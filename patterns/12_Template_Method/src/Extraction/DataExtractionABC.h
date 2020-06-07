//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_DATAEXTRACTIONABC_H
#define DESIGN_PATTERN_DATAEXTRACTIONABC_H

#include <string>
#include <vector>

class DataExtractionABC {
public:
    void processData(std::string file_name);
    std::vector<std::string> getFileContent(std::string file_name);
    virtual void parseFileContent(std::vector<std::string> file_content) = 0;
};


#endif //DESIGN_PATTERN_DATAEXTRACTIONABC_H
