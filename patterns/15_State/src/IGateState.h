//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_IGATESTATE_H
#define DESIGN_PATTERN_IGATESTATE_H

#include <string>

class IGateState {
public:
    virtual void enter() = 0;
    virtual void pay() = 0;
    virtual void payOk() = 0;
    virtual void payFailed() = 0;
    virtual std::string getStateName() = 0;
    virtual ~IGateState() {};
};
#endif //DESIGN_PATTERN_IGATESTATE_H
