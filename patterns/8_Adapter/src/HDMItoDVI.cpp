//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "HDMItoDVI.h"

HDMItoDVI::HDMItoDVI(DVIComputer* dvi_computer) {
    this->dvi_computer = dvi_computer;
}

bool HDMItoDVI::sendHDMIData(std::string data_to_send) {
    return this->dvi_computer->receiveDVIData(data_to_send);
}

bool HDMItoDVI::receiveHDMIData(std::string data_received) {
    return this->dvi_computer->sendDVIData(data_received);
}