//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_ICOMMAND_H
#define DESIGN_PATTERN_ICOMMAND_H

#include <iostream>

class iCommand {
public:
    virtual void execute() = 0;
    virtual ~iCommand() {};
    std::string name;
};

#endif //DESIGN_PATTERN_ICOMMAND_H
