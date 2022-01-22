#pragma once
#include "Unit.h"
#include "IMove.h"
#include "IAttack.h"

//Пехота
class Infantry :
    public Unit
{
public:
    Infantry() :Unit() {};

    Infantry(char c_, int health_, int armor_, int power_, int x_, int y_):Unit(c_, health_, armor_, power_, x_, y_, 1, 1){}

    
};

