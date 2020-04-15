//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_YARISCAR_H
#define DESIGN_PATTERN_YARISCAR_H

#include "ToyotaCar.h"

class YarisCar: public ToyotaCar {
public:
    using ToyotaCar::ToyotaCar;
    void drive();
};


#endif //DESIGN_PATTERN_YARISCAR_H
