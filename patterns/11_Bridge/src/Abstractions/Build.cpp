//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "MetaData.h"
#include "Build.h"

#include <string>

Build::Build(Source* source) {
    this->source = source;
}

std::string Build::getName() {
    return this->source->getExternalId();
}

std::string Build::getExternalPath() {
    return this->source->getExternalPath();
}

MetaData Build::getMetaData() {
    return this->source->getMetaData();
}