//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <iostream>
#include <string>
#include <list>
#include "AssetManager.h"

AssetManager::AssetManager() {
    this->list_of_assets.push_back(new Asset("Name1", 123));
    this->list_of_assets.push_back(new Asset("Name2", 234));
}

Asset* AssetManager::getAssetByName(std::string client_name, std::string asset_name) {
    std::cout << "Processing request from client " << client_name << std::endl;
    for(std::list<Asset*>::iterator it = this->list_of_assets.begin(); it != this->list_of_assets.end(); ++it){
        if ((*it)->getName() == asset_name){
            return *it;
        }
    }
    throw -1;
}
