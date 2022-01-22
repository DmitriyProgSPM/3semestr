#pragma once
#include "Landscape.h"
#include "IPlace.h"
class Mountain :
    public Landscape, public IPlace
{
public:
    Mountain() :Landscape() {};
    Mountain(int x_, int y_) :Landscape(x_, y_,'^') {};
    bool place();
};

