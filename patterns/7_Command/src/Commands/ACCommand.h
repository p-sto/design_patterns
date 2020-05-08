//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_ACCOMMAND_H
#define DESIGN_PATTERN_ACCOMMAND_H

#include <iostream>
#include "iCommand.h"
#include "../MainComputer.h"

class ACCommand: public iCommand {
public:
    ACCommand(MainComputer *main_computer);
    ~ACCommand() {};
    void execute();
    std::string name = "AC Command";
private:
    MainComputer* main_computer;
};


#endif //DESIGN_PATTERN_ACCOMMAND_H
