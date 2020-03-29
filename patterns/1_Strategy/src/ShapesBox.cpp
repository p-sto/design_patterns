//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "ShapesBox.h"
#include "IShape.h"
#include <list>

ShapesBox::ShapesBox(std::list<IShape*> list_of_shapes) {
    this->list_of_shapes = list_of_shapes;
    for(std::list<IShape*>::iterator it=this->list_of_shapes.begin(); it != this->list_of_shapes.end(); ++it){
        this->totalArea += (*it)->getArea();
    }
}

double ShapesBox::getShapesTotalArea() {
    return this->totalArea;
}
