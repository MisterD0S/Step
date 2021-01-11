#pragma once
#include <iostream>
#include <ctime>
#include <string>
using namespace std;
class string1
{
private:    
	
	char* str;
	int a;
public:
	string1() 
	{ 
		str = nullptr; 
	}
	 string1(const char* str) : str{ new char[strlen(str)+1] } 
	{ 
		strcpy_s(this->str, strlen(str)+1, str); 
	}
	string1(const string1& obj) : str{new char[strlen(obj.str)+1]} 
	{
		strcpy_s(this->str, strlen(obj.str)+1, obj.str);
		cout << "CC" << endl;
	}
	~string1() 
	{ 
		if (str != nullptr) 
		delete[]str; 
	}

	
	int setA(int a);
	int GetA() const;
	void print(string1 str) const ;
	void stringRead(const char* str);


};