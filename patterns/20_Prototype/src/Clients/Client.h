//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_CLIENT_H
#define DESIGN_PATTERN_CLIENT_H

#include <string>
#include "../Clonable.h"

class Client: public Clonable {
public:
    Client(std::string name, int value);
    std::string getName();
    std::string getType();
    int getValue();
    virtual Client *clone() = 0;
private:
    std::string name;
    int value;
    std::string type = "";
};


#endif //DESIGN_PATTERN_CLIENT_H
