//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_ERRORLOGGER_H
#define DESIGN_PATTERN_ERRORLOGGER_H

#include "../includes/ILogger.h"

class ErrorLogger: public ILogger {
public:
    ErrorLogger(int level);
};


#endif //DESIGN_PATTERN_ERRORLOGGER_H
