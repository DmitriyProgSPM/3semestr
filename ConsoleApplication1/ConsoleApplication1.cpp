#include <iostream>
#include "Field.h"
using namespace std;

int main(){
	Field f;
	getchar();

	Unit u;
	u.createUnit('s', 0, 0);
	
	system("cls");
	f.print();
	getchar();

	system("cls");
	f.addUnit(u);
	f.print();
	getchar();

	system("cls");
	f.deleteUnit(u);
	f.print();
}
