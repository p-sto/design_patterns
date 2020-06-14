//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "SentinelNode.h"

bool SentinelNode::isFinal() {
    return true;
}

void SentinelNode::setPrevious(IListElement *prev) {
    this->previous = prev;
}