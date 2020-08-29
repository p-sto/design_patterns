//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "includes/ILogger.h"
#include "includes/Logger.h"

int main() {

    ILogger *logger = Logger::getLogger();
    logger->logMessage("Some debug message", logger->DEBUG);
    logger->logMessage("Some error message", logger->ERROR);

    delete logger;
    return 0;
}