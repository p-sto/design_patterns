//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "Amenity.h"
#include <list>

Amenity::Amenity(std::string name, float price, IOffer* wrapped) {
    this->name = name;
    this->price = price;
    this->wrapped = wrapped;
}

float Amenity::getPrice() {
    return this->wrapped->getPrice() + this->price;
}
