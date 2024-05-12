//
#include "shooter.h"

Roll *Shooter::throw_dice(Die &d1, Die &d2)
{
    rolls.push_back(std::make_unique<Roll>(d1, d2));
    rolls.back()->roll_dice();
    return rolls.back().get();
}
void Shooter::display_rolled_values()
{
    for (const std::unique_ptr<Roll> &elem : rolls)
    {
        std::cout << elem->roll_value() << "\n";
    }
}