//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_LEAFCAR_H
#define DESIGN_PATTERN_LEAFCAR_H

#include "NissanCar.h"

class LeafCar: public NissanCar {
public:
    using NissanCar::NissanCar;
    void drive();
};


#endif //DESIGN_PATTERN_LEAFCAR_H
