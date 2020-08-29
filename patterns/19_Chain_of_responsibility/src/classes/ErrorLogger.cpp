//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "ErrorLogger.h"

ErrorLogger::ErrorLogger(int level) {
    this->level = level;
    this->format = "[ERROR]: ";
}
