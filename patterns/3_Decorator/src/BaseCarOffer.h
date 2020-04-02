//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_BASECAROFFER_H
#define DESIGN_PATTERN_BASECAROFFER_H

#include "OfferSpecification.h"
#include "IOffer.h"
#include <string>
#include <list>

class BaseCarOffer: public IOffer {
public:
    BaseCarOffer();
    ~BaseCarOffer(){};
    float getPrice();
    std::string model_name;
private:
    float price;
    OfferSpecification* specification;
};


#endif //DESIGN_PATTERN_BASECAROFFER_H
