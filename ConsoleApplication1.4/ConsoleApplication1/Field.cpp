#include "Field.h"
#include <iostream>
#include <string>
using namespace std;

Field::Field()
{
}

Field::Field(Log& l)
{
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
	
	l.message("Пользователь выбрал поле размера" + to_string(n) + "x" + to_string(m));

	landscapes = new Landscape * [n];
	for (int y = 0; y < n; y++)
		landscapes[y] = new Landscape[m];
	generateLandscape();
	generateSubjects();
}

Field::Field(Field& field)
{
	n = field.n;
	m = field.m;
	base = new Base(*field.base);
	kit = field.kit;
	trap = field.trap;
	warehouse = field.warehouse;
	armory = field.armory;

	landscapes = new Landscape * [n];
	for (int y = 0; y < n; y++)
		landscapes[y] = new Landscape[m];

	for (int x = 0; x < m; x++)
		for (int y = 0; y < n; y++)
			landscapes[y][x] = field.landscapes[y][x];
}



void Field::addUnit(Unit& unit)
{
	base->addUnit(unit);
}

void Field::deleteUnit(Unit& unit)
{
	base->deleteUnit(unit);
}

Base* Field::getBase()
{
	return base;
}

void Field::generateLandscape()
{
	for(int x = 0; x < m; x++)
		for (int y = 0; y < n; y++) {
			int r = rand() % 10;
			Landscape* newL;
			if (r == 0) newL = new River(x, y);
			else if (r == 1) newL = new Mountain(x, y);
			else newL = new Plain(x, y); 
			landscapes[y][x] = *newL;
		}
}

void Field::generateSubjects()
{
	int x = rand() % m,
		y = rand() % n;
	base = new Base(n, m, x, y);


	x = rand() % m;
	y = rand() % n;
	kit = new Kit(x, y);

	x = rand() % m;
	y = rand() % n;
	trap = new Trap(x, y);

	x = rand() % m;
	y = rand() % n;
	armory = new Armory(x, y);

	x = rand() % m;
	y = rand() % n;
	warehouse = new Warehouse(x, y);
}

void Field::print()
{
	for (int x = 0; x < m + 2; x++) cout << "X";
	cout << endl;
	for (int y = 0; y < n; y++) {
		cout << "X";
		for (int x = 0; x < m; x++) {
			char c = landscapes[y][x].getC();
			if (kit->getX() == x && kit->getY() == y) c = 'k';
			if (armory->getX() == x && armory->getY() == y) c = 'a';
			if (warehouse->getX() == x && warehouse->getY() == y) c = 'w';
			if (trap->getX() == x && trap->getY() == y) c = 't';
			if (base->getX() == x && base->getY() == y) c = 'b';
			for (int k = 0; k < base->getCountUnit(); k++)
				if (base->getUnits(k)->getX() == x && base->getUnits(k)->getY() == y)
					c = base->getUnits(k)->getC();
			cout << c;
		}
		cout << "X" << endl;
	}
	for (int x = 0; x < m + 2; x++) cout << "X";
	cout << endl;
}

void Field::baseState()
{
	cout << "Здоровье: " << base->getHealth()
		<< ". Численность войск: " << base->getCountUnit() << endl;
}

void Field::unitsState()
{
	cout << "Численность войск: " << base->getCountUnit() << endl;
}
