//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <string>
#include <iostream>
#include "AssetManagerAccessProxy.h"

AssetManagerAccessProxy::AssetManagerAccessProxy() {
    this->asset_manager = new AssetManager();
}

bool AssetManagerAccessProxy::checkAccess(std::string client_name) {
    // modeling some database call
    if (client_name == "Client1") {
        std::cout << "Client is authorised" << std::endl;
        return true;
    }
    return false;
}

Asset* AssetManagerAccessProxy::getAssetByName(std::string client_name, std::string asset_name) {
    if (this->checkAccess(client_name)) {
        return this->asset_manager->getAssetByName(client_name, asset_name);
    }
    throw -1;
}

AssetManagerAccessProxy::~AssetManagerAccessProxy() {
    delete this->asset_manager;
}