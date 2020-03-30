//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_PROCESSCLIENT_H
#define DESIGN_PATTERN_PROCESSCLIENT_H
#include "IProcessClient.h"
#include "ComputingProcess.h"
#include "string"

class ProcessClient: public IProcessClient {
public:
    ProcessClient(std::string name, ComputingProcess* observed_process);
    std::string name;
    virtual ~ProcessClient(){};
private:
    void update();
    ComputingProcess* observed_process;
    bool is_finished;
    friend class ComputingProcess;
};


#endif //DESIGN_PATTERN_PROCESSCLIENT_H
