//
#include "come_out_phase.h"

RollOutcome ComeOutPhase::get_outcome(Roll *roll)
{
    int val = roll->roll_value();
    if (val == 11) {
        return RollOutcome::Natural;
    }
    
    else if (val == 12){
        return RollOutcome::Craps;
    }
    
    else {
        return RollOutcome::Point;
    }
}