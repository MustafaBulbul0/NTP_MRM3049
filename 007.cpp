#include <iostream>
#include <string>

using namespace std;

int main()
{
	float rpm;
	float acisal_hiz;
	const float pi = 3.14159;

	cout << "Motor RPM değerini giriniz: ";
	cin >> rpm;

	acisal_hiz = 2 * pi * rpm / 60;

	cout << "Açısal hız = " << acisal_hiz << " rad/s" << endl;

	return (0);
}
