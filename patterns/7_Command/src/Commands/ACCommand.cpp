//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "../MainComputer.h"
#include "ACCommand.h"
#include <iostream>

ACCommand::ACCommand(MainComputer* main_computer){
    this->main_computer = main_computer;
}

void ACCommand::execute() {
    this->main_computer->registerCommand(this->name);
}
