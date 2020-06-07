//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "FibonacciIterable.h"

FibonacciIterator* FibonacciIterable::getIterator() {
    return new FibonacciIterator(0, 1);
}