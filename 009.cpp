#include <iostream>
#include <string>

using namespace std;

int main()
{
	string ad, soyad;
	int yas;
	float kilo, boy;

	cout << "=== KİŞİSEL BİLGİ FORMU ===" << endl;
	
	cout << "ADINIZ: ";
	cin >> ad;
	cout << "SOYADINIZ: ";
	cin >> soyad;
	cout << "YASINIZ: ";
	cin >> yas;
	cout << "KILONUZ (kg): ";
	cin >> kilo;
	cout << "BOYUNUZ (m): ";
	cin >> boy;

	cout << "BMI" << (kilo / (boy * boy)) << endl;
	

	return (0);
}
