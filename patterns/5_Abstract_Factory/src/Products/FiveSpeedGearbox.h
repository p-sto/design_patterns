//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_FIVESPEEDGEARBOX_H
#define DESIGN_PATTERN_FIVESPEEDGEARBOX_H

#include "Transmission.h"

class FiveSpeedGearbox: public Transmission {
public:
    int getGearsNumber() {return 5;};
    bool is_automatic() {return false;};
};

#endif //DESIGN_PATTERN_FIVESPEEDGEARBOX_H
