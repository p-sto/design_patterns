//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_SMALLMOTORSYSTEM_H
#define DESIGN_PATTERN_SMALLMOTORSYSTEM_H

#include "IMotorSystem.h"
#include "../Products/Engine.h"
#include "../Products/Transmission.h"
#include "../Products/SmallEngine.h"
#include "../Products/FiveSpeedGearbox.h"

class SmallMotorSystem: public IMotorSystem {
public:
    ~SmallMotorSystem();
    Engine* getEngine();
    Transmission* getTransmission();
private:
    SmallEngine* _engine = new SmallEngine();
    FiveSpeedGearbox* _transmission = new FiveSpeedGearbox();
};

#endif //DESIGN_PATTERN_SMALLMOTORSYSTEM_H
