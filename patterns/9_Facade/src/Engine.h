//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_ENGINE_H
#define DESIGN_PATTERN_ENGINE_H

#include "PowerControl.h"
#include "Computer.h"

class Engine {
public:
    Engine();
    bool launch();
private:
    PowerControl power_control;
    Computer computer;
};


#endif //DESIGN_PATTERN_ENGINE_H
