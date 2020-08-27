//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_LISTOBJECT_H
#define DESIGN_PATTERN_LISTOBJECT_H

#include "TypeObject.h"

class IListObject {
public:
    int ref_count;
    TypeObject *ob_type;
    void deleteObject();
};

void IListObject::deleteObject() {
    // it actually resets ref count and parameters to default
    this->ref_count = 0;
}


#endif //DESIGN_PATTERN_LISTOBJECT_H
