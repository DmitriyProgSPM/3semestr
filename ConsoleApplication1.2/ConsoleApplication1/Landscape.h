#pragma once
class Landscape
{
private:
	int x;
	int y;
	char c;
public:
	Landscape();
	Landscape(int x_, int y_, char c_);

	char getC();
};

