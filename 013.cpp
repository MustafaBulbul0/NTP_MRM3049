#include <iostream>
#include <string>

using namespace std;

int main()
{
	int satir;
	int sutun;

	cout << "Satır sayısı: ";
	cin >> satir;
	cout << "Sütun sayısı: ";
	cin >> sutun;

	for (int  i = 0 ; i <= satir ; i++)
	{	for (int j = 1 ; j <= sutun ; j++)
			cout << "* ";
		cout << endl;
	}
	return (0);
}
