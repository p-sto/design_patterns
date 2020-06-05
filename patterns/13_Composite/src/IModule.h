//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_IMODULE_H
#define DESIGN_PATTERN_IMODULE_H

#include <string>

class IModule {
public:
    virtual void listModuleContent() = 0;
    virtual std::string getName() = 0;
    virtual ~IModule() {};
};

#endif //DESIGN_PATTERN_IMODULE_H
