//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_IPIZZABUILDER_H
#define DESIGN_PATTERN_IPIZZABUILDER_H

#include "Pizza.h"
#include <string>

class IPizzaBuilder {
public:
    virtual void prepareDough() = 0;
    virtual void includeCheese() = 0;
    virtual void includeMushrooms() = 0;
    virtual void includeHam() = 0;
    virtual void includeTomatoes() = 0;
    virtual void includeOlives() = 0;
    virtual Pizza *create() = 0;
    virtual std::string getType() = 0;
    virtual ~IPizzaBuilder() {};
};


#endif //DESIGN_PATTERN_IPIZZABUILDER_H
