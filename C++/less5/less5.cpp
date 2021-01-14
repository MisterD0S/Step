#include "less5.h"

Deq::Deq(int size) : maxLength(size), DeQueue(size > 0 ? new int[size] : NULL)
{
}

Deq::~Deq()
{
	delete[] DeQueue;
}

void Deq::PushFront()
{
	if (IsFull())
		return;
	queuLength++;
	for (int i = 0; i < queuLength - 1; ++i)
		DeQueue[i + 1] = DeQueue[i];
	DeQueue[0] = rand() % 20;
}

void Deq::PushBack()
{
	if (IsFull())
		return;
	DeQueue[queuLength + 1] = rand() % 20;
	queuLength++;
}

bool Deq::PopBack(int& backDeq)
{
	if (IsEmpty())
		return false;
	backDeq = DeQueue[queuLength - 1];
	queuLength--;
}

void Deq::ViewBack()
{
	if (IsEmpty())
		return;
	cout << DeQueue[queuLength - 1];
}

bool Deq::IsEmpty()
{
	return queuLength == 0;
}

bool Deq::IsFull()
{
	return queuLength == maxLength;
}

void Deq::Clear()
{
	queuLength = 0;
}

int Deq::SizeQueue()
{
	return queuLength+1;
}

ostream& operator<<(ostream& out, const Deq& _deq)
{
	out << _deq.DeQueue[];
}
