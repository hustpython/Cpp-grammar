# include <iostream>
# include <stdlib.h>
# include "Soldier.h"

int main(void)
{
    Soldier soldier;
    soldier.play();
    soldier.work();
    soldier.Person::play();
    return 0;
}