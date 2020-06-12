//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_OPENGATESTATE_H
#define DESIGN_PATTERN_OPENGATESTATE_H

#include "IGateState.h"
#include "Gate.h"
#include <string>

class OpenGateState: public IGateState {
public:
    OpenGateState(Gate *gate);
    void enter();
    void pay();
    void payOk();
    void payFailed();
    std::string getStateName() {return "Open";}
private:
    Gate *gate;
};


#endif //DESIGN_PATTERN_OPENGATESTATE_H
