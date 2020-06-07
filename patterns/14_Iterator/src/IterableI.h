//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_ITERABLEI_H
#define DESIGN_PATTERN_ITERABLEI_H

#include "IteratorI.h"

class IterableI {
public:
    virtual IteratorI* getIterator() = 0;
    virtual ~IterableI() {};
};

#endif //DESIGN_PATTERN_ITERABLEI_H
