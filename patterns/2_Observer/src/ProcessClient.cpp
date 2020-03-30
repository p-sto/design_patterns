//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "ProcessClient.h"
#include <iostream>

ProcessClient::ProcessClient(std::string name, ComputingProcess* observed_process) {
    this->name = name;
    this->observed_process = observed_process;
    this->is_finished = false;
}

void ProcessClient::update() {
    if(this->observed_process){
        if (this->observed_process->has_finished) {
            this->is_finished = true;
            std::cout << "Client registered status finished" << std::endl;
        }
    }
}