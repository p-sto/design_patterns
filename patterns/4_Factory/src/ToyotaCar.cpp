//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <iostream>
#include "ToyotaCar.h"

ToyotaCar::ToyotaCar(Specification spec) {
    this->spec = spec;
}

Specification ToyotaCar::getSpec() {
    return this->spec;
}

bool ToyotaCar::drive() {
    std::cout << "I'm driving like crazy!" << std::endl;
    return true;
}
