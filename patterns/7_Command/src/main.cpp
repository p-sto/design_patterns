//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "Invokers/ACButton.h"
#include "MainComputer.h"
#include "Invokers/iButton.h"

int main() {

    MainComputer* main_computer = new MainComputer();

    iButton* button;
    button = new ACButton(main_computer);
    button->press();

    delete button;
    delete main_computer;
    return 0;
}