//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_SILVERCREDITCARD_H
#define DESIGN_PATTERN_SILVERCREDITCARD_H

#include "ICreditCard.h"
#include "ICreditVisitor.h"

class SilverCreditCard: public ICreditCard {
public:
    SilverCreditCard(float init_value);
    float getSavings();
    bool pay(float amount);
    float visit(ICreditVisitor* visitor);
private:
    float current_saving;
};


#endif //DESIGN_PATTERN_SILVERCREDITCARD_H
