//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_IDHMI_H
#define DESIGN_PATTERN_IDHMI_H

#include <iostream>
#include <string>

class IHDMI {
public:
    virtual bool sendHDMIData(std::string data_to_send) = 0;
    virtual bool receiveHDMIData(std::string data_received) = 0;
    virtual ~IHDMI(){};
};

#endif //DESIGN_PATTERN_IDHMI_H
