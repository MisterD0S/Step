#pragma once
#include <iostream>
#include <ctime>
using namespace std;
class String
{
private:
	char* str;
	int length;
public:
	String();
	String(char*);
	String(int size);
};