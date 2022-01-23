#include "Landscape.h"

Landscape::Landscape()
{
	c = '*';
	x = 0;
	y = 0;
}

Landscape::Landscape(int x_, int y_ , char c_)
{
	c = c_;
	x = x_;
	y = y_;
}

char Landscape::getC()
{
	return c;
}
