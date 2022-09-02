#include <iostream>
using std::cout;

#include "Sword.h"
#include "Sword.cpp"

#include "Shield.h"
#include "Shield.cpp"

int main( )
{
    cout << "Usando Sword no main\n";
    

    Sword royalGuardSword;
    royalGuardSword.print();


    cout << "Usando Shield no main\n";
    Shield ironShield;
    ironShield.print();

    royalGuardSword.reduceStrength(royalGuardSword.getStrength());
    royalGuardSword.print();

    return 0;

}