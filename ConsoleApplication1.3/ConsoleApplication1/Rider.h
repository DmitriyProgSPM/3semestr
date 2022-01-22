#pragma once
#include "Cavalry.h"

//Всадник
class Rider :
    public Cavalry
{
public:
    Rider(int x_, int y_) :Cavalry('r', 20, 20, 60, x_, y_) {};
};

