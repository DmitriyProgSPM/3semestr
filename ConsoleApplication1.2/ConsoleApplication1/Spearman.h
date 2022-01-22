#pragma once
#include "Infantry.h"

//Копейщик
class Spearman :
    public Infantry
{
public:
    Spearman(int x_, int y_) :Infantry('p', 40, 10, 50, x_, y_) {};
};

