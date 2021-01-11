#include "less2.h"

void string1::print(string1 str) const {
	cout << str.str;

}

int string1:: setA(int a) {
	this->a = a;
	return 0;
}

int string1::GetA() const {
	return a;
}

void string1::stringRead(const char* str) {

	this->str = new char[strlen(str)+1];
	strcpy_s(this->str, strlen(str)+1, str);

}
