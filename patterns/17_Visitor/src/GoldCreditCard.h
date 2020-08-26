//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_GOLDCREDITCARD_H
#define DESIGN_PATTERN_GOLDCREDITCARD_H

#include "ICreditCard.h"
#include "ICreditVisitor.h"

class GoldCreditCard: ICreditCard {
public:
    GoldCreditCard(float init_value);
    float getSavings();
    bool pay(float amount);
    float visit(ICreditVisitor* visitor);
private:
    float current_saving;
};


#endif //DESIGN_PATTERN_GOLDCREDITCARD_H
