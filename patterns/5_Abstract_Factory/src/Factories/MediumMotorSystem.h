//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_MEDIUMMOTORSYSTEM_H
#define DESIGN_PATTERN_MEDIUMMOTORSYSTEM_H


#include "IMotorSystem.h"
#include "../Products/Engine.h"
#include "../Products/Transmission.h"
#include "../Products/MediumEngine.h"
#include "../Products/SixSPeedGearbox.h"

class MediumMotorSystem: public IMotorSystem {
public:
    ~MediumMotorSystem();
    Engine* getEngine();
    Transmission* getTransmission();
private:
    MediumEngine* _engine = new MediumEngine();
    SixSpeedGearbox* _transmission = new SixSpeedGearbox();
};


#endif //DESIGN_PATTERN_MEDIUMMOTORSYSTEM_H
