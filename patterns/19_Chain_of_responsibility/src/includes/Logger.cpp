//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "Logger.h"
#include "../classes/ConsoleLogger.h"
#include "../classes/ErrorLogger.h"

ILogger* Logger::getLogger() {
    ILogger *console_logger = new ConsoleLogger(0);
    ILogger *error_logger = new ErrorLogger(40);
    console_logger->setNextLogger(error_logger);
    return console_logger;
}