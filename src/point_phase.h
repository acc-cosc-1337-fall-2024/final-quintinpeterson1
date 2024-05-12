//
#ifndef POINT_PHASE_H
#define POINT_PHASE_H

#include <memory>
#include "phase.h"

class PointPhase : public Phase
{
private:
    int p;

public:
    PointPhase(int p) : p(p) {}
    RollOutcome get_outcome(Roll *roll);
};
#endif