//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_BIGMOTORSYSTEM_H
#define DESIGN_PATTERN_BIGMOTORSYSTEM_H


#include "IMotorSystem.h"
#include "../Products/Engine.h"
#include "../Products/Transmission.h"
#include "../Products/BigEngine.h"

class BigMotorSystem: public IMotorSystem {
public:
    BigMotorSystem(bool automatic_gearbox);
    ~BigMotorSystem();
    Engine* getEngine();
    Transmission* getTransmission();
private:
    BigEngine* _engine = new BigEngine();
    Transmission* _transmission;
};

#endif //DESIGN_PATTERN_BIGMOTORSYSTEM_H
