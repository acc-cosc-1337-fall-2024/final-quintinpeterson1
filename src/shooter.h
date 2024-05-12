//
#ifndef SHOOTER_H
#define SHOOTER_H

#include <memory>
#include <vector>
#include <iostream>

#include "roll.h"
#include "die.h"

class Shooter
{
private:
    std::vector<std::unique_ptr<Roll>> rolls;

public:
    Roll *throw_dice(Die &d1, Die &d2);
    void display_rolled_values();
};
#endif