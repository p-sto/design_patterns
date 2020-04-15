//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <stdlib.h>
#include <time.h>
#include "ConfigFile.h"


ConfigFile::ConfigFile() {
    this->getDataFromFile();
}

ConfigFile* ConfigFile::get() {
    static ConfigFile* instance;    // it's has to be declared here actually
    if (instance == nullptr)
        instance = new ConfigFile();
    return instance;
}

void ConfigFile::getDataFromFile() {
    // just some fake method pretending that it's reading from file and setting some variables
    srand (time(NULL));
    this->param1 = true;
    this->param2 = false;
    this->value = rand() % 10 + 1;
}
