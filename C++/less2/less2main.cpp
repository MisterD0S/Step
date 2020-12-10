#include"less2.h"
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	cout << "Введите количество элементов в блоке: ";
	uint32_t k;
	cin >> k;
	//NumberStorage::SetNumber();
	NumberStorage Block1(k);
	//NumberStorage Block2(k);
	//NumberStorage Block3(k);
	NumberStorage BlockCopy(Block1);
	return 0;
}