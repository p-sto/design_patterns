//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_FREELIST_H
#define DESIGN_PATTERN_FREELIST_H

#include <vector>
#include "IListObject.h"
#include "ObjectSpecification.h"

class FreeList {
public:
    FreeList(int size);
    IListObject* getNew();
private:
    std::vector<IListObject*> elements;
    void maintainFreeList();
    int count = 0;
};


#endif //DESIGN_PATTERN_FREELIST_H
