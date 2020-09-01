//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "Client.h"
#include "ClientA.h"

Client* ClientA::clone() {
    return new ClientA(*this);
}