#include "less6.h"

Node* List::CreateNode(int value)
{
	Node* newNode = new Node;
	newNode->data = value;
	newNode->Next = NULL;
	count++;
	return newNode;
}

void List::AddtoHead(int value)
{
	// создаем элементсписка
	Node* newNode = CreateNode(value);
	// если список пуст
	if (head == NULL)
	{
		this->head = this->tail = newNode;
		return;
	}
	//прописываем ссылку на следующий элемент
	newNode->Next = this->head;
	// переназначаем голову
	this->head = newNode;
}

void List::AddtoTail(int value)
{
	// создаем элементсписка
	Node* newNode = CreateNode(value);
	// если список пуст
	if (head == NULL)
	{
		this->head = this->tail = newNode;
		return;
	}
	//переназначаем хвост
	tail->Next = newNode;
	tail = newNode;
}

void List::AddtoIndex(int value, int index)
{
	if (index <= 0)
	{
		this->AddtoHead(value);
		return;
	}
	if (index >= this->count)
	{
		this->AddtoTail(value);
		return;
	}
	Node* newNode = CreateNode(value);
	Node* temp = this->head;
	for (int i = 1; i < index-1; ++i)
	{
		temp = temp->Next;
	}
	newNode->Next = temp->Next;
	temp->Next = newNode;
}

void List::RemoveFromTail()
{
	count--;
	if (head == tail)
	{
		delete head;
		tail = head = NULL;
		return;
	}
	Node* temp = head;
	while (temp->Next != tail)
	{
		temp = temp->Next;
	}
	temp->Next = NULL;
	delete tail;
	tail = temp;
}

void List::RemoveFromHead()
{
	count--;
	if (head == tail)
	{
		delete head;
		tail = head = NULL;
		return;
	}
	Node* temp = head;
	head = head->Next;
	delete temp;
}

void List::RemoveFromIndex(int index)
{
	if (index <= 0)
	{
		RemoveFromHead();
		return;
	}
	if (index >= this->count)
	{
		RemoveFromTail();
		return;
	}
	Node* prev = this->head;
	for (int i = 1; i < index-1; ++i)
	{
		prev = prev->Next;
	}
	Node* temp = prev->Next->Next;
	delete prev->Next;
	prev->Next = temp;
}

void List::PrintList()
{
	Node* temp = this->head;
	//for (int i = 0; i < this->count; ++i)
	//{
	//	cout << temp->data << "\t";
	//	temp = temp->Next;
	//}
	while (temp != NULL)
	{
		cout << temp->data << "\t";
		temp = temp->Next; //сдвиг вправо
	}
	cout << endl;
}
