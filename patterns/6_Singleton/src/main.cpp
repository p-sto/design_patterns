//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <iostream>
#include "ConfigFile.h"

int main(){

    ConfigFile* cfg_setup = ConfigFile::get();

    std::cout << "Value from config is " << cfg_setup->value << std::endl;

    cfg_setup = ConfigFile::get();
    std::cout << "Value from config is " << cfg_setup->value << std::endl;

    delete cfg_setup;

    return 0;
}