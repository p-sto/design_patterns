//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "Client.h"
#include "ClientB.h"

Client* ClientB::clone() {
    return new ClientB(*this);
}