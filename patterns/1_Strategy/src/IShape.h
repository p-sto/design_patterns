//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <string>

#ifndef STRATEGY_DESIGN_PATTERN_ISHAPE_H
#define STRATEGY_DESIGN_PATTERN_ISHAPE_H

class IShape{
public:
    virtual double getCircumference() = 0;
    virtual double getArea() = 0;
    std::string name;
};

#endif // DESIGN_PATTERN_ISHAPE_H
