#include "Unit.h"
#include "Swordsman.h"
#include "Spearman.h"
#include "Crossbowman.h"
#include "Shooter.h"
#include "Knight.h"
#include "Rider.h"

Unit::Unit()
{
	c = 's';
	health = 10;
	armor = 10;
	power = 10;
	x = 0;
	y = 0;
	step = 1;
	range = 1;
}

Unit::Unit(char c_, int health_, int armor_, int power_, int x_, int y_, int step_, int range_)
{
	c = c_;
	health = health_;
	armor = armor_;
	power = power_;
	x = x_;
	y = y_;
	step = step_;
	range = range_;
}

Unit::Unit(Unit& unit)
{
	c = unit.c;
	health = unit.health;
	armor = unit.armor;
	power = unit.power;
	x = unit.x;
	y = unit.y;
	step = unit.step;
	range = unit.range;
}

int Unit::getX()
{
	return x;
}

int Unit::getY()
{
	return y;
}

char Unit::getC()
{
	return c;
}

void Unit::setX(int x_)
{
	x = x_;
}

void Unit::setY(int y_)
{
	y = y_;
}

int Unit::getStep()
{
	return step;
}

int Unit::getRange()
{
	return range;
}

void Unit::move(char direction)
{
	if (direction == 'N') setY(getY() - getStep());
	else if (direction == 'S') setY(getY() + getStep());
	else if (direction == 'E') setX(getX() + getStep());
	else if (direction == 'W') setX(getX() - getStep());
}

void Unit::attack(char direction)
{
}

Unit* Unit::createUnit(char c, int x, int y)
{
	Unit* p = new Swordsman(x, y);
	switch (c)
	{
	case 's':
		p = new Swordsman(x, y);
		break;
	case 'p':
		p = new Spearman(x, y);
		break;
	case 'c':
		p = new Crossbowman(x,y);
		break;
	case 'h':
		p = new Shooter(x, y);
		break;
	case 'k':
		p = new Knight(x, y);
		break;
	case 'r':
		p = new Rider(x, y);
		break;
	default:
		Swordsman(x,y);
	}
	return p;
}
