//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "ComputingProcess.h"
#include <thread>
#include <chrono>
#include <iostream>

ComputingProcess::ComputingProcess(int simulations_count) {
    this->simulations_count = simulations_count;
    this->has_finished = false;
}

void ComputingProcess::execute() {
    this->has_finished = false;
    std::cout << "Starting execution" << std::endl;
    for (int i = 0; i <= this->simulations_count; i++) {
        // just wait some time, let's mode simulation behaviour
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    this->has_finished = true;
    std::cout << "Execution has finished" << std::endl;
    this->notify();
}

void ComputingProcess::registerObserver(IProcessClient* client) {
    this->list_of_process_clients.push_back(client);
}

void ComputingProcess::removeObserver(IProcessClient* client) {
    this->list_of_process_clients.remove(client);
}

void ComputingProcess::notify() {
    std::cout << "Notifying " <<  this->list_of_process_clients.size() << " clients" << std::endl;
    for(std::list<IProcessClient*>::iterator it = this->list_of_process_clients.begin(); it != this->list_of_process_clients.end(); ++it){
        (*it)->update();
    };
}