//
#ifndef PHASE_H
#define PHASE_H

#include <memory>
#include "roll.h"

enum RollOutcome
{
    Natural,
    Craps,
    Point,
    SevenOut,
    NoPoint
};

class Phase
{
public:
    virtual ~Phase() = default;
    virtual RollOutcome get_outcome(Roll *roll) = 0;
};
#endif