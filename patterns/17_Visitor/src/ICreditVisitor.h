//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_ICREDITVISITOR_H
#define DESIGN_PATTERN_ICREDITVISITOR_H

class BronzeCreditCard;
class SilverCreditCard;
class GoldCreditCard;

class ICreditVisitor {
public:
    virtual float visit(BronzeCreditCard* card) = 0;
    virtual float visit(SilverCreditCard* card) = 0;
    virtual float visit(GoldCreditCard* card) = 0;
    virtual ~ICreditVisitor() {};
};


#endif //DESIGN_PATTERN_ICREDITVISITOR_H
