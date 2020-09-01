//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <string>
#include "Client.h"

Client::Client(std::string name, int value) {
    this->name = name;
    this->value = value;
}

int Client::getValue() {
    return this->value;
}

std::string Client::getName() {
    return this->name;
}

std::string Client::getType() {
    return this->type;
}