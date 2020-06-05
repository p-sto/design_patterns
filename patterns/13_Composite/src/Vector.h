//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_VECTOR_H
#define DESIGN_PATTERN_VECTOR_H

#include "IModule.h"
#include <list>
#include <string>

class Vector: public IModule {
public:
    Vector(std::string section_name, int depth);
    std::string getName();
    void listModuleContent();
    void registerMaster(Vector *master);
    void addElement(IModule* element);
    ~Vector();
    std::string section_name;
    Vector *master;
    int depth;
private:
    std::list<IModule*> content;
};


#endif //DESIGN_PATTERN_VECTOR_H
