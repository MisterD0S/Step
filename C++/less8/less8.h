#pragma once
#include <iostream>
#include <string>
using namespace std;
//template <typename T>
//class Array
//{
//private:
//	T* data;
//	int size;
//	int grow;
//public:
//	Array(): { data = NULL; size = 0; grow = 0 };
//	int GetSize();
//	void SetSize(int, int grow =1);
//	int GetUpperBound();
//	bool IsEmpty();
//	void FreeExtra();
//	void RemoveAll();
//	void Add(T, int);
//	~Array();
//};
class Base
{
	int x;
public:
	void setX(int px) { x = px; }
	void showX() { cout << x; }
};
class Derived : public Base
{
	int y;
public:
	void setY(int py) { y = py; }
	void showY() { cout << y; }
	void showXY(int x, int y)
	{
		setX(x);
		y = py;
	}

};