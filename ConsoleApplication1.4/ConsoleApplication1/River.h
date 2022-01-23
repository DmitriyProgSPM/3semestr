#pragma once
#include "Landscape.h"
#include "IPlace.h"
class River :
    public Landscape, public IPlace
{
public:
    River() :Landscape() {};
    River(int x_, int y_) :Landscape(x_, y_,'~') {};
    bool place();
};