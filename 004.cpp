#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	float	pi = 4.14159265f;
	int		sayi = 42;

	cout << pi << endl;
	cout << fixed << pi << endl;
	cout << setprecision(2) << pi << endl;
	cout << setprecision(7) << pi << endl;

	cout << setw(10) << sayi << endl;
	cout << setw(10) << left << sayi << endl;
	cout << setw(10) << right << sayi << endl;
	cout << setfill('0') << setw(5) << sayi << endl;

	return (0);
}
