//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_SPECIFICBUILD_H
#define DESIGN_PATTERN_SPECIFICBUILD_H

#include "BuildTypes.h"
#include "Build.h"

class SpecificBuild: public Build {
public:
    using Build::Build;
    BuildType getBuildType() { return this->build_type; };
private:
    BuildType build_type = BuildType::ARTIFACTORY;
};

#endif
