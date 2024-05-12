// die.h

#ifndef DIE_H
#define DIE_H

#include <cstdlib>

class Die {
private:
    int sides; 

public:
    Die(int sides); 
    int roll(); 
};

#endif 
