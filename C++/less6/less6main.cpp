#include"less6.h"
int main()
{
	List<int> List;
	for (int i = 0; i < 10; ++i)
		List.AddtoTail(i);
	List.PrintList();
	int x;
	cin >> x;
	List.AddtoIndex(x, x);
	List.PrintList();
	List.RemoveFromHead();
	List.PrintList();
	List.RemoveFromTail();
	List.PrintList();
	cin >> x;
	List.RemoveFromIndex(x);
	List.PrintList();
	return 0;
}