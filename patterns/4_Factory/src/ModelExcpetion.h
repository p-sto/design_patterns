//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_MODELEXCEPTION_H
#define DESIGN_PATTERN_MODELEXCEPTION_H

class ModelException: public std::exception {
    virtual const char* what() const throw()
    {
        return "Wrong model provided";
    }
};


#endif //DESIGN_PATTERN_MODELEXCEPTION_H
