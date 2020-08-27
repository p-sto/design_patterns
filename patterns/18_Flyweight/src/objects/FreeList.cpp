//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <iostream>
#include <vector>
#include "../include/FreeList.h"
#include "../include/IListObject.h"
#include "../include/exceptions.h"

FreeList::FreeList(int size) {
    for (int i = 0; i <= size; i++) {
        this->elements.push_back(new IListObject());
    }
}

IListObject* FreeList::getNew() {
    IListObject* tmp = nullptr;
    for (unsigned int i = 0; i <= this->elements.size(); i++) {
        if (this->elements[i]->ref_count == 0) {
            this->count += 1;
            tmp = elements[i];
            tmp->ref_count = 1;
            break;
        }
    }
    if (tmp == nullptr) {
        throw AllocationException();
    }
    return tmp;
}