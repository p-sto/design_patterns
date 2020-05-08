//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_ACBUTTON_H
#define DESIGN_PATTERN_ACBUTTON_H

#include "iButton.h"
#include "../Commands/iCommand.h"
#include "../Commands/ACCommand.h"
#include "../MainComputer.h"

class ACButton: public iButton {
public:
    ACButton(MainComputer* main_computer);
    void press();
    ~ACButton();
private:
    iCommand* command;
    MainComputer* main_computer;
};


#endif //DESIGN_PATTERN_ACBUTTON_H
