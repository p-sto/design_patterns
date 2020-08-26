//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_ICREDITCARD_H
#define DESIGN_PATTERN_ICREDITCARD_H

class ICreditVisitor;

class ICreditCard {
public:
    virtual float getSavings() = 0;
    virtual bool pay(float amount) = 0;
    virtual float visit(ICreditVisitor* visitor) = 0;
    virtual ~ICreditCard() {};
};

#endif //DESIGN_PATTERN_ICREDITCARD_H
