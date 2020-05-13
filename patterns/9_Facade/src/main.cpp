//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "Engine.h"

int main(){

    Engine* engine = new Engine();
    engine->launch();

    delete engine;
    return 0;
}