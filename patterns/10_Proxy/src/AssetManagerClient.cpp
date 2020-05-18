//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <string>
#include "AssetManagerClient.h"
#include "IAssetManager.h"

AssetManagerClient::AssetManagerClient(std::string client_name, IAssetManager *asset_manager) {
    this->asset_manager = asset_manager;
    this->client_name = client_name;
}

Asset* AssetManagerClient::obtainAsset(std::string asset_name) {
    return this->asset_manager->getAssetByName(this->client_name, asset_name);
}
