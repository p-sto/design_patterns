//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <iostream>
#include "CapriciosaRecipe.h"
#include "Cook.h"
#include "IPizzaBuilder.h"
#include "Pizza.h"

int main() {

    IPizzaBuilder *builder = new CapriciosaRecipe();
    Cook *cook = new Cook(builder);
    cook->make_pizza();
    Pizza *capriciosa = cook->getPizza();
    std::cout << "Delivered pizza is " << capriciosa->getType() << std::endl;

    delete cook;
    delete builder;
    delete capriciosa;
    return 0;
}