#include "less1.h"
String::String()
{
	str = new char[80];
}

String::String(char* _str)
{
	str = _str;
}

String::String(int _size)
{
	str = new char[_size];
}
