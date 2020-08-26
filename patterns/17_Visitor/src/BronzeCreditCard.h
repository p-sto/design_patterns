//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_BRONZECREDITCARD_H
#define DESIGN_PATTERN_BRONZECREDITCARD_H

#include "ICreditCard.h"
#include "ICreditVisitor.h"

class BronzeCreditCard: public ICreditCard {
public:
    BronzeCreditCard(float init_value);
    float getSavings();
    bool pay(float amount);
    float visit(ICreditVisitor* visitor);
private:
    float current_saving;
};


#endif //DESIGN_PATTERN_BRONZECREDITCARD_H
