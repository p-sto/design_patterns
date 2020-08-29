//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_LOGGER_H
#define DESIGN_PATTERN_LOGGER_H

#include "ILogger.h"

class Logger {
public:
    static ILogger *getLogger();
};


#endif //DESIGN_PATTERN_LOGGER_H
