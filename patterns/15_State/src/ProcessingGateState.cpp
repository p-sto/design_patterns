//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "ProcessingGateState.h"
#include "ClosedGateState.h"
#include "OpenGateState.h"
#include "IGateState.h"
#include <iostream>

ProcessingGateState::ProcessingGateState(Gate *gate) {
    this->gate = gate;
}

void ProcessingGateState::enter() {
    std::cout << "Changing sate from: " << this->gate->state->getStateName() << std::endl;
    IGateState *new_state = new ProcessingGateState(this->gate);
    this->gate->changeState(new_state);
    std::cout << "--------------> To: " << this->gate->state->getStateName() << "\n" << std::endl;
}

void ProcessingGateState::payFailed() {
    std::cout << "Changing sate from: " << this->gate->state->getStateName() << std::endl;
    IGateState *new_state = new ClosedGateState(this->gate);
    this->gate->changeState(new_state);
    std::cout << "--------------> To: " << this->gate->state->getStateName() << "\n" << std::endl;
}

void ProcessingGateState::payOk() {
    std::cout << "Changing sate from: " << this->gate->state->getStateName() << std::endl;
    IGateState *new_state = new OpenGateState(this->gate);
    this->gate->changeState(new_state);
    std::cout << "--------------> To: " << this->gate->state->getStateName() << "\n" << std::endl;
}

void ProcessingGateState::pay() {
    std::cout << "Changing sate from: " << this->gate->state->getStateName() << std::endl;
    IGateState *new_state = new ProcessingGateState(this->gate);
    this->gate->changeState(new_state);
    std::cout << "--------------> To: " << this->gate->state->getStateName() << "\n" << std::endl;
}