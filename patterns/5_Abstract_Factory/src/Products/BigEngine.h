//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_BIGENGINE_H
#define DESIGN_PATTERN_BIGENGINE_H

#include "Engine.h"

class BigEngine: public Engine {
public:
    int getHorsePower(){ return 160; };
    float getLiters(){ return 2.0; };
};

#endif //DESIGN_PATTERN_BIGENGINE_H
