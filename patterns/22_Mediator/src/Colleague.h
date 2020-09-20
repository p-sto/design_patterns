//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_COLLEAGUE_H
#define DESIGN_PATTERN_COLLEAGUE_H

#include <string>
#include "Mediator.h"

class Colleague {
public:
    void saleOffer(std::string stock_symbol, int shares);
    void buyOffer(std::string stock_symbol, int shares);
    void setColleagueCode(int colleague_code);
    int colleague_id = 0;
protected:
    Mediator *mediator;
};


#endif //DESIGN_PATTERN_COLLEAGUE_H
