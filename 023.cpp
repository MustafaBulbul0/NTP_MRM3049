#include <iostream>
#include <string>

using namespace std;

void islemYap(int a, int b, int (*islem)(int, int))
{
	cout << "Sonuc: " << islem(a, b) << endl;
}

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
	islemYap(5, 3, topla);
	islemYap(5, 3, cikar);
	return 0;
}