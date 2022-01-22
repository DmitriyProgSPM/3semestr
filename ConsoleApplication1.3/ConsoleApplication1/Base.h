#pragma once
#include "Unit.h"
class Base
{
private:
	int x;
	int y;
	int health;
	int maxUnits;
	int countUnit;
	Unit* units;

public:

	Base(int n, int m);
	Base(int n_, int m_, int x_, int y_);
	Base(Base& base);

	int getCountUnit();
	Unit* getUnits(int i);

	int getX();
	int getY();
	int getHealth();

	void addUnit(Unit& unit);
	void deleteUnit(Unit& unit);
};

