//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <iostream>
#include "CapriciosaRecipe.h"

std::string CapriciosaRecipe::getType() {
    return this->prepared->getType();
}

void CapriciosaRecipe::includeCheese() {
    std::cout << "Adding cheese" << std::endl;
    this->prepared->setCheese(true);
}

void CapriciosaRecipe::includeHam() {
    std::cout << "Adding ham" << std::endl;
    this->prepared->setHam(true);
}

void CapriciosaRecipe::includeMushrooms() {
    std::cout << "Adding mushrooms" << std::endl;
    this->prepared->setMushrooms(true);
}

void CapriciosaRecipe::includeOlives() {
    std::cout << "Adding olives" << std::endl;
    this->prepared->setOlives(true);
}

void CapriciosaRecipe::includeTomatoes() {
    std::cout << "Adding tomatoes" << std::endl;
    this->prepared->setTomatoes(true);
}

void CapriciosaRecipe::prepareDough() {
    std::cout << "Preparing dough" << std::endl;
}

Pizza *CapriciosaRecipe::create() {
    this->prepareDough();
    this->includeTomatoes();
    this->includeOlives();
    this->includeHam();
    this->includeMushrooms();
    this->includeCheese();
    return this->prepared;
}
