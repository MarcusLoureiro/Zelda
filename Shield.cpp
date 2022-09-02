#include <iostream>
using std::cout;

#include "Shield.h"

Shield::Shield( )
{
   cout << "Inicializando Shield no constructor.\n";
   defense = 15;
   durability = 40;
}

Shield::~Shield( )
{  

}

void Shield::print( ) const
{
    cout << "defense: "   << defense << '\n';
    cout << "Durability: " << durability << '\n';
}