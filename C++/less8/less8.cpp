#include "less8.h"

//template<typename T>
//inline int Array<T>::GetSize()
//{
//	return size;
//}
//
//template<typename T>
//void Array<T>::SetSize(int size, int grow)
//{
//	this->size = size;
//	T* temp = new T[size];
//	if (data != NULL)
//	{
//		for (int i = 0; i < this->size; ++i)
//		{
//			temp[i] = data[i];
//		}
//	}
//	if (data)
//		dekete[] data;
//	data = temp;
//}
//
//template<typename T>
//bool Array<T>::IsEmpty()
//{
//
//}
//
//template<typename T>
//void Array<T>::FreeExtra()
//{
//	int index = GetUpperBound();
//	if (index > -1)
//	{
//		T* temp = new T[size - index];
//		for (int i = 0; i < size - index; ++i)
//		{
//			temp[i] = data[i];
//		}
//	}
//	delete[] data;
//	data = temp;
//	this->size = size - index;
//}
//
//template<typename T>
//void Array<T>::Add(T value, int count)
//{
//	if (count < size)
//	{
//		data[count] = value;
//	}
//	else
//	{
//		int newSize = size + grow;
//		T* temp = new T[newSize];
//		for (int i = 0; i < newSize; ++i)
//		{
//			temp[i] = data[i];
//		}
//		temp[size] = value;
//		delete[] data;
//		data = temp;
// 	}
//	++count;
//}
//
//template<typename T>
//Array<T>::~Array()
//{
//
//}
