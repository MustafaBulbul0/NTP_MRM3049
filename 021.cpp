#include <iostream>
#include <vector>
#include <array>

using namespace std;


void maxMin(int dizi[], int boyut, int *maks, int *min)
{
	*maks = dizi[0];
	*min = dizi[0];

	for (int i = 0; i < boyut ; i++)
	{
		if (dizi[i] > *maks) *maks = dizi[i];
		if (dizi[i] < *min) *min = dizi[i];
	}
}

int main()
{
	int sayilar[5] = {45, 12, 78, 23, 56};
	int maksimum ,minimum;

	maxMin(sayilar, 5, &maksimum, &minimum);
	cout << "Maksimum: " << maksimum << endl;
	cout << "Minimum: " << minimum << endl;

	return 0;
}
