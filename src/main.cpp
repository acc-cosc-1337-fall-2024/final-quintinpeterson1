#include <iostream>
#include "die.h"
#include "shooter.h"
#include "come_out_phase.h"
#include "point_phase.h"

int main()
{
	Die d1(6), d2(6);
	Shooter shooter;
	ComeOutPhase cop;
	Roll *curr = nullptr;
	while (cop.get_outcome(curr = shooter.throw_dice(d1, d2)) != RollOutcome::Point)
	{
		switch (cop.get_outcome(curr))
		{
		case Natural:
			std::cout << "Rolled a natural with ";
			break;
		case Craps:
			std::cout << "Crapped out with ";
		}
		std::cout << curr->roll_value() << "\n";
	}
	PointPhase pp(curr->roll_value());
	std::cout << "Rolled " << curr->roll_value() << " start of point phase\n"
			  << "Roll until " << curr->roll_value() << " or 7 is rolled\n";
	while (pp.get_outcome(curr = shooter.throw_dice(d1, d2)) == RollOutcome::NoPoint)
	{
		std::cout << "Rolled " << curr->roll_value() << " roll again\n";
	}
	std::cout << "Rolled " << curr->roll_value() << " end of point phase\n";

	shooter.display_rolled_values();
	return 0;
}