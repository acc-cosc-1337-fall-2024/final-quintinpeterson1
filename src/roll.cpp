//
#include "roll.h"

void Roll::roll_dice()
{
    rolled_value = d1.roll() + d2.roll();
}

int Roll::roll_value() const
{
    return rolled_value;
}