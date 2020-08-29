//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <iostream>
#include "ConsoleLogger.h"

ConsoleLogger::ConsoleLogger(int level) {
    this->level = level;
    this->format = "Console: ";
}
