//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "Gate.h"

int main() {

    Gate *gate = new Gate();
    gate->enter();
    gate->enter();
    gate->payFailed();
    gate->payOk();
    gate->pay();
    gate->payOk();
    gate->enter();

    delete gate;
    return 0;
}