//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_HELPER_H
#define DESIGN_PATTERN_HELPER_H

#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> split_line_by_delimiter(std::string line, char delimiter) {
    std::stringstream ss(line);
    std::string token;
    std::vector<std::string> cont;
    while (std::getline(ss, token, delimiter)) {
        cont.push_back(token);
    }
    return cont;
}


#endif //DESIGN_PATTERN_HELPER_H
