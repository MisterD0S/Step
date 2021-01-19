#pragma once
#include <iostream>
using namespace std;
template <typename T>
struct Node
{
	T data;
	Node* Next;
};
template <class T>
class List
{
private:
	Node<T>* head = NULL;
	Node<T>* tail = NULL;
	int count = 0;
	Node* CreateNode(int);
public:

	void AddtoHead(int);
	void AddtoTail(int);
	void AddtoIndex(int, int);
	void RemoveFromTail();
	void RemoveFromHead();
	void RemoveFromIndex(int);
	void PrintList();
};