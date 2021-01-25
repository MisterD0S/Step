#include "less8.h"
int main()
{
	string str1("1234a");
	string str2;
	str2 = str1;
	str1 = "!";
	cout << str1 << endl;
	cout << str2 << endl;
	str1.replace(0, 3, "77");
	cout << str1 << endl;
}