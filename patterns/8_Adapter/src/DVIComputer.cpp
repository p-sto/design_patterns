//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "DVIComputer.h"
#include <string>

bool DVIComputer::sendDVIData(std::string data_to_send) {
    std::cout << "DVI PC sending data " << data_to_send << std::endl;
    return true;
}

bool DVIComputer::receiveDVIData(std::string data_received){
    std::cout << "DVI PC received data " << data_received << std::endl;
    return true;
}
