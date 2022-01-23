#pragma once
#include "Unit.h"
#include <list>
#include "Landscape.h"
#include "Plain.h"
#include "Mountain.h"
#include "River.h"
#include "Base.h"
#include "Kit.h"
#include "Armory.h"
#include "Trap.h"
#include "Warehouse.h"
#include "Log.h"

class Field
{
private:
	int n;
	int m;
	Base* base;
	Landscape** landscapes;

	Kit* kit;
	Armory* armory;
	Trap* trap;
	Warehouse* warehouse;
public:
	Field();
	Field(Log& l);
	Field(Field& field);

	void addUnit(Unit& unit);
	void deleteUnit(Unit& unit);

	Base* getBase();

	void generateLandscape();
	void generateSubjects();

	void print();
	void baseState();
	void unitsState();
};

