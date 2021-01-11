#include"less2.h"
void func(string1 cl) {
	cl.print(cl);
}
int main(int argc, char* argv[])
{

	if (argc> 1 && argv!=nullptr) {
		setlocale(LC_ALL, "Russian");
		string1 A("ads");
		string1 B{ A };
		B.print(B);
		char* a = new char[strlen(argv[])+1];
		strcpy_s(a, strlen(argv[]) + 1, argv[]);
		B.stringRead(a);
		B.print(B);
		
	}

}

