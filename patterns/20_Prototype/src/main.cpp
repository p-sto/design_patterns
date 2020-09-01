//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <iostream>

#include "Clients/Client.h"
#include "Clients/ClientA.h"
#include "Clients/ClientB.h"

int main() {

    Client *client = new ClientA("Some name", 10);
    Client *cloned = client->clone();

    std::cout << client->getName() << std::endl;
    std::cout << cloned->getName() << std::endl;

    delete client;
    delete cloned;

    client = new ClientB("Other name", 12);
    cloned = client->clone();

    std::cout << client->getName() << std::endl;
    std::cout << cloned->getName() << std::endl;

    delete client;
    delete cloned;

    return 0;
}