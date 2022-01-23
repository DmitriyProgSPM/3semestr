#include "Log.h"

Log::Log()
{
	out.open("D:\\output.txt");
}

Log::~Log()
{
	out.close();
}

void Log::message(string s)
{
	cout << s << endl;
	out << s << endl;

}
