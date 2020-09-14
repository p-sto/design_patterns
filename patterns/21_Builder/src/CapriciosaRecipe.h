//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_CAPRICIOSARECIPE_H
#define DESIGN_PATTERN_CAPRICIOSARECIPE_H

#include <string>
#include "IPizzaBuilder.h"
#include "Pizza.h"

class CapriciosaRecipe: public IPizzaBuilder {
public:
    void prepareDough();
    void includeCheese();
    void includeMushrooms();
    void includeHam();
    void includeTomatoes();
    void includeOlives();
    Pizza *create();
    std::string getType();
private:
    Pizza *prepared = new Pizza("Capriciosa");
};


#endif //DESIGN_PATTERN_CAPRICIOSARECIPE_H
