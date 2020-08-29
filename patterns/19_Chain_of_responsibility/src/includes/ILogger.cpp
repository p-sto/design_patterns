//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <iostream>
#include "ILogger.h"

void ILogger::setNextLogger(ILogger *logger) {
    this->next_logger = logger;
}

ILogger* ILogger::getNextLogger() {
    return this->next_logger;
}

void ILogger::logMessage(std::string message, int level) {
    if (this->level <= level) {
        this->write(message);
    }
    if (this->next_logger != nullptr) {
        this->next_logger->logMessage(message, level);
    }
}

void ILogger::write(std::string message) {
    std::cout << this->format << message << std::endl;
}

ILogger::~ILogger() {
    std::cout << "Deleting logger of level" << this->level << std::endl;
    delete this->next_logger;
}