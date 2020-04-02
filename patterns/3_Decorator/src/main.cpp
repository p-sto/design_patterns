//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "OfferSpecification.h"
#include "IOffer.h"
#include "BaseCarOffer.h"
#include "Amenity.h"
#include <iostream>

int main() {

    IOffer* car = new BaseCarOffer();
    IOffer* ac_car = new Amenity("air condition", 500, car);
    IOffer* cc_car = new Amenity("cruise control", 1500, car);
    IOffer* ac_cc_car = new Amenity("cruise control", 1500, ac_car);

    std::cout << "Base car price is: \t" << car->getPrice() << std::endl;
    std::cout << "Air conditioned car price is: \t" << ac_car->getPrice() << std::endl;
    std::cout << "Car with cruise control price is: \t" << cc_car->getPrice() << std::endl;
    std::cout << "Car with cruise control and AC price is: \t" << ac_cc_car->getPrice() << std::endl;

    delete ac_cc_car;
    delete cc_car;
    delete ac_car;
    delete car;

    return 0;
}