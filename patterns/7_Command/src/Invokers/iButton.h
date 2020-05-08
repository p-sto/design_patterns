
//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_IBUTTON_H
#define DESIGN_PATTERN_IBUTTON_H

class iButton {
public:
    virtual void press() = 0;
    virtual ~iButton() {};
};

#endif //DESIGN_PATTERN_IBUTTON_H
