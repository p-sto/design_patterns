//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_CLIENTB_H
#define DESIGN_PATTERN_CLIENTB_H

#include <string>
#include "Client.h"

class ClientB: public Client {
public:
    using Client::Client;
    Client *clone();
private:
    std::string type = "ClientB";
};


#endif //DESIGN_PATTERN_CLIENTB_H
