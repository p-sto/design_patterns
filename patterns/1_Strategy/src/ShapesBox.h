//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "IShape.h"
#include <list>

#ifndef DESIGN_PATTERN_SHAPESBOX_H
#define DESIGN_PATTERN_SHAPESBOX_H


class ShapesBox {
public:
    ShapesBox(std::list<IShape*> list_of_shapes);
    double getShapesTotalArea();
private:
    std::list<IShape*> list_of_shapes;
    double totalArea = 0;
};

#endif //DESIGN_PATTERN_SHAPESBOX_H
