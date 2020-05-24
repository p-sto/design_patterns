//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "Implementors/ArtifactorySource.h"
#include "Abstractions/SpecificBuild.h"
#include "Abstractions/BuildTypes.h"
#include "Abstractions/BuildTypes.h"
#include <iostream>


int main() {

    ArtifactorySource* source = new ArtifactorySource("Build 1", "some_path", "some_metadata_string");
    SpecificBuild build = SpecificBuild(source);

    std::cout << "Build name is: " << build.getName() << std::endl;
    std::cout << "Build type is: " << build.getBuildType() << std::endl;

    delete source;

    return 0;
}