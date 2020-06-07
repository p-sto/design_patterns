//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_ITERATORI_H
#define DESIGN_PATTERN_ITERATORI_H

class IteratorI {
public:
    virtual bool hasNext() = 0;
    virtual void Next() = 0;
    virtual ~IteratorI() {};
};


#endif //DESIGN_PATTERN_ITERATORI_H
