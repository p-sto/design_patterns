//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_ICARFABRIC_H
#define DESIGN_PATTERN_ICARFABRIC_H

#include "Specification.h"
#include "IVehicle.h"

class ICarFabric {
public:
    virtual ~ICarFabric(){};
    virtual IVehicle* fabricateVehicle(Specification spec) = 0;
};

#endif //DESIGN_PATTERN_ICARFABRIC_H
