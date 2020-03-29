//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "IShape.h"
#include <string>

#ifndef DESIGN_PATTERN_CIRCLE_H
#define DESIGN_PATTERN_CIRCLE_H

class Circle: public IShape {
public:
    Circle(double radius);
    virtual ~Circle(){};
    double getCircumference();
    double getArea();
    std::string name = "Circle";
private:
    double radius;
};


#endif //DESIGN_PATTERN_CIRCLE_H
