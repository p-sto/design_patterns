//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_IVEHICLE_H
#define DESIGN_PATTERN_IVEHICLE_H

#include "Specification.h"

class IVehicle {
public:
    virtual ~IVehicle(){};
    virtual Specification getSpec() = 0;
    virtual bool drive() = 0;   // whatever drive would do...
};

#endif //DESIGN_PATTERN_IVEHICLE_H
