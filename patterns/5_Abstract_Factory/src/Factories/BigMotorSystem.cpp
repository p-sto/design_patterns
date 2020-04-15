//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "BigMotorSystem.h"
#include "../Products/AutomaticGearbox.h"
#include "../Products/SixSPeedGearbox.h"

BigMotorSystem::BigMotorSystem(bool automatic_gearbox) {
    if (automatic_gearbox) this->_transmission = new AutomaticGearbox();
    else this->_transmission = new SixSpeedGearbox();
}

BigMotorSystem::~BigMotorSystem() {
    delete this->_engine;
    delete this->_transmission;
}

Engine* BigMotorSystem::getEngine() {
    return this->_engine;
}

Transmission* BigMotorSystem::getTransmission() {
    return this->_transmission;
}
