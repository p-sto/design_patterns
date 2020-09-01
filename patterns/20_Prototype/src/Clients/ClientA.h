//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_CLIENTA_H
#define DESIGN_PATTERN_CLIENTA_H

#include <string>
#include "Client.h"

class ClientA: public Client {
public:
    using Client::Client;
    Client *clone();
private:
    std::string type = "ClientA";
};


#endif //DESIGN_PATTERN_CLIENTA_H
