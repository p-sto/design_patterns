//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_CLIENT_H
#define DESIGN_PATTERN_CLIENT_H

#include <string>
#include "AssetManager.h"
#include "IAssetManager.h"

class AssetManagerClient {
public:
    AssetManagerClient(std::string client_name, IAssetManager* asset_manager);
    Asset* obtainAsset(std::string asset_name);
private:
    IAssetManager* asset_manager;
    std::string client_name;
};


#endif //DESIGN_PATTERN_CLIENT_H
