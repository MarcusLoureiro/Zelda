#ifndef SHIELD_H
#define SHIELD_H

class Shield
{
public:
    Shield();
    ~Shield();

    void print( ) const;

private:

    double defense;
    int durability;

};

#endif // SHIELD_H