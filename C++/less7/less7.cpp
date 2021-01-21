#include "less7.h"

Node* byDirectional::CreateNode(int value)
{
	Node* newNode = new Node;
	newNode->data = value;
	newNode->prev = NULL;
	newNode->next = NULL;
	count++;
	return newNode;
}

byDirectional::byDirectional()
{
	
}

byDirectional::byDirectional(const byDirectional& CopyList)
{
	this->count = CopyList.count;
	this->head = NULL;
	this->tail = NULL;
	if (CopyList.head == NULL)
	{
		return;
	}
	Node* temp = CopyList.head;
	for (int i = 0; i < CopyList.count; ++i)
	{
		AddtoTail(temp->data);
		temp = temp->next;
	}
}

void byDirectional::AddtoHead(int value)
{
	Node* newNode = CreateNode(value);
	if (head == NULL)
	{
		this->head = this->tail = newNode;
		return;
	}
	newNode->next = head;
	head->prev = newNode;
	head = newNode;
}

void byDirectional::AddtoTail(int value)
{
	Node* newNode = CreateNode(value);
	if (head == NULL)
	{
		this->head = this->tail = newNode;
		return;
	}
	newNode->prev = tail;
	tail->next = newNode;
	tail = newNode;
}

void byDirectional::RemoveFromHead()
{
	count--;
	if (head == tail)
	{
		delete head;
		tail = head = NULL;
		return;
	}
	Node* temp = head;
	head = head->next;
	delete temp;
}

void byDirectional::RemoveFromTail()
{
	count--;
	if (head == tail)
	{
		delete head;
		tail = head = NULL;
		return;
	}
	Node* temp = head;
	while (temp->next != tail)
	{
		temp = temp->next;
	}
	temp->next = NULL;
	delete tail;
	tail = temp;
}

Node* byDirectional::operator[](int index)
{
	if (index < 0 || index >= count)
	{
		return NULL;
	}
	int middle = count / 2;
	Node* temp;
	if (index < middle)
	{
		temp = this->head;
		for (int i = 0; i < index; ++i)
		{
			temp = temp->next;
		}
		return temp;
	}
	temp = this->tail;
	for (int i = count; i < count-index; ++i)
	{
		temp = temp->prev;
	}
	return temp;
}

ostream& operator<<(ostream& out, const byDirectional& list)
{
	Node* temp = list.head;
	while (temp != NULL)
	{
		out << temp->data << " ";
		temp = temp->next;
	}
	out << endl;
	return out;
}
