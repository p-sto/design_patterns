//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "FibonacciIterator.h"
#include "FibonacciIterable.h"

#include <iostream>

int main() {

    int max = 0;
    FibonacciIterator *fib_iter = FibonacciIterable().getIterator();
    while (fib_iter->hasNext()) {
        std::cout << "Current value is: " << fib_iter->getCurrentValue() << std::endl;
        fib_iter->Next();
        max += 1;
        if (max == 10)
            break;
    }
    return 0;
}