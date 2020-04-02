//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_OFFERSPECIFICATION_H
#define DESIGN_PATTERN_OFFERSPECIFICATION_H

#include <string>

class OfferSpecification {
public:
    OfferSpecification(std::string amenity_name, float price);
    std::string amenity_name;
    float price;
};

#endif //DESIGN_PATTERN_OFFERSPECIFICATION_H
