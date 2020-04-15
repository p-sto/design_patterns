//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_SMALLENGINE_H
#define DESIGN_PATTERN_SMALLENGINE_H

#include "Engine.h"

class SmallEngine: public Engine {
public:
    int getHorsePower(){ return 75; };
    float getLiters(){ return 1.2; }
};

#endif //DESIGN_PATTERN_SMALLENGINE_H
