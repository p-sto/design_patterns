//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_PIZZA_H
#define DESIGN_PATTERN_PIZZA_H

#include <string>

class Pizza {
public:
    Pizza(std::string type);
    void setCheese(bool val);
    void setHam(bool val);
    void setOlives(bool val);
    void setTomatoes(bool val);
    void setMushrooms(bool val);
    std::string getType();
private:
    std::string type;
    bool hasCheese = false;
    bool hasHam = false;
    bool hasOlives = false;
    bool hasTomatoes = false;
    bool hasMushrooms = false;
};


#endif //DESIGN_PATTERN_PIZZA_H
