//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <list>
#include <iostream>
#include "Asset.h"
#include "AssetManagerAccessProxy.h"
#include "AssetManagerClient.h"
#include "IAssetManager.h"

int main(){
    IAssetManager* proxy_asset_manager = new AssetManagerAccessProxy();
    AssetManagerClient* asset_manager_client = new AssetManagerClient("Client1", proxy_asset_manager);

    Asset* obtained_asset = asset_manager_client->obtainAsset("Name1");
    std::cout << "Obtained value for asset " << obtained_asset->getName() << " is " << obtained_asset->getValue() << std::endl;

    AssetManagerClient* another_asset_manager_client = new AssetManagerClient("Client2", proxy_asset_manager);
    try {
        obtained_asset = another_asset_manager_client->obtainAsset("Name1");
    } catch (int e) {
        std::cout << "An exception error no." << e << " occurred - no access." << std::endl;
    }

    delete obtained_asset;
    delete asset_manager_client;
    delete proxy_asset_manager;

    std::cout << "exiting" << std::endl;
    return 0;
}