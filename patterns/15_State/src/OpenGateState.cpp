//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "OpenGateState.h"
#include "ClosedGateState.h"
#include "ProcessingGateState.h"
#include "IGateState.h"
#include <iostream>

OpenGateState::OpenGateState(Gate *gate) {
    this->gate = gate;
}

void OpenGateState::payOk() {
    std::cout << "Changing sate from: " << this->gate->state->getStateName() << std::endl;
    IGateState *new_state = new OpenGateState(this->gate);
    this->gate->changeState(new_state);
    std::cout << "--------------> To: " << this->gate->state->getStateName() << "\n" << std::endl;
}

void OpenGateState::pay() {
    std::cout << "Changing sate from: " << this->gate->state->getStateName() << std::endl;
    IGateState *new_state = new OpenGateState(this->gate);
    this->gate->changeState(new_state);
    std::cout << "--------------> To: " << this->gate->state->getStateName() << "\n" << std::endl;
}

void OpenGateState::payFailed() {
    std::cout << "Changing sate from: " << this->gate->state->getStateName() << std::endl;
    IGateState *new_state = new OpenGateState(this->gate);
    this->gate->changeState(new_state);
    std::cout << "--------------> To: " << this->gate->state->getStateName() << "\n" << std::endl;
}

void OpenGateState::enter() {
    std::cout << "Changing sate from: " << this->gate->state->getStateName() << std::endl;
    IGateState *new_state = new ClosedGateState(this->gate);
    this->gate->changeState(new_state);
    std::cout << "--------------> To: " << this->gate->state->getStateName() << "\n" << std::endl;
}
