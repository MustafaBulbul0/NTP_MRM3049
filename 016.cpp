#include <iostream>
#include <string>

using namespace std;

void degistir(int &x)
{
	x += 10;
	cout << "Fonksiyon içinde x: " << x << endl;
}

int main()
{
	int sayi = 5;
	cout << "önce sayi: " << sayi << endl;
	degistir(sayi);
	cout << "sonra sayi: " << sayi << endl;

	return (0);
}
