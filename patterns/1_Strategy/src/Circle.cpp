//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "Circle.h"
#include <math.h>

Circle::Circle(double radius) {
    this->radius = radius;
}

double Circle::getArea() {
    return M_PI * pow(this->radius, 2);
}

double Circle::getCircumference() {
    return M_PI * pow(this->radius, 2);
}
