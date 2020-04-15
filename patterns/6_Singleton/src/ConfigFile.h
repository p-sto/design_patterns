//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_CONFIGFILE_H
#define DESIGN_PATTERN_CONFIGFILE_H


class ConfigFile {
protected:
    ConfigFile();
    void getDataFromFile();
public:
    static ConfigFile* get();
    ~ConfigFile() {};
    bool param1;
    bool param2;
    int value;
};


#endif //DESIGN_PATTERN_CONFIGFILE_H
