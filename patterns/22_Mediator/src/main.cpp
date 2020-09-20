//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "StockMediator.h"
#include "Trader.h"

int main() {

    StockMediator *nyse = new StockMediator();
    Trader *trader1 = new Trader(nyse);
    Trader *trader2 = new Trader(nyse);

    trader1->saleOffer("MS", 100);
    trader1->saleOffer("Google", 200);

    trader2->buyOffer("MS", 100);
    trader2->saleOffer("Amazon", 10);

    trader1->buyOffer("Amazon", 10);
    trader2->buyOffer("Google", 200);

    delete nyse;
    delete trader1;
    delete trader2;
    return 0;
}