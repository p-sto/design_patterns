//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "Computer.h"
#include <iostream>

bool Computer::isEngineReady() {
    std::cout << "Checking if engine is ready" << std::endl;
    return true;
}

void Computer::setInitConditions() {
    std::cout << "Setting default engine parameters" << std::endl;
}
