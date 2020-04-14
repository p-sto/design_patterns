//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_NISSANFABRIC_H
#define DESIGN_PATTERN_NISSANFABRIC_H

#include "ICarFabric.h"
#include "NissanCar.h"

class NissanFabric: public ICarFabric {
public:
    ~NissanFabric() {};
    NissanCar* fabricateVehicle(Specification spec);
};


#endif //DESIGN_PATTERN_NISSANFABRIC_H
