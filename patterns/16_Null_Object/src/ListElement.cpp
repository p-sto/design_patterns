//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "ListElement.h"
#include <string>

ListElement::ListElement(int element) {
    this->element = element;
}

void ListElement::setNext(IListElement *next) {
    this->next = next;
}

void ListElement::setPrevious(IListElement *prev) {
    this->previous = prev;
}

bool ListElement::isFinal() {
    return false;
}

int ListElement::getValue() {
    return this->element;
}

IListElement *ListElement::getNext() {
    return this->next;
}