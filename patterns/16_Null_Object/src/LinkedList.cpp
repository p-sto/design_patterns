//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "LinkedList.h"
#include "SentinelNode.h"
#include <string>
#include <iostream>

LinkedList::LinkedList() {
    this->head = new SentinelNode();
}

void LinkedList::append(int element) {
    IListElement *sentinel = this->head;
    this->head = new ListElement(element);
    sentinel->setPrevious(this->head);
    this->head->setNext(sentinel);
}

void LinkedList::printContent() {
    IListElement *head = this->head;
    while (not head->isFinal()) {
        std::cout << head->getValue() << std::endl;
        head = head->getNext();
    }
}

LinkedList::~LinkedList() {
    IListElement *head = this->head;
    IListElement *tmp;
    while (not head->isFinal()) {
        tmp = head;
        head = head->getNext();
        delete tmp;
    }
}