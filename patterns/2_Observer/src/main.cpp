//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "ComputingProcess.h"
#include "ProcessClient.h"

int main() {
    /*
     *
     */

    ComputingProcess* computing_process = new ComputingProcess(10);
    ProcessClient* client_1 = new ProcessClient("client1", computing_process);
    ProcessClient* client_2 = new ProcessClient("client2", computing_process);
    computing_process->registerObserver(client_1);
    computing_process->registerObserver(client_2);
    computing_process->execute();
    computing_process->removeObserver(client_2);
    computing_process->execute();
    delete client_1;
    delete client_2;
    delete computing_process;
    return 0;
}