#pragma once
#include "Archer.h"

//Арбалетчик
class Crossbowman :
    public Archer
{
public:
    Crossbowman(int x_, int y_) :Archer('c', 20, 20, 60, x_, y_) {};
};

