//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <string>
#include "Asset.h"

Asset::Asset(std::string name, int value) {
    this->name = name;
    this->value = value;
}

std::string Asset::getName() {
    return this->name;
}

int Asset::getValue() {
    return this->value;
}
