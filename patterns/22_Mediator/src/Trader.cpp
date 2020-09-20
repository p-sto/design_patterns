//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <iostream>
#include "Trader.h"

Trader::Trader(Mediator *mediator) {
    this->mediator = mediator;
    this->mediator->addColleague(this);
    std::cout << "Trader signed for stock exchange" << std::endl;
}