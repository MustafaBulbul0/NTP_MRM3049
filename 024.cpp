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

int carp(int a, int b)
{
	return a * b;
}

int main()
{
	int (*islem[3])(int, int) = {topla, cikar, carp};
	for (int i = 0; i < 3; i++)
	{
		cout << "Sonuc: " << islem[i](5, i + 3) << endl;
	}
	return 0;
}