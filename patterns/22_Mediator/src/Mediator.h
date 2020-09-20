//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_MEDIATOR_H
#define DESIGN_PATTERN_MEDIATOR_H

#include <string>

class Colleague;

class Mediator {
public:
    virtual void saleOffer(std::string stock_symbol, int stock_share, int colleague_id) = 0;
    virtual void buyOffer(std::string stock_symbol, int stock_share, int colleague_id) = 0;
    virtual void addColleague(Colleague *colleague) = 0;
    virtual ~Mediator() {};
};


#endif //DESIGN_PATTERN_MEDIATOR_H
