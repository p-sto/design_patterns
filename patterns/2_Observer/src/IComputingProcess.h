//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_ICOMPUTINGPROCESS_H
#define DESIGN_PATTERN_ICOMPUTINGPROCESS_H
#include "IProcessClient.h"
class IProcessClient;

class IComputingProcess{
public:
    virtual void registerObserver(IProcessClient *client) = 0;
    virtual void removeObserver(IProcessClient *client) = 0;
    virtual void notify() = 0;
};

#endif //DESIGN_PATTERN_ICOMPUTINGPROCESS_H
