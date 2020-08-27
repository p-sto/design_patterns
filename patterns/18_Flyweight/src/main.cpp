//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "include/FreeList.h"
#include "include/IListObject.h"
#include "include/ObjectSpecification.h"
#include <iostream>

int main() {

    FreeList *free_list = new FreeList(5);
    IListObject *obj = free_list->getNew();

    std::cout << obj->ref_count << std::endl;
    delete obj;
    return 0;
}