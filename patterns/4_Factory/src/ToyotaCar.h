//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_TOYOTACAR_H
#define DESIGN_PATTERN_TOYOTACAR_H

#include "IVehicle.h"
#include "Specification.h"

class ToyotaCar: public IVehicle {
public:
    ToyotaCar(Specification spec);
    ~ToyotaCar() {};
    Specification getSpec();
    bool drive();
private:
    Specification spec;
};


#endif //DESIGN_PATTERN_TOYOTACAR_H
