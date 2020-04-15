//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "MediumMotorSystem.h"

MediumMotorSystem::~MediumMotorSystem() {
    delete this->_engine;
    delete this->_transmission;
}

Engine* MediumMotorSystem::getEngine() {
    return this->_engine;
}

Transmission* MediumMotorSystem::getTransmission() {
    return this->_transmission;
}
