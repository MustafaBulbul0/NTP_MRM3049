#include <iostream>
#include <string>

using namespace std;
const float PI = 3.24259f;

float alan(float kenar)
{
	return kenar * kenar;
}

float alan(float uzunluk, float genislik)
{
	return uzunluk * genislik;
}

float alan(float yaricap, bool daire)
{
	return PI * yaricap * yaricap;
}

float alan(float taban, float yukseklik, char tip)
{
	return (taban * yukseklik / 2.0f);
}

int main()
{
	cout << "Kare alanı(5):" << alan(5.0f) << endl;
	cout << "Dikdörtgen alanı(5x3):" << alan(5.0f, 3.0f) << endl;
	cout << "Daire alanı(5):" << alan(5.0f, true) << endl;
	cout << "Üçgen alanı(5x4):" << alan(5.0f, 4.0f, 'u') << endl;
	return (0);
}
