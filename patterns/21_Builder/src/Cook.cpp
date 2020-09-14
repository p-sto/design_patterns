//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "Cook.h"

Cook::Cook(IPizzaBuilder *builder) {
    this->builder = builder;
}

void Cook::make_pizza() {
    this->pizza = this->builder->create();
}

Pizza *Cook::getPizza() {
    return this->pizza;
}