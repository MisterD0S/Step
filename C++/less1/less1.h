#pragma once
#include <iostream>
#include <ctime>
using namespace std;
class Array
{
private:
	int size;
	int* Massiv;
public:
	Array(int);
	Array(int* );
	Array(const Array&);
	void InputMassiv();
	void OutputMassiv();
	void ChangeSize();
	void Sort();
	int MinElement();
	int MaxElement();
	~Array();
};
int MassivSize();