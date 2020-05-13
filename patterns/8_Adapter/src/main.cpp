//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "HDMIMonitorClient.h"
#include "HDMItoDVI.h"
#include "DVIComputer.h"

int main() {

    DVIComputer* dvi_computer = new DVIComputer();
    HDMItoDVI* adapter = new HDMItoDVI(dvi_computer);
    HDMIMonitorClient* monitor = new HDMIMonitorClient(adapter);
    monitor->sendData("Hello World!");

    delete monitor;
    delete adapter;
    delete dvi_computer;

    return 0;
}