//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_COMPUTINGPROCESS_H
#define DESIGN_PATTERN_COMPUTINGPROCESS_H

#include "IComputingProcess.h"
#include "IProcessClient.h"
#include <list>

class ComputingProcess: public IComputingProcess {
public:
    ComputingProcess(int simulations_count);
    virtual ~ComputingProcess(){};
    void registerObserver(IProcessClient *client);
    void removeObserver(IProcessClient *client);
    void notify();
    // below some methods related to some fake "business" logic
    void execute();
private:
    int simulations_count;
    bool has_finished;
    std::list<IProcessClient*> list_of_process_clients;
    friend class ProcessClient; // so now ProcessClient can access `has_finished` property
};


#endif //DESIGN_PATTERN_COMPUTINGPROCESS_H
