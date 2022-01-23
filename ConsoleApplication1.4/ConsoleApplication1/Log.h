#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Log
{
private:
	ofstream out;
public:
	Log();
	~Log();

	void message(string s);
};

