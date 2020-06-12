//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_PROCESSINGGATESTATE_H
#define DESIGN_PATTERN_PROCESSINGGATESTATE_H

#include "IGateState.h"
#include "Gate.h"
#include <string>

class ProcessingGateState: public IGateState {
public:
    ProcessingGateState(Gate *gate);
    void enter();
    void pay();
    void payOk();
    void payFailed();
    std::string getStateName() {return "Processing";}
private:
    Gate *gate;
};


#endif //DESIGN_PATTERN_PROCESSINGGATESTATE_H
