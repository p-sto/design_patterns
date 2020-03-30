//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "iostream"
#include "Circle.h"
#include "Rectangle.h"
#include "ShapesBox.h"

void main() {
    /* We have an object named ShapesBox which take list of pointers to objects which implements IShape interface,
     * As interface provides method .getArea(), we can return total area of provided
     *
     * */
    Circle* circle_obj = new Circle(10.0);
    Rectangle* rectangle_obj = new Rectangle(5.0, 7.5);

    std::list<IShape*> list_of_shapes;
    list_of_shapes.push_back(circle_obj);
    list_of_shapes.push_back(rectangle_obj);

    std::cout << "Objects's circumference is:" << circle_obj->getCircumference() << std::endl;
    std::cout << "Object's area is:" << circle_obj->getArea() << std::endl;

    std::cout << "Objects's circumference is:" << rectangle_obj->getCircumference() << std::endl;
    std::cout << "Object's area is:" << rectangle_obj->getArea() << std::endl;

    ShapesBox* shapes_box_object = new ShapesBox(list_of_shapes);
    std::cout << "Total area of shapes is: " << shapes_box_object->getShapesTotalArea() << std::endl;

    delete circle_obj;
    delete rectangle_obj;
    delete shapes_box_object;
}