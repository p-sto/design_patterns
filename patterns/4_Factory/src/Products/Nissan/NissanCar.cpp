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
