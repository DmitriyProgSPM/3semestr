#pragma once
#include "Archer.h"

//Стрелок
class Shooter :
    public Archer
{
public:
    Shooter(int x_, int y_) :Archer('h', 30, 30, 40, x_, y_) {};
};

