//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include "Scalar.h"
#include "Vector.h"
#include "helpers.h"

#include <vector>

int main(){

    std::vector<std::string> y_file;
    y_file = get_file_content();

    Vector *parsed = parse_y_file(y_file);
    parsed->listModuleContent();

    delete parsed;
    return 0;
}