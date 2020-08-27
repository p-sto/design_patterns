//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_EXCEPTIONS_H
#define DESIGN_PATTERN_EXCEPTIONS_H

class AllocationException: public std::exception {
    virtual const char* what() const throw()
    {
        return "Could not allocate memory for new object";
    }
};

#endif //DESIGN_PATTERN_EXCEPTIONS_H
