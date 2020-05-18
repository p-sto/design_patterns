//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_ASSET_H
#define DESIGN_PATTERN_ASSET_H

#include <string>

class Asset {
public:
    Asset(std::string name, int value);
    std::string getName();
    int getValue();
private:
    std::string name;
    int value;
};


#endif //DESIGN_PATTERN_ASSET_H
