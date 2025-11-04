#include <iostream>
#include <string>

using namespace std;

int topla(int a, int b)
{
	return a + b;
}

int cikar(int a, int b)
{
	return a - b;
}

int main()
{
	int (*islem)(int, int);
	islem = topla;
	cout << "Toplama: " << islem(5, 3) << endl;
	islem = cikar;
	cout << "Cikarma: " << islem(5, 3) << endl;
	return 0;
}