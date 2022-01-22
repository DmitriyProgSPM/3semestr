#pragma once
#include "Unit.h"
#include <list>

class Field
{
private:
	int n;
	int m;
	int maxUnits;
	int countUnit;
	Unit* units;
public:
	Field();
	Field(Field& field);

	void addUnit(Unit& unit);
	void deleteUnit(Unit& unit);



	void print();
};

