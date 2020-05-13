//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "HDMIMonitorClient.h"
#include "IDHMI.h"

#include <string>

HDMIMonitorClient::HDMIMonitorClient(IHDMI* hdmi_device) {
    this->hdmi_device = hdmi_device;
}

bool HDMIMonitorClient::sendData(std::string data_to_send) {
    this->hdmi_device->sendHDMIData(data_to_send);
    return true;
}