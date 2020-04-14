//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <iostream>
#include "NissanCar.h"

NissanCar::NissanCar(Specification spec) {
    this->spec = spec;
}

Specification NissanCar::getSpec() {
    return this->spec;
}

bool NissanCar::drive() {
    std::cout << "I'm driving even more crazy!" << std::endl;
    return true;
}
