//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_IPROCESSCLIENT_H
#define DESIGN_PATTERN_IPROCESSCLIENT_H
#include "IComputingProcess.h"

class IComputingProcess;

class IProcessClient {
public:
    virtual void update() = 0;
    IComputingProcess* observed_process;
};

#endif //DESIGN_PATTERN_IPROCESSCLIENT_H
