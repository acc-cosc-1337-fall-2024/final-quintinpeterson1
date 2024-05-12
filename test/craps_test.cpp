#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"
#include "shooter.h"
#include "phase.h"
#include "come_out_phase.h"
#include "point_phase.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Die rolls return a value from 1 to 6", "[die]") {
    Die die(6); 
    
    for (int i = 0; i < 10; i++) {
        int rollResult = die.roll();
        REQUIRE(rollResult >= 1);
        REQUIRE(rollResult <= 6);
    }
}

TEST_CASE("Rolls return a value from 2 to 12", "[roll]") {
    Die die1(6); 
    Die die2(6); 
    Roll roll(die1, die2); 
    
    for (int i = 0; i < 10; i++) {
        roll.roll_dice();
        int rollResult = roll.roll_value();
        REQUIRE(rollResult >= 2);
        REQUIRE(rollResult <= 12);
    }
}

TEST_CASE("Shooter throws dice and returns a Roll object") {
    Shooter shooter;
    Die die1(6);
    Die die2(6);
    
    for (int i = 0; i < 10; i++) {
        Roll* roll = shooter.throw_dice(die1, die2);
        
        REQUIRE(roll != nullptr);

        int rollValue = roll->roll_value();
        REQUIRE(rollValue >= 2);
        REQUIRE(rollValue <= 12);
    }
}


