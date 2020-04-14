//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_NISSANCAR_H
#define DESIGN_PATTERN_NISSANCAR_H

#include "IVehicle.h"
#include "Specification.h"

class NissanCar: public IVehicle {
public:
    NissanCar(Specification spec);
    ~NissanCar() {};
    Specification getSpec();
    bool drive();
private:
    Specification spec;
};


#endif //DESIGN_PATTERN_NISSANCAR_H
