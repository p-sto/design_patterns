//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "NissanFabric.h"
#include "../../Products/Nissan/JukeCar.h"
#include "../../Products/Nissan/GTRCar.h"
#include "../../Products/Nissan/LeafCar.h"
#include "../../ModelExcpetion.h"

NissanCar* NissanFabric::fabricateVehicle(Specification spec) {
    if (spec.model == "JUKE") {
        return new JukeCar(spec);
    } else if (spec.model == "GTR") {
        return new GTRCar(spec);
    } else if (spec.model == "LEAF") {
        return new LeafCar(spec);
    }
    throw ModelException();
};