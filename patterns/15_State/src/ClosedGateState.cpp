//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "ClosedGateState.h"
#include "ProcessingGateState.h"
#include "OpenGateState.h"
#include "IGateState.h"
#include <iostream>

ClosedGateState::ClosedGateState(Gate *gate) {
    this->gate = gate;
}

void ClosedGateState::pay() {
    std::cout << "Changing sate from: " << this->gate->state->getStateName() << std::endl;
    IGateState *new_state = new ProcessingGateState(this->gate);
    this->gate->changeState(new_state);
    std::cout << "--------------> To: " << this->gate->state->getStateName() << "\n" << std::endl;
}

void ClosedGateState::payOk() {
    std::cout << "Changing sate from: " << this->gate->state->getStateName() << std::endl;
    IGateState *new_state = new ClosedGateState(this->gate);
    this->gate->changeState(new_state);
    std::cout << "--------------> To: " << this->gate->state->getStateName() << "\n" << std::endl;
}

void ClosedGateState::payFailed() {
    std::cout << "Changing sate from: " << this->gate->state->getStateName() << std::endl;
    IGateState *new_state = new ClosedGateState(this->gate);
    this->gate->changeState(new_state);
    std::cout << "--------------> To: " << this->gate->state->getStateName() << "\n" << std::endl;
}

void ClosedGateState::enter() {
    std::cout << "Changing sate from: " << this->gate->state->getStateName() << std::endl;
    IGateState *new_state = new ClosedGateState(this->gate);
    this->gate->changeState(new_state);
    std::cout << "--------------> To: " << this->gate->state->getStateName() << "\n" << std::endl;
}