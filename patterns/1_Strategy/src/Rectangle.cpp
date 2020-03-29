//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "Rectangle.h"

Rectangle::Rectangle(double height, double width) {
    this->height = height;
    this->width = width;
}

double Rectangle::getArea() {
    return this->height * this->width;
}

double Rectangle::getCircumference() {
    return 2*this->height + 2*this->height;
}
