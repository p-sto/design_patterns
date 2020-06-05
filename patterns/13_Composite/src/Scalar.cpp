//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <iostream>
#include <string>
#include "Vector.h"
#include "Scalar.h"

Scalar::Scalar(std::string name, int value, Vector *master) {
    this->name = name;
    this->value = value;
    this->master = master;
}


std::string Scalar::getName() {
    return this->name;
}


void Scalar::listModuleContent() {
    std::string cut_in = "";
    for (int i = 0; i < this->master->depth + 1; i++) {
        cut_in += "  ";
    }
    std::cout<< cut_in << "Value for " << this->name << " is " << this->value << std::endl;
}
