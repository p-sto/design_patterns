//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_SENTINELNODE_H
#define DESIGN_PATTERN_SENTINELNODE_H

#include "ListElement.h"

class SentinelNode: public IListElement {
public:
    bool isFinal();
    IListElement *next = NULL;
    IListElement *previous;
    void setNext(IListElement *next) {};
    void setPrevious(IListElement *prev);
    ~SentinelNode() {};
    int getValue() { return -1; }
    IListElement *getNext() { return NULL; };
    friend class LinkedList;
};


#endif //DESIGN_PATTERN_SENTINELNODE_H
