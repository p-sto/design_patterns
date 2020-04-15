//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_IMOTORSYSTEM_H
#define DESIGN_PATTERN_IMOTORSYSTEM_H

#include "../Products/Engine.h"
#include "../Products/Transmission.h"

class IMotorSystem {
public:
    virtual ~IMotorSystem(){};
    virtual Engine* getEngine() = 0;
    virtual Transmission* getTransmission() = 0;
};

#endif //DESIGN_PATTERN_IMOTORSYSTEM_H
