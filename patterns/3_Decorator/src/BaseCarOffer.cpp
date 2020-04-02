//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "BaseCarOffer.h"
#include "OfferSpecification.h"
#include <list>

BaseCarOffer::BaseCarOffer() {
    this->specification = new OfferSpecification("base model", 40'000);
}

float BaseCarOffer::getPrice() {
    return this->specification->price;
}
