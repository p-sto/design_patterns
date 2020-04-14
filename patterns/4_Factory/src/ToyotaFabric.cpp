//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "ToyotaFabric.h"
#include "ToyotaCar.h"
#include "ModelExcpetion.h"

ToyotaCar* ToyotaFabric::fabricateVehicle(Specification spec) {
    /* of course spec should be a custom class but I'm a bit lazy...
     *
     * Actually it would be better if ToyotaCar was an abstract class and all models would be
     * represented by dedicated classes. Then usage of fabric pattern would be better illustrated here.
     *
    */
    if (spec.model == PRIUS || spec.model == YARIS || spec.model == COROLLA || spec.model == CAMRY) {
        return new ToyotaCar(spec);
    }
    throw ModelException();
};
