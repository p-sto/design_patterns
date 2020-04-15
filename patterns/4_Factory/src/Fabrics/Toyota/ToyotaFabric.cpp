//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "ToyotaFabric.h"
#include "../../Products/Toyota/PriusCar.h"
#include "../../Products/Toyota/CorollaCar.h"
#include "../../Products/Toyota/YarisCar.h"
#include "../../ModelExcpetion.h"

ToyotaCar* ToyotaFabric::fabricateVehicle(Specification spec) {
    if (spec.model == "PRIUS") {
        return new PriusCar(spec);
    } else if (spec.model == "COROLLA") {
        return new CorollaCar(spec);
    } else if (spec.model == "YARIS") {
        return new YarisCar(spec);
    }
    throw ModelException();
};
