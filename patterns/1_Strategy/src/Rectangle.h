//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "IShape.h"
#include <string>

#ifndef DESIGN_PATTERN_RECTANGLE_H
#define DESIGN_PATTERN_RECTANGLE_H


class Rectangle: public IShape {
public:
    Rectangle(double height, double width);
    virtual ~Rectangle(){};
    double getArea();
    double getCircumference();
    std::string name = "Rectangle";
private:
    double height;
    double width;
};


#endif //DESIGN_PATTERN_RECTANGLE_H
