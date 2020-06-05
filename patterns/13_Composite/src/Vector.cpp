//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "Vector.h"
#include <string>
#include <iostream>

Vector::Vector(std::string section_name, int depth) {
    this->section_name = section_name;
    this->depth = depth;
}

void Vector::addElement(IModule *element) {
    this->content.push_back(element);
}

void Vector::registerMaster(Vector *master) {
    this->master = master;
}

void Vector::listModuleContent() {
    std::string cut_in = "";
    for (int i = 0; i < this->depth; i++) {
        cut_in += "  ";
    }
    std::cout << cut_in << "Values for section: " << this->section_name << std::endl;
    for (std::list<IModule*>::iterator it = this->content.begin(); it != this->content.end(); ++it) {
        (*it)->listModuleContent();
    }
}

std::string Vector::getName() {
    return this->section_name;
}


Vector::~Vector() {
    for (std::list<IModule*>::iterator it = this->content.begin(); it != this->content.end(); ++it) {
        std::cout << "Removing " << (*it)->getName() << std::endl;
        delete *it;
    }
}