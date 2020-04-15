//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_ENGINE_H
#define DESIGN_PATTERN_ENGINE_H

class Engine {
public:
    virtual ~Engine(){};
    virtual int getHorsePower() = 0;
    virtual float getLiters() = 0;
};

#endif //DESIGN_PATTERN_ENGINE_H
