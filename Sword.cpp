#include <iostream>
using std::cout;

#include "Sword.h"

Sword::Sword( )
{
   cout << "Inicializando Sword no constructor.\n";
   strength = 48;
   durability = 14;
}

Sword::~Sword( )
{  

}

void Sword::print( ) const
{
    cout << "Strength: "   << strength << '\n';
    cout << "Durability: " << durability << '\n';
}

double Sword::getStrength( )
{
    return this->strength;
}

double Sword::reduceStrength(double strength)
{
    cout << "Strenght reduzida em 2:" <<"\n";
    return this->strength = strength-2;
}