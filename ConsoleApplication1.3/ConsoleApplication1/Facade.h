#pragma once
#include <iostream>
#include "Field.h"
#include "Spearman.h"
#include "Swordsman.h"
#include "Shooter.h"
#include "Crossbowman.h"
#include "Rider.h"
#include "Knight.h"

using namespace std;

class Facade
{
private: 
	Field f;
public:

	void operation();

	int menu();
	int menuBase();
	int menuUnit();
	int menuCreateUnit();
	Unit* menuChooseUnit();
	char menuDir();
};

