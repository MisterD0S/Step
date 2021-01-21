#include "less7.h"

int main()
{
	byDirectional List1;
	for (int i = 0; i < 10; ++i)
		List1.AddtoHead(i);
	cout << "List 1: " << List1 << endl;
	byDirectional List2;
	for (int i = 0; i < 10; ++i)
		List2.AddtoTail(i);
	cout << "List 2: " << List2 << endl;
	byDirectional List3(List1);
	cout << "List 3: " << List3 << endl;
	List1.RemoveFromHead();
	cout << "List 1: " << List1 << endl;
	List2.RemoveFromTail();
	cout << "List 2: " << List2 << endl;
	cout << "Input index: ";
	int index;
	cin >> index;
	index -= 1;
	cout << "List1[" <<index+1<< "] = " << List1[index]->data << endl;
}