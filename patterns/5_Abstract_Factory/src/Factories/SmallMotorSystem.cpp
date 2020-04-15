//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <iostream>
#include "SmallMotorSystem.h"

SmallMotorSystem::~SmallMotorSystem() {
    delete this->_engine;
    delete this->_transmission;
}

Engine* SmallMotorSystem::getEngine() {
    return this->_engine;
}

Transmission* SmallMotorSystem::getTransmission() {
    return this->_transmission;
}
