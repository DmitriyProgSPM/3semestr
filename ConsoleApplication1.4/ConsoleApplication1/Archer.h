#pragma once
#include "Unit.h"

//Лучник
class Archer :
    public Unit
{
public:
    Archer(char c_, int health_, int armor_, int power_, int x_, int y_) :Unit(c_, health_, armor_, power_, x_, y_,1,2) {}
};

