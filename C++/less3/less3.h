#pragma once
#include <iostream>
#include <ctime>
using namespace std;
class Time
{
private:
	const int maxhours = 24;
	const int maxminsec = 60;
	int seconds;
	int minuts;
	int hours;
	void CorrectMinandSec(int a, int b);
public:
	Time(int _hours = 0, int _minuts = 0, int _seconds = 0) : hours(_hours), minuts(_minuts), seconds(_seconds)
	{
		CorrectTime();
	};
	void CorrectTime();
	friend ostream& operator << (ostream& out, const Time& time);
}