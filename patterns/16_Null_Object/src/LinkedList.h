//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_LINKEDLIST_H
#define DESIGN_PATTERN_LINKEDLIST_H

#include "ListElement.h"
#include <string>

class IListElement;

class LinkedList {
public:
    LinkedList();
    ~LinkedList();
    void append(int element);
    void printContent();
private:
    IListElement *head;
};


#endif //DESIGN_PATTERN_LINKEDLIST_H
