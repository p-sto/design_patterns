//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_RESOURCEMANAGER_H
#define DESIGN_PATTERN_RESOURCEMANAGER_H

#include <string>
#include <list>

#include "Asset.h"
#include "IAssetManager.h"

class AssetManager: public IAssetManager {
public:
    AssetManager();
    Asset* getAssetByName(std::string client_name, std::string asset_name);
private:
    std::list<Asset*> list_of_assets;
};


#endif //DESIGN_PATTERN_RESOURCEMANAGER_H
