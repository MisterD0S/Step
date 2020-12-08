#include "less1.h"

Array::Array(int _size)
{
	size = _size;
	Massiv = new int[size];
	InputMassiv();
}

Array::Array(int* _Massiv)
{
	size = _msize(_Massiv) / 4;
	Massiv = new int[size];
	for (int i = 0; i < size; ++i)
		Massiv[i] = _Massiv[i];
}

Array::Array(const Array& _Massiv)
{
	size = _Massiv.size;
	Massiv = new int[size];
	for (int i = 0; i < size; ++i)
		Massiv[i] = _Massiv.Massiv[i];
}

void Array::InputMassiv()
{
	for (int i = 0; i < size; ++i)
		Massiv[i] = rand() % 20;
}

void Array::OutputMassiv()
{
	cout << "Полученный массив:" << endl;
	for (int i = 0; i < size; ++i)
		cout << Massiv[i] << " ";
	cout << endl;
}

void Array::ChangeSize()
{
	int change;
	cout << endl;
	cout << "Изменение размера массива" << endl;
	cout << "Положительное значение - увелечение массива на введёное значение" << endl;
	cout << "Отрицательное значение - уменьшение массива на введёное значеник" << endl;
	cout << "Введите вечелечину изменения массива: ";
	cin >> change;
	if ((size + (change)) < 0)
		return;
	int tempsize = size + (change);
	int* TempMassiv = new int[tempsize];
	if (change > 0)
	{
		for (int i = 0; i < tempsize; ++i)
			if (i < size)
				TempMassiv[i] = Massiv[i];
			else
				TempMassiv[i] = rand() % 30;
	}
	else
	{
		for (int i = 0; i < tempsize; ++i)
			TempMassiv[i] = Massiv[i];
	}
	delete[]Massiv;
	size = tempsize;
	Massiv = TempMassiv;
}

void Array::Sort()
{
	cout << endl;
	cout << "Функция сортировки массива" << endl;
	cout << "Выберете направление сортировки (возрастание  - u, убывание d, не делать сортировку - n): ";
	char choise;
	cin >> choise;
	bool key = false;
	switch (choise)
	{
	case('u'):
		while (key!=true)
		{
			key = true;
			for (int i = 0; i < size - 1; ++i)
			{
				if (Massiv[i] > Massiv[i + 1])
				{
					int buffer = Massiv[i];
					Massiv[i] = Massiv[i + 1];
					Massiv[i + 1] = buffer;
					key = false;
				}
			}
		}
	case('d'):
		while (key != true)
		{
			key = true;
			for (int i = 0; i < size - 1; ++i)
			{
				if (Massiv[i] < Massiv[i + 1])
				{
					int buffer = Massiv[i];
					Massiv[i] = Massiv[i + 1];
					Massiv[i + 1] = buffer;
					key = false;
				}
				else
					key = true;
			}
		}
	case('n'):
		return;
	default:
		break;
	}
}

int Array::MinElement()
{
	int min = Massiv[0];
	for (int i = 1; i < size; ++i)
	{
		if (Massiv[i] < min)
			min = Massiv[i];
	}
	return min;
}

int Array::MaxElement()
{
	int max = Massiv[0];
	for (int i = 1; i < size; ++i)
	{
		if (Massiv[i] > max)
			max = Massiv[i];
	}
	return max;
}

Array::~Array()
{
	delete[] Massiv;
}

int MassivSize()
{
	cout << "Введите размерность массива: ";
	int c;
	cin >> c;
	cout << endl;
	return c;
}