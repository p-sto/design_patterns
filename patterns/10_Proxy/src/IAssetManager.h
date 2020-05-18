//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_IASSETMANAGER_H
#define DESIGN_PATTERN_IASSETMANAGER_H

#include <string>
#include "Asset.h"

class IAssetManager {
public:
    virtual Asset* getAssetByName(std::string client_name, std::string asset_name) = 0;
    virtual ~IAssetManager() {};
};
#endif //DESIGN_PATTERN_IASSETMANAGER_H
