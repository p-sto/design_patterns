//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_CLONABLE_H
#define DESIGN_PATTERN_CLONABLE_H

class Clonable {
public:
    Clonable* clone();
    virtual ~Clonable() {};
};
#endif //DESIGN_PATTERN_CLONABLE_H
