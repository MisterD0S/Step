#include "less4.h"

Stack::Stack()
{
	top = empty;
}

void Stack::Push(int c)
{
	if (!IsFull())
		st[++top] = c;
}

int Stack::Pop()
{
	if (!IsEmpty())
		return st[top--];
	else
		return 0;
}

void Stack::Clear()
{
	top = empty;
}

bool Stack::IsEmpty()
{
	return top == empty;
}

bool Stack::IsFull()
{
	return top == full;
}

int Stack::GetCount()
{
	return top+1;
}

char InputStack(int count)
{
	char st;
	cout << count+1 << " элемент стека: ";
	cin >> st;
	return st;
}
