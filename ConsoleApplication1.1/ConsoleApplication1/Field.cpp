#include "Field.h"
#include <iostream>
using namespace std;

Field::Field()
{
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
	maxUnits = (int)((10.0 * n * m) / 100.0);
	units = new Unit[maxUnits];
	countUnit = 0;
}

Field::Field(Field& field)
{
	n = field.n;
	m = field.m;
	maxUnits = field.maxUnits;
	countUnit = field.countUnit;
	units = new Unit[maxUnits];
	for (int k = 0; k < countUnit; k++)
		units[k] = Unit(field.units[k]);
}



void Field::addUnit(Unit& unit)
{
	if (countUnit < maxUnits) {
		Unit newUnit;
		newUnit.setX(unit.getX());
		newUnit.setY(unit.getY());
		units[countUnit] = newUnit;
		countUnit++;
	}
}

void Field::deleteUnit(Unit& unit)
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

void Field::print()
{
	for (int x = 0; x < m + 2; x++) cout << "X";
	cout << endl;
	for (int y = 0; y < n; y++) {
		cout << "X";
		for (int x = 0; x < m; x++) {
			char c = ' ';
			for (int k = 0; k < countUnit; k++)
				if (units[k].getX() == x && units[k].getY() == y) 
					c = units[k].getC();
			cout << c;
		}
		cout << "X" << endl;
	}
	for (int x = 0; x < m + 2; x++) cout << "X";
	
}
