#include "die.h"
#include <ctime> 

Die::Die(int sides) : sides(sides) {

    srand(time(nullptr)); 
}

int Die::roll() {
    return rand() % sides + 1;
}
