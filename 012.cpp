#include <iostream>

using namespace std;

int main()
{
	int	n;
	int	toplam;

	cout << "N değerini giriniz: ";
	cin >> n;
	toplam = 0;
	for (int i = 0 ; i <= n ; i++)
		toplam += i;

	cout << "Toplam: " << toplam << endl;
	return (0);
}
