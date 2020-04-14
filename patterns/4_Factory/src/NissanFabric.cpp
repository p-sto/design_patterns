//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "NissanFabric.h"
#include "NissanCar.h"
#include "ModelExcpetion.h"

NissanCar* NissanFabric::fabricateVehicle(Specification spec) {
    if (spec.model == JUKE || spec.model == _350Z || spec.model == GT_R || spec.model == LEAF) {
        return new NissanCar(spec);
    }
    throw ModelException();
};