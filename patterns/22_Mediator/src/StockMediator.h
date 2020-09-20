//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_STOCKMEDIATOR_H
#define DESIGN_PATTERN_STOCKMEDIATOR_H

#include <list>
#include "Colleague.h"
#include "StockOffer.h"
#include "Mediator.h"

class StockMediator: public Mediator {
public:
    void saleOffer(std::string stock_symbol, int stock_share, int colleague_id);
    void buyOffer(std::string stock_symbol, int stock_share, int colleague_id);
    void addColleague(Colleague *colleague);
    ~StockMediator();
private:
    std::list<Colleague*> colleagues;
    std::list<StockOffer*> stockBuyOffer;
    std::list<StockOffer*> stockSellOffer;
    int colleagues_ids = 0;
};


#endif //DESIGN_PATTERN_STOCKMEDIATOR_H
