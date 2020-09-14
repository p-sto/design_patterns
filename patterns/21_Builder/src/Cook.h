//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_COOK_H
#define DESIGN_PATTERN_COOK_H

#include "Pizza.h"
#include "IPizzaBuilder.h"

class Cook {
public:
    Cook(IPizzaBuilder *builder);
    void make_pizza();
    Pizza *getPizza();
private:
    IPizzaBuilder *builder;
    Pizza *pizza;
};


#endif //DESIGN_PATTERN_COOK_H
