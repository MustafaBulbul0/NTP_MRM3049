#include <iostream>
#include <string>

using namespace std;

int main()
{
	float sayi1, sayi2;

	cout << "İki sayi giriniz: ";
	cin >> sayi1 >> sayi2;

	cout << "Toplam : " << (sayi1 + sayi2) << endl;
	cout << "Fark   : " << (sayi1 - sayi2) << endl;
	cout << "Çarpım : " << (sayi1 * sayi2) << endl;
	cout << "Bölüm  : " << (sayi1 / sayi2) << endl;

	return (0);
}
