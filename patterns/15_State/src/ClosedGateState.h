//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_CLOSEDGATESTATE_H
#define DESIGN_PATTERN_CLOSEDGATESTATE_H

#include "IGateState.h"
#include "Gate.h"
#include <string>

class ClosedGateState: public IGateState {
public:
    ClosedGateState(Gate *gate);
    void pay();
    void payOk();
    void payFailed();
    void enter();
    std::string getStateName() {return "Closed";}
private:
    Gate *gate;
};


#endif //DESIGN_PATTERN_CLOSEDGATESTATE_H
