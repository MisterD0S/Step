#pragma once
#include <iostream>
using namespace std;
class Deq
{
private:
	int* DeQueue;
	int maxLength;
	int queuLength;
public:
	Deq(int = 10);
	~Deq();
	void PushFront();
	void PushBack();
	bool PopFront();
	bool PopBack(int&);
	void ViewFront();
	void ViewBack();
	bool IsEmpty();
	bool IsFull();
	void Clear();
	int SizeQueue();
	friend ostream& operator<<(ostream&, const Deq&);
};