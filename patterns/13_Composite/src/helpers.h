//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_HELPERS_H
#define DESIGN_PATTERN_HELPERS_H

#include "IModule.h"
#include "Vector.h"
#include "Scalar.h"

#include <string>
#include <sstream>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <vector>
#include <iostream>

const unsigned int TAB_SIZE = 4; // how many spaces accounts for tab

class ParsingException: public std::exception {
    virtual const char* what() const throw()
    {
        return "Could not parse file, wrong indentation";
    }
};

std::vector<std::string> get_file_content() {
    std::string line;
    std::vector<std::string> file_content;
    std::ifstream fil;
    fil.open("src/source.y");
    while(getline(fil, line)) {
        file_content.push_back(line);
    }
    fil.close();
    return file_content;
}


std::vector<std::string> split_line_by_delimiter(std::string line, char delimiter) {
    std::stringstream ss(line);
    std::string token;
    std::vector<std::string> cont;
    while (std::getline(ss, token, delimiter)) {
        cont.push_back(token);
    }
    return cont;
}

int count_string_tabs(std::string str) {
    unsigned int count = 0;
    for (unsigned int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            count += 1;
        } else {
            break;
        }
    }
    if (count % TAB_SIZE != 0) {
        throw ParsingException();
    }
    return count / TAB_SIZE;
}

Vector* parse_line(std::string line, Vector *head, char delimiter) {
    int tab_indentation_count = 0;
    if (line.rfind("\t", 0) == 0 or line.rfind(" ", 0) == 0) {
        tab_indentation_count = count_string_tabs(line);
    }
    line.erase(std::remove(line.begin(), line.end(), '\t'), line.end());
    line.erase(std::remove(line.begin(), line.end(), ' '), line.end());
    std::vector<std::string> split_line = split_line_by_delimiter(line, delimiter);

    if (tab_indentation_count < head->depth) {
        for (int i = 0; i < head->depth - tab_indentation_count; i++) {
            head = head->master;
        }
    }
    if (split_line.size() == 2) {
        head->addElement(new Scalar(split_line[0], std::stoi(split_line[1]), head));
        return head;
    } else {
        Vector* next_head = new Vector(split_line[0], head->depth + 1);
        next_head->registerMaster(head);
        head->addElement(next_head);
        return next_head;
    }
}

Vector* parse_y_file(std::vector<std::string> fil_content) {
    char delimiter = ':';
    Vector *head = new Vector("head", 0);
    Vector *tmp_head = head;
    for (unsigned int i = 0; i < fil_content.size(); i++) {
        std::string line = fil_content[i];
        tmp_head = parse_line(line, tmp_head, delimiter);
    }
    return head;
}


#endif //DESIGN_PATTERN_HELPERS_H
