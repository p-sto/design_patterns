//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_ARTIFACTORYSOURCE_H
#define DESIGN_PATTERN_ARTIFACTORYSOURCE_H

#include <string>
#include "Source.h"
#include "../Abstractions/MetaData.h"


class ArtifactorySource: public Source {
public:
    ArtifactorySource(std::string source_name, std::string path, std::string metadata_string);
    std::string getExternalId();
    std::string getExternalPath();
    MetaData getMetaData();
    ~ArtifactorySource() {};
private:
    std::string metadata_string;
    std::string external_id;
    std::string external_path;
};


#endif //DESIGN_PATTERN_ARTIFACTORYSOURCE_H
