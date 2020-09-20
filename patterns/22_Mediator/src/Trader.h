//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_TRADER_H
#define DESIGN_PATTERN_TRADER_H

#include "Mediator.h"
#include "Colleague.h"

class Trader: public Colleague {
public:
    Trader(Mediator *mediator);
};


#endif //DESIGN_PATTERN_TRADER_H
