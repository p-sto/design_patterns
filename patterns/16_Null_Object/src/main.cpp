//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "LinkedList.h"
#include <iostream>

int main(){

    LinkedList list = LinkedList();
    list.append(4);
    list.append(2);
    list.append(3);
    list.append(1);
    list.append(5);
    list.printContent();

    return 0;
}