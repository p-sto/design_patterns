//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "Pizza.h"

void Pizza::setMushrooms(bool val) {
    this->hasMushrooms = val;
}

void Pizza::setTomatoes(bool val) {
    this->hasTomatoes = val;
}

void Pizza::setCheese(bool val) {
    this->hasCheese = val;
}

void Pizza::setOlives(bool val) {
    this->hasOlives = val;
}

void Pizza::setHam(bool val) {
    this->hasHam = val;
}

std::string Pizza::getType() {
    return this->type;
}

Pizza::Pizza(std::string type) {
    this->type = type;
}