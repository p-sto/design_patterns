//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_DVICOMPUTER_H
#define DESIGN_PATTERN_DVICOMPUTER_H

#include "IDVI.h"
#include <iostream>
#include <string>

class DVIComputer: public IDVI {
public:
    bool sendDVIData(std::string data_to_send);
    bool receiveDVIData(std::string data_received);
    ~DVIComputer(){};
};


#endif //DESIGN_PATTERN_DVICOMPUTER_H
