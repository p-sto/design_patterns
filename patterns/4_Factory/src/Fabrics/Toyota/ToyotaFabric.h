//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_TOYOTAFABRIC_H
#define DESIGN_PATTERN_TOYOTAFABRIC_H

#include "../ICarFabric.h"
#include "../../Products/Toyota/ToyotaCar.h"
#include "../../Specification.h"

class ToyotaFabric: public ICarFabric {
public:
    ~ToyotaFabric() {};
    ToyotaCar* fabricateVehicle(Specification spec);
};

#endif //DESIGN_PATTERN_TOYOTAFABRIC_H
