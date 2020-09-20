//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "Colleague.h"

void Colleague::buyOffer(std::string stock_symbol, int shares) {
    this->mediator->buyOffer(stock_symbol, shares, this->colleague_id);
}

void Colleague::saleOffer(std::string stock_symbol, int shares) {
    this->mediator->saleOffer(stock_symbol, shares, this->colleague_id);

}

void Colleague::setColleagueCode(int colleague_code) {
    this->colleague_id = colleague_code;
}