//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_TRANSMISSION_H
#define DESIGN_PATTERN_TRANSMISSION_H

class Transmission {
public:
    virtual int getGearsNumber() = 0;
    virtual bool is_automatic() = 0;
    virtual ~Transmission() {};
};

#endif //DESIGN_PATTERN_TRANSMISSION_H
