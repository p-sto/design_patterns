//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_SCALAR_H
#define DESIGN_PATTERN_SCALAR_H

#include "Vector.h"
#include "IModule.h"
#include <string>

class Scalar: public IModule {
public:
    Scalar(std::string name, int value, Vector *master);
    std::string getName();
    void listModuleContent();
    Vector *master;
private:
    std::string name;
    int value;
};


#endif //DESIGN_PATTERN_SCALAR_H
