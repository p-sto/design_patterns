//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_IAMENITY_H
#define DESIGN_PATTERN_IAMENITY_H

#include "IOffer.h"
#include <string>
#include <list>

class Amenity: public IOffer {
public:
    Amenity(std::string name, float price, IOffer* wrapped);
    float getPrice();
private:
    std::string name;
    float price;
    IOffer* wrapped;
};

#endif //DESIGN_PATTERN_IAMENITY_H
