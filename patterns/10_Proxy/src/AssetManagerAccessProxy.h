//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_ASSETMANAGERACCESSPROXY_H
#define DESIGN_PATTERN_ASSETMANAGERACCESSPROXY_H

#include <string>
#include <list>

#include "Asset.h"
#include "AssetManager.h"
#include "IAssetManager.h"

class AssetManagerAccessProxy: public IAssetManager {
public:
    AssetManagerAccessProxy();
    ~AssetManagerAccessProxy();

    // IAssetManager method
    Asset* getAssetByName(std::string client_name, std::string asset_name);

private:
    bool checkAccess(std::string client_name);
    AssetManager* asset_manager;

};


#endif //DESIGN_PATTERN_ASSETMANAGERACCESSPROXY_H
