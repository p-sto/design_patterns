//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "PowerControl.h"
#include <iostream>

bool PowerControl::on() {
    std::cout << "Setting power control to ON" << std::endl;
    return true;
}

bool PowerControl::ignition() {
    std::cout << "FIRE!" << std::endl;
    return true;
}
