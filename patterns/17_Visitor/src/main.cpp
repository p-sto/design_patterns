//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <iostream>

#include "GasDiscountVisitor.h"
#include "ICreditCard.h"
#include "BronzeCreditCard.h"
#include "SilverCreditCard.h"

int main(){

    GasDiscountVisitor* gas_discount_visitor = new GasDiscountVisitor();
    BronzeCreditCard* bronze_card = new BronzeCreditCard(1000.0);
    SilverCreditCard* silver_card = new SilverCreditCard(10000.0);
    GoldCreditCard* gold_card = new GoldCreditCard(100000000);

    std::cout << "Gas discount for bronze credit cards is :" << bronze_card->visit(gas_discount_visitor) << std::endl;
    std::cout << "Gas discount for silver credit cards is :" << silver_card->visit(gas_discount_visitor) << std::endl;
    std::cout << "Gas discount for golden credit cards is :" << gold_card->visit(gas_discount_visitor) << std::endl;

    delete bronze_card;
    delete silver_card;
    delete gold_card;
    delete gas_discount_visitor;
    return 0;
}