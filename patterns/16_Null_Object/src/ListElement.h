//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_LISTELEMENT_H
#define DESIGN_PATTERN_LISTELEMENT_H

#include "LinkedList.h"
#include <string>

class ListElement;

class IListElement {
public:
    virtual ~IListElement() {};
    virtual bool isFinal() = 0;
    virtual void setNext(IListElement *next) = 0;
    virtual void setPrevious(IListElement *prev) = 0;
    virtual int getValue() = 0;
    virtual IListElement *getNext() = 0;
};

class ListElement: public IListElement {
public:
    ListElement(int element);
    ~ListElement() {};
    bool isFinal();
    int element;
    IListElement *next;
    IListElement *previous;
    void setNext(IListElement *next);
    void setPrevious(IListElement *prev);
    int getValue();
    IListElement *getNext();
    friend class LinkedList;
};


#endif //DESIGN_PATTERN_LISTELEMENT_H
