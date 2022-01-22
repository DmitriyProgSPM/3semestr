#pragma once
#include "Cavalry.h"

//׀ûצאנü
class Knight :
    public Cavalry
{
public:
    Knight(int x_, int y_) :Cavalry('k', 40, 20, 40, x_, y_) {};
};

