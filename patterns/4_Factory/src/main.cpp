//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "ToyotaFabric.h"
#include "NissanFabric.h"
#include "IVehicle.h"
#include "Specification.h"
#include "CarModels.h"

int main() {
    ToyotaFabric* toyota_fabric = new ToyotaFabric();
    NissanFabric* nissan_fabric = new NissanFabric();

    Specification new_toyota_spec = Specification{COROLLA, "blue", "luna"};
    Specification new_nissan_spec = Specification{JUKE, "brown", "Tekna"};

    IVehicle* toyota_car = toyota_fabric->fabricateVehicle(new_toyota_spec);
    IVehicle* nissan_car = nissan_fabric->fabricateVehicle(new_nissan_spec);

    toyota_car->drive();
    nissan_car->drive();

    delete nissan_car;
    delete toyota_car;
    delete nissan_fabric;
    delete toyota_fabric;
    return 0;
}