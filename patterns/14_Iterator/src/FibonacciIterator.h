//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_FIBONACCIITERATOR_H
#define DESIGN_PATTERN_FIBONACCIITERATOR_H

#include "IteratorI.h"

class FibonacciIterator: public IteratorI {
public:
    FibonacciIterator(unsigned int previous, unsigned int current);
    bool hasNext();
    void Next();
    unsigned int getCurrentValue();
private:
    unsigned int previous_val;
    unsigned int current_val;
};


#endif //DESIGN_PATTERN_FIBONACCIITERATOR_H
