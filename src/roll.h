//
#ifndef ROLL_H
#define ROLL_H

#include "catch.hpp"
#include "roll.h"
#include "die.h"

class Roll
{
private:
    Die &d1, &d2;
    int rolled_value;

public:
    Roll(Die &d1, Die &d2) : d1(d1), d2(d2) {}
    void roll_dice();
    int roll_value() const;
};
#endif