//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_BUILD_H
#define DESIGN_PATTERN_BUILD_H

#include "MetaData.h"
#include "BuildTypes.h"
#include "../Implementors/Source.h"

#include <string>

class Build {
public:
    Build(Source* source);
    std::string getName();
    std::string getExternalPath();
    virtual MetaData getMetaData();
    virtual BuildType getBuildType() = 0;
private:
    Source* source;
};

#endif //DESIGN_PATTERN_BUILD_H
