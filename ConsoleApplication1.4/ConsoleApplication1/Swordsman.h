#pragma once
#include "Infantry.h"

//������
class Swordsman :
    public Infantry
{
public:
    Swordsman(int x_, int y_) :Infantry('s', 40, 50, 10, x_, y_) {};
};

