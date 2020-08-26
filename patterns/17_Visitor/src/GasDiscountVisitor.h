//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_GASDISCOUNTVISITOR_H
#define DESIGN_PATTERN_GASDISCOUNTVISITOR_H

#include "ICreditVisitor.h"
#include "BronzeCreditCard.h"
#include "SilverCreditCard.h"
#include "GoldCreditCard.h"

class GasDiscountVisitor: public ICreditVisitor {
public:
    float visit(BronzeCreditCard* credit);
    float visit(SilverCreditCard* credit);
    float visit(GoldCreditCard* credit);
};


#endif //DESIGN_PATTERN_GASDISCOUNTVISITOR_H
