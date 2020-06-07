//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//


#include "Extraction/TextDataExtraction.h"
#include "Extraction/CSVDataExtraction.h"
#include <iostream>
#include <vector>
#include <string>

int main() {

    TextDataExtraction text_extraction = TextDataExtraction();
    CSVDataExtraction csv_extraction = CSVDataExtraction();

    text_extraction.processData("src/test.txt");
    csv_extraction.processData("src/test.csv");

    return 0;
}