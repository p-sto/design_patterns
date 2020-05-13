//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "Engine.h"
#include "Computer.h"
#include "PowerControl.h"

Engine::Engine() {
    this->computer = Computer();
    this->power_control = PowerControl();
}

bool Engine::launch() {
    this->power_control.on();
    bool is_engine_ok = this->computer.isEngineReady();
    if (not is_engine_ok)
        return false;
    this->computer.setInitConditions();
    this->power_control.ignition();
    return true;
}
