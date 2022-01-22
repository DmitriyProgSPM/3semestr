#include "Facade.h"

void Facade::operation()
{
	int x, y;
	do {
		f.print();
		x = menu();
		if (x == 1) {
			y = menuBase();
			if (y == 1) f.baseState();
			else if (y == 2) f.unitsState();
			else if (y == 3) {
				y = menuCreateUnit();
				Unit* unit = new Unit();
				if (y == 1) unit = new Spearman(f.getBase()->getX(),f.getBase()->getY());
				else if(y == 2) unit = new Swordsman(f.getBase()->getX(), f.getBase()->getY());
				else if (y == 3) unit = new Shooter(f.getBase()->getX(), f.getBase()->getY());
				else if (y == 4) unit = new Crossbowman(f.getBase()->getX(), f.getBase()->getY());
				else if (y == 5) unit = new Rider(f.getBase()->getX(), f.getBase()->getY());
				else if (y == 6) unit = new Knight(f.getBase()->getX(), f.getBase()->getY());
				f.addUnit(*unit);
			}
		}
		else if(x == 2){
			Unit* unit = menuChooseUnit();
			y = menuUnit();
			if (y == 1) {
				unit->move(menuDir());
			}
			else if(y == 2) {
				unit->attack(menuDir());
			}
		}
	} while (x != 3);
}

int Facade::menu()
{
	int x;
	cout << "1 - Управление базой" << endl;
	cout << "2 - Управление юнитом" << endl;
	cout << "3 - Выход" << endl;
	cout << "Выбор: ";
	cin >> x;
	return x;
}

int Facade::menuBase()
{
	int x;
	cout << "1 - Cостояние базы" << endl;
	cout << "2 - Состояние войска" << endl;
	cout << "3 - Создание юнита" << endl;
	cout << "Выбор: ";
	cin >> x;
	return x;
}

int Facade::menuUnit()
{
	int x;
	cout << "1 - Перемещение" << endl;
	cout << "2 - Атака" << endl;
	cout << "3 - Оставить юнита в покое" << endl;
	cout << "Выбор: ";
	cin >> x;
	return x;
}

int Facade::menuCreateUnit()
{
	int x;
	cout << "1 - {p} - Копейщик" << endl;
	cout << "2 - {s} - Мечник" << endl;
	cout << "3 - {h} - Стрелок" << endl;
	cout << "4 - {c} - Арбалетчик" << endl;
	cout << "5 - {r} - Всадник" << endl;
	cout << "6 - {k} - Рыцарь" << endl;
	cout << "Выбор: ";
	cin >> x;
	return x;
}

Unit* Facade::menuChooseUnit()
{
	int i;
	cout << "Введите индекс войска: ";
	cin >> i;
	Unit* unit = (f.getBase()->getUnits(i));
	return unit;
}

char Facade::menuDir()
{
	char x;
	cout << "u - Вверх" << endl;
	cout << "d - Вниз" << endl;
	cout << "l - Влево" << endl;
	cout << "r - Вправо" << endl;
	cout << "Выбор: ";
	cin >> x;
	return x;
}
