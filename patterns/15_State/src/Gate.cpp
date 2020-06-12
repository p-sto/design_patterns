//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "Gate.h"
#include "OpenGateState.h"

Gate::Gate() {
    this->state = new OpenGateState(this);
}

Gate::Gate(IGateState *state) {
    this->state = state;
}

void Gate::enter() {
    this->state->enter();
}

void Gate::pay() {
    this->state->pay();
}

void Gate::payFailed() {
    this->state->payFailed();
}

void Gate::payOk() {
    this->state->payOk();
}

void Gate::changeState(IGateState *state) {
    delete this->state;
    this->state = state;
}

Gate::~Gate() {
    delete this->state;
}
