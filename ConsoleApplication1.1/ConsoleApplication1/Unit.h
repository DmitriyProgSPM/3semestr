#pragma once
#include "IMove.h"
#include "IAttack.h"

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

    Unit* createUnit(char c, int x, int y);
};

