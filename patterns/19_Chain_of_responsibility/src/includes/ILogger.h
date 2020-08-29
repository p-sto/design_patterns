//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_ILOGGER_H
#define DESIGN_PATTERN_ILOGGER_H

#include <string>

class ILogger {
public:
    void setNextLogger(ILogger* logger);
    ILogger* getNextLogger();
    void logMessage(std::string message, int level);
    int DEBUG = 10;
    int INFO = 20;
    int WARNING = 30;
    int ERROR = 40;
    ~ILogger();
protected:
    int level = 0;
    std::string format = "Logger: ";
    void write(std::string message);
    ILogger* next_logger = nullptr;
};

#endif //DESIGN_PATTERN_ILOGGER_H
