//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_CONSOLELOGGER_H
#define DESIGN_PATTERN_CONSOLELOGGER_H

#include "../includes/ILogger.h"

class ConsoleLogger: public ILogger {
public:
    ConsoleLogger(int level);
};


#endif //DESIGN_PATTERN_CONSOLELOGGER_H
