#pragma once
#include <iostream>
#include "Field.h"
#include "Spearman.h"
#include "Swordsman.h"
#include "Shooter.h"
#include "Crossbowman.h"
#include "Rider.h"
#include "Knight.h"
#include "Log.h"

using namespace std;

class Facade
{
private: 
	Log l;
	Field f;
public:

	Facade();

	void operation();

	int menu();
	int menuBase();
	int menuUnit();
	int menuCreateUnit();
	Unit* menuChooseUnit();
	char menuDir();
};

