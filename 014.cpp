#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));

	int gizli_sayi = rand() % 100 + 1;
	int tahmin;
	int deneme_sayisi = 0;

	cout << "1-100 arası bir sayı tuttum. Tahmin edin!" << endl;

	while (true)
	{
		cout << "Tahmininiz: ";
		cin >> tahmin;
		deneme_sayisi++;
	
		if (tahmin < gizli_sayi)
			cout << "Daha büyük bir sayı söyleyin!" << endl;
		else if (tahmin > gizli_sayi)
			cout << "Daha küçük bir sayı söyleyin!" << endl;
		else {
			cout << "Tebrikler! :" << deneme_sayisi;
			break ;
		}
	}

	return (0);
}
