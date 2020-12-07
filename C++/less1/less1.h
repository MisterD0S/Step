#pragma once
#include <iostream>
#include <ctime>
using namespace std;
class String
{
private:
	char* str;
	int length = 80;
public:
	String();
	String(char*);
	String(int );
	String(const String& copyString); 
	void Input();
	void Output();
};