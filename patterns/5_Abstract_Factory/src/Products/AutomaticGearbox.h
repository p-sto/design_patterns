//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_AUTOMATICGEARBOX_H
#define DESIGN_PATTERN_AUTOMATICGEARBOX_H

#include "Transmission.h"

class AutomaticGearbox: public Transmission {
public:
    int getGearsNumber() {return 7;};
    bool is_automatic() {return true;};
};

#endif //DESIGN_PATTERN_AUTOMATICGEARBOX_H
