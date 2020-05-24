//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_SOURCE_H
#define DESIGN_PATTERN_SOURCE_H

#include "../Abstractions/MetaData.h"
#include <string>

class Source {
public:
    virtual std::string getExternalId() = 0;
    virtual std::string getExternalPath() = 0;
    virtual MetaData getMetaData() = 0;
    virtual ~Source() {};
};

#endif //DESIGN_PATTERN_SOURCE_H
