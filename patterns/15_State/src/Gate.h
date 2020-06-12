//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_GATE_H
#define DESIGN_PATTERN_GATE_H

#include "IGateState.h"
#include <string>

class Gate {
public:
    Gate();
    Gate(IGateState *state);
    void enter();
    void pay();
    void payOk();
    void payFailed();
    void changeState(IGateState *state);
    ~Gate();
    IGateState *state;
};


#endif //DESIGN_PATTERN_GATE_H
