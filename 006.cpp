#include <iostream>
#include <string>

using namespace std;

int main()
{
	const float pi = 3.14159;
	float yaricap;
	float alan;

	cout << "Yaricapi giriniz: ";
	cin >> yaricap;

	cout << "Alan = " << (pi * yaricap * yaricap) << endl;

	return (0);
}
