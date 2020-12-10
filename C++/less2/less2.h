#pragma once
#include <iostream>
#include <ctime>
using namespace std;
class NumberStorage
{
private:
	int* storage;
	uint32_t elementsCount;
	static uint32_t usedMemory;
	static int countObjekt;
public:
	static void SetNumber(uint32_t value = 0) { usedMemory = value; }
	static uint32_t GetNumber() { return usedMemory; }
	NumberStorage(uint32_t);
	NumberStorage(const NumberStorage&);
	void Output();
	~NumberStorage();
};