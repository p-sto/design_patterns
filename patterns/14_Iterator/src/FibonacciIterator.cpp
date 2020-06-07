//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "FibonacciIterator.h"

FibonacciIterator::FibonacciIterator(unsigned int previous, unsigned int current) {
    this->previous_val = previous;
    this->current_val = current;
}

bool FibonacciIterator::hasNext() {
    return true;
}

void FibonacciIterator::Next() {
    unsigned int helper = this->previous_val;
    this->previous_val = this->current_val;
    this->current_val = this->current_val + helper;
}

unsigned int FibonacciIterator::getCurrentValue() {
    return this->current_val;
}