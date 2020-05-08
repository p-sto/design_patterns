//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "ACButton.h"
#include "../Commands/ACCommand.h"
#include "../MainComputer.h"

ACButton::ACButton(MainComputer *main_computer){
    this->main_computer = main_computer;
    this->command = new ACCommand(this->main_computer);
}

ACButton::~ACButton(){
    delete this->command;
}

void ACButton::press() {
    this->command->execute();
}
