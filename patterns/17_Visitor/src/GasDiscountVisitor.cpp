//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "GasDiscountVisitor.h"

float GasDiscountVisitor::visit(GoldCreditCard* card) {
    return 0.3;
}

float GasDiscountVisitor::visit(SilverCreditCard* card) {
    return 0.2;
}

float GasDiscountVisitor::visit(BronzeCreditCard* card) {
    return 0.15;
}
