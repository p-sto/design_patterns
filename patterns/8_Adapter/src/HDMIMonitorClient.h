//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_HDMIMONITORCLIENT_H
#define DESIGN_PATTERN_HDMIMONITORCLIENT_H

#include "IDHMI.h"

#include <string>

class HDMIMonitorClient  {
public:
    HDMIMonitorClient(IHDMI* hdmi_device);
    bool sendData(std::string data_to_send);
    ~HDMIMonitorClient(){};
private:
    IHDMI* hdmi_device;
};


#endif //DESIGN_PATTERN_HDMIMONITORCLIENT_H
