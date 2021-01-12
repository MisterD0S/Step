#include "less4.h"
#include <iostream>
using namespace std;
//Stack::Stack()
//{
//	top = empty;
//}
//
//void Stack::Push(int c)
//{
//	if (!IsFull())
//		st[++top] = c;
//}
//
//int Stack::Pop()
//{
//	if (!IsEmpty())
//		return st[top--];
//	else
//		return 0;
//}
//
//void Stack::Clear()
//{
//	top = empty;
//}
//
//bool Stack::IsEmpty()
//{
//	return top == empty;
//}
//
//bool Stack::IsFull()
//{
//	return top == full;
//}
//
//int Stack::GetCount()
//{
//	return top+1;
//}
//
//char InputStack(int count)
//{
//	char st;
//	cout << count+1 << " элемент стека: ";
//	cin >> st;
//	return st;
//}

Queue::Queue(int size) : MaxQueueLenght(size), Wait(size > 0 ? new int [size] : NULL)
{}

Queue::~Queue()
{
	delete[] Wait;
}

void Queue::Push(int c)
{
	if (!IsFull())
		Wait[QueueLength-1] = c;
}

bool Queue::Pop()
{
	if (IsEmpty())
		return false;
	int value = this -> Wait[0];
	for (int i = 1; i < this -> QueueLength - 1; ++i)
		this -> Wait[i] = this -> Wait[i + 1];
	this -> Wait[QueueLength - 1] = value;
	return true;
}

bool Queue::IsEmpty()
{
	return QueueLength == 0;
}

bool Queue::IsFull()
{
	return QueueLength==MaxQueueLenght;
}

int Queue::GetCount()
{
	return QueueLength+1;
}

void Game::FillWaits()
{
	for (int i = 0; i < this->countWaits; ++i)
	{
		int k = 0;
		while (!this -> waits[i].IsFull())
		{
			this->waits[i].Push(k++);
		}
	}
}

Game::Game(int count): countWaits(count), waits(new Queue[count])
{
	FillWaits();
}

Game::~Game()
{
	delete[] this->waits;
}

ostream& operator<<(ostream& out, const Game& game)
{
	for (int i = 0; i < game.countWaits; ++i)
	{
		out << game.waits[i] << endl;
	}
	return out;

}
