//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_MEDIUMENGINE_H
#define DESIGN_PATTERN_MEDIUMENGINE_H

#include "Engine.h"

class MediumEngine: public Engine {
public:
    int getHorsePower(){ return 100; };
    float getLiters(){ return 1.6; };
};

#endif //DESIGN_PATTERN_MEDIUMENGINE_H
