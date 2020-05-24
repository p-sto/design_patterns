//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "../Abstractions/MetaData.h"
#include "ArtifactorySource.h"

ArtifactorySource::ArtifactorySource(std::string source_name, std::string path, std::string metadata_string) {
    this->external_id = source_name;
    this->external_path = path;
    this->metadata_string = metadata_string;
}

MetaData ArtifactorySource::getMetaData() {
    return MetaData(metadata_string);
}

std::string ArtifactorySource::getExternalPath() {
    return this->external_path;
}

std::string ArtifactorySource::getExternalId() {
    return this->external_id;
}