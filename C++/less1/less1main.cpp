#include"less1.h"
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int count = MassivSize();
	Array Massiv1(count);
	Massiv1.OutputMassiv();
	cout << endl;
	Array Massiv2(Massiv1);
	Massiv2.OutputMassiv();
	Massiv1.ChangeSize();
	Massiv1.OutputMassiv();
	Massiv1.Sort();
	Massiv1.OutputMassiv();
	cout << "Минимальный элемент данного массива равен: " << Massiv1.MinElement() << endl;
	cout << "Максимальный элемент данного массива равен: " << Massiv1.MaxElement() << endl;
	system("cls");
	cout << "Матрица из массивов класса:" << endl;
	Array* Matrix = new Array( 5 , 4, 3, 2, 1);
	return 0;
}