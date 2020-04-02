//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_IOFFER_H
#define DESIGN_PATTERN_IOFFER_H

#include <list>

class IOffer {
public:
    virtual ~IOffer(){};
    virtual float getPrice() = 0;
};

#endif //DESIGN_PATTERN_IOFFER_H
