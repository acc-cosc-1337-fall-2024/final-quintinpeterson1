//
#include "point_phase.h"

RollOutcome PointPhase::get_outcome(Roll *roll)
{
    int val = roll->roll_value();
    if (val == 7)
    {
        return RollOutcome::SevenOut;
    }
    if (val == p)
    {
        return RollOutcome::Point;
    }
    return RollOutcome::NoPoint;
}