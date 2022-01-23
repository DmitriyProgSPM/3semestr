#include "Base.h"

Base::Base(int n, int m)
{
	x = 0; 
	y = 0;
	health = 100;
	maxUnits = (int)((10.0 * n * m) / 100.0);
	units = new Unit[maxUnits];
	countUnit = 0;
}

Base::Base(int n_, int m_, int x_, int y_)
{
	x = x_; 
	y = y_;
	health = 100;
	maxUnits = (int)((10.0 * n_ * m_) / 100.0);
	units = new Unit[maxUnits];
	countUnit = 0;
}

Base::Base(Base& base)
{
	maxUnits = base.maxUnits;
	countUnit = base.countUnit;
	units = new Unit[maxUnits];
	for (int k = 0; k < countUnit; k++)
		units[k] = base.units[k];
}

int Base::getCountUnit()
{
	return countUnit;
}

Unit* Base::getUnits(int i)
{
	return &units[i];
}

int Base::getX()
{
	return x;
}

int Base::getY()
{
	return y;
}

int Base::getHealth()
{
	return health;
}

void Base::addUnit(Unit& unit)
{
	if (countUnit < maxUnits) {
		Unit newUnit;
		newUnit.setX(unit.getX());
		newUnit.setY(unit.getY());
		units[countUnit] = newUnit;
		countUnit++;
	}
}

void Base::deleteUnit(Unit& unit)
{
	int k = 0;
	while (k < countUnit &&
		(unit.getX() != units[k].getX() && unit.getY() != units[k].getY())) {
		k++;
	}
	if (k < countUnit) {
		for (; k < countUnit - 1; k++)
			units[k] = units[k + 1];
		countUnit--;
	}
}