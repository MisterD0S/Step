#include "less1.h"
String::String()
{
	str = new char[80];
}

String::String(char* _str)
{
	str = new char [strlen(_str)+1];
	strcpy(str, _str);
}

String::String(int _size)
{
	length = _size;
	str = new char [length];
}

String::String(const String& copyString)
{
	length = copyString.length;
	str = new char[length + 1];
	strcpy(str, copyString.str);
}

void String::Input()
{
	cout << "¬ведите строку:" << endl;
	cin >> str;
}

void String::Output()
{
	for (int i = 0; i < (int)strlen(str); ++i)
		cout << str[i];
}
