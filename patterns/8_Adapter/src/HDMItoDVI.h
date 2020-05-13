//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_HDMITODVI_H
#define DESIGN_PATTERN_HDMITODVI_H

#include "IDHMI.h"
#include "DVIComputer.h"

class HDMItoDVI: public IHDMI {
public:
    HDMItoDVI(DVIComputer* dvi_computer);
    bool sendHDMIData(std::string data_to_send);
    bool receiveHDMIData(std::string data_received);
    ~HDMItoDVI(){};
private:
    DVIComputer* dvi_computer;

};


#endif //DESIGN_PATTERN_HDMITODVI_H
