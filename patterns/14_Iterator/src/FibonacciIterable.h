//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_FIBONACCI_H
#define DESIGN_PATTERN_FIBONACCI_H

#include "IterableI.h"
#include "FibonacciIterator.h"

class FibonacciIterable: public IterableI {
public:
    FibonacciIterator* getIterator();
};


#endif //DESIGN_PATTERN_FIBONACCI_H
