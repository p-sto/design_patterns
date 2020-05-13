//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_IDVI_H
#define DESIGN_PATTERN_IDVI_H

#include <iostream>
#include <string>

class IDVI {
public:
    virtual bool sendDVIData(std::string data_to_send) = 0;
    virtual bool receiveDVIData(std::string data_received) = 0;
    virtual ~IDVI(){};
};

#endif //DESIGN_PATTERN_IDVI_H
