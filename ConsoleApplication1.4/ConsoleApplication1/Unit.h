#pragma once
#include "IMove.h"
#include "IAttack.h"
#include "Kit.h"
#include "Armory.h"
#include "Trap.h"
#include "Warehouse.h"

//юнит
class Unit: public IMove, public IAttack
{
private:
	char c;
	int health;
	int armor;
	int power;
	int x;
	int y;
	int step;
	int range;
public:
	Unit();
	Unit(char c_, int health_, int armor_, int power_, int x_,int y_, int step_, int range_);
	Unit(Unit &unit);

	int getX();
	int getY();
	char getC();
	void setX(int x_);
	void setY(int y_);
	int getStep();
	int getRange();

	void move(char direction);
	void attack(char direction);

	void operator+ (Kit& kit);
	void operator+ (Armory& armory);
	void operator+ (Trap& trap);
	void operator+ (Warehouse& warehouse);

	void operator+ (Unit& unit);

    Unit* createUnit(char c, int x, int y);
};

