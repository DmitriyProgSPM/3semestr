#pragma once
#include "Landscape.h"
#include "IPlace.h"
class Plain :
    public Landscape, public IPlace
{
public:
    Plain() :Landscape() {};
    Plain(int x_, int y_) :Landscape(x_, y_, '*') {};
    bool place();
};

