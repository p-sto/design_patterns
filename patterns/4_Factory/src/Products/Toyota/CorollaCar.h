//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_COROLLACAR_H
#define DESIGN_PATTERN_COROLLACAR_H

#include "ToyotaCar.h"

class CorollaCar: public ToyotaCar {
public:
    using ToyotaCar::ToyotaCar;
    void drive();
};

#endif //DESIGN_PATTERN_COROLLACAR_H
