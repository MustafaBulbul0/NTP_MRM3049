#include <iostream>
#include <string>

using namespace std;

int topla(int a, int b);
int cıkar(int a, int b);
void sonucYazdır(int sonuc);

int main()
{
	int	a, b, top, cık;

	cout << "İlk değeri giriniz: ";
	cin >> a;
	cout << "İkinci değeri giriniz: ";
	cin >> b;

	sonucYazdır(topla(a, b));
	sonucYazdır(cıkar(a, b));

	return (0);
}

int topla(int a, int b){return a + b;};
int cıkar(int a, int b){return a - b;};
void sonucYazdır(int sonuc){cout << "Sonuç: " << sonuc << endl;};


