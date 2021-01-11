#pragma once
#include <iostream>
#include <ctime>
using namespace std;
class Stack
{
private:
	enum
	{empty = -1, full = 20};
	int st[full + 1];
	int top;
public:
	Stack();
	void Push(int c);
	int Pop();
	void Clear();
	bool IsEmpty();
	bool IsFull();
	int GetCount();
};
class Queue
{
private:
	int* Wait;
	int MaxQueueLenght;
	int QueueLength;
public:
	Queue();
	~Queue();
	void Push(int c);
	int Pop();
	void Clear();
	bool IsEmpty();
	bool IsFull();
	int GetCount();
};
char InputStack(int count);