//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_SPECIFICATION_H
#define DESIGN_PATTERN_SPECIFICATION_H

#include <string>
#include "CarModels.h"

struct Specification {
    CarModels model;
    std::string color;
    std::string version;
};

#endif //DESIGN_PATTERN_SPECIFICATION_H
