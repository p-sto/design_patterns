//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_SIXSPEEDGEARBOX_H
#define DESIGN_PATTERN_SIXSPEEDGEARBOX_H

#include "Transmission.h"

class SixSpeedGearbox: public Transmission {
public:
    int getGearsNumber() {return 6;};
    bool is_automatic() {return false;};
};

#endif //DESIGN_PATTERN_SIXSPEEDGEARBOX_H
