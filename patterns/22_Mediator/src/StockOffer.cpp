//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "StockOffer.h"

StockOffer::StockOffer(int shares_number, std::string stock_symbol, int colleague_id) {
    this->stock_shares = shares_number;
    this->stock_symbol = stock_symbol;
    this->colleague_id = colleague_id;
}

int StockOffer::getColleagueId() {
    return this->colleague_id;
}

std::string StockOffer::getStockSymbol() {
    return this->stock_symbol;
}

int StockOffer::getStockShares() {
    return this->stock_shares;
}
