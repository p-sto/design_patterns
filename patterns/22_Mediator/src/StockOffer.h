//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_STOCKOFFER_H
#define DESIGN_PATTERN_STOCKOFFER_H

#include <string>

class StockOffer {
public:
    StockOffer(int shares_number, std::string stock_symbol, int colleague_id);
    int getStockShares();
    std::string getStockSymbol();
    int getColleagueId();
private:
    int stock_shares = 0;
    std::string stock_symbol = "";
    int colleague_id = 0;
};


#endif //DESIGN_PATTERN_STOCKOFFER_H
