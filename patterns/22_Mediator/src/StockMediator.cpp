//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <list>
#include <iostream>
#include "StockMediator.h"
#include "StockOffer.h"

void StockMediator::saleOffer(std::string stock_symbol, int stock_share, int colleague_id) {
    bool stockSold = false;
    std::list<StockOffer*>::iterator it = this->stockBuyOffer.begin();

    while (it != this->stockBuyOffer.end()) {
        if (((*it)->getStockSymbol() == stock_symbol) && (*it)->getStockShares() == stock_share) {
            std::cout << "Selling " << stock_share << "stocks of " << stock_symbol << std::endl;
            std::cout << "Sold to " << colleague_id << std::endl;
            stockSold = true;
            break;
        }
        ++it;
    }
    if (stockSold) {
        std::cout << "Removing offer " << (*it)->getStockSymbol() << std::endl;
        this->stockBuyOffer.erase(it);
        delete *it;
    } else {
        std::cout << stock_share << " of " << stock_symbol << " stocks added to inventory" << std::endl;
        StockOffer *new_offer = new StockOffer(stock_share, stock_symbol, colleague_id);
        this->stockSellOffer.push_back(new_offer);
    }
}

void StockMediator::buyOffer(std::string stock_symbol, int stock_share, int colleague_id) {
    bool stockBought = false;
    std::list<StockOffer*>::iterator it = this->stockSellOffer.begin();
    while (it != this->stockSellOffer.end()) {
        if (((*it)->getStockSymbol() == stock_symbol) && (*it)->getStockShares() == stock_share) {
            std::cout << "Buying " << stock_share << " stocks of " << stock_symbol << std::endl;
            std::cout << "Bought by " << colleague_id << std::endl;
            stockBought = true;
            break;
        }
        ++it;
    }
    if (stockBought) {
        std::cout << "Removing offer: " << (*it)->getStockSymbol() << std::endl;
        this->stockSellOffer.erase(it);
        delete *it;
    } else {
        std::cout << stock_share << " of " << stock_symbol << " stocks added to inventory" << std::endl;
        StockOffer *new_offer = new StockOffer(stock_share, stock_symbol, colleague_id);
        this->stockBuyOffer.push_back(new_offer);
    }
}

void StockMediator::addColleague(Colleague *colleague) {
    this->colleagues.push_back(colleague);
    this->colleagues_ids += 1;
    colleague->setColleagueCode(this->colleagues_ids);
}

StockMediator::~StockMediator() {

    for (std::list<StockOffer*>::iterator it = this->stockSellOffer.begin(); it != this->stockSellOffer.end(); ++it){
        delete *it;
    }
    for (std::list<StockOffer*>::iterator it = this->stockBuyOffer.begin(); it != this->stockBuyOffer.end(); ++it){
        delete *it;
    }
    for (std::list<Colleague*>::iterator it = this->colleagues.begin(); it != this->colleagues.end(); ++it){
        delete *it;
    }
}