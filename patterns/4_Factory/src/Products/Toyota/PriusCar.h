//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_PRIUSCAR_H
#define DESIGN_PATTERN_PRIUSCAR_H

#include "ToyotaCar.h"

class PriusCar: public ToyotaCar {
public:
    using ToyotaCar::ToyotaCar;
    void drive();
};


#endif //DESIGN_PATTERN_PRIUSCAR_H
