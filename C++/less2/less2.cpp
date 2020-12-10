#include "less2.h"
uint32_t NumberStorage::usedMemory = 0;
int NumberStorage::countObjekt = 0;
NumberStorage::NumberStorage(uint32_t _elementCount):
	storage{ _elementCount == 0 ? NULL : new int[_elementCount] }, elementsCount{ _elementCount }
{
	uint32_t used = elementsCount * sizeof(int);
	countObjekt++;
	usedMemory += used;
	cout << "Количетсво выделеной памяти в байтах: " << usedMemory << " в " << countObjekt << " блоках: " << endl;
	for (uint32_t i = 0; i < elementsCount; ++i)
		storage[i] = rand() % 10;
	Output();
}

NumberStorage::NumberStorage(const NumberStorage& copy):NumberStorage(copy.elementsCount)
{
	for (uint32_t i = 0; i < elementsCount; ++i)
		storage[i] = copy.storage[i];
	Output();
}

void NumberStorage::Output()
{
	cout << "Элементы " << countObjekt << "-го блока: ";
	for (uint32_t i = 0; i < elementsCount; ++i)
		cout << storage[i] << " ";
	cout << endl;
}

NumberStorage::~NumberStorage()
{
	delete[] storage;
	usedMemory -= elementsCount*sizeof(int);
	cout << "Блок удалён. Количество памяти осталось: " << usedMemory << endl;
}