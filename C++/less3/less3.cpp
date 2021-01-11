#include "less3.h"
#include <iostream>
using namespace std;
void Time::CorrectMinandSec(int a, int b)
{
	if (seconds >= maxminsec)
	{
		b += (a % maxminsec);
		a -= (a % maxminsec) * maxminsec;
	}
}

void Time::CorrectTime()
{
	CorrectMinandSec(seconds, minuts);
	CorrectMinandSec(minuts, hours);
	if (hours > maxhours)
	{
		while (hours>maxhours)
		{
			hours -= maxhours;
		}
	}
}

ostream& operator<<(ostream& out, const Time& time)
{
	out << time.hours << "[h] " << time.minuts << "[m] " << time.seconds << "[s] " << endl;
	return out;
}
