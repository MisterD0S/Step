#pragma once
#include <iostream>
using namespace std;
struct  Node
{
	int data;
	Node* prev;
	Node* next;
};
class byDirectional
{
private:
	Node* head = NULL;
	Node* tail = NULL;
	int count = 0;
	Node* CreateNode(int);
public:
	byDirectional();
	byDirectional(const byDirectional&);
	void AddtoHead(int);
	void AddtoTail(int);
	void RemoveFromHead();
	void RemoveFromTail();
	//int FindFirstByValue(int);
	//void SortBy();
	//void Inversion();
	Node* operator [] (int);
	friend ostream& operator << (ostream&, const byDirectional&);
	//~byDirectional();
};