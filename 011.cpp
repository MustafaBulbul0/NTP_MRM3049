#include <iostream>
#include <string>

using namespace std;

int main()
{
	float gerilim, akim, direnç, guc;
	int hesap_turu, flag;

	cout << "=== ELEKTRONİK DEVRE HESAPLAMA ===" << endl;
	do{	
		flag = 0;
		cout << "1. Ohm Kanunu (V = I x R)" << endl;
		cout << "2. Güç Hesabı (P = V x I)" << endl;
		cout << "3. Direnç Hesabı (R = V / I)" << endl;
		cout << "Hesap türünü seçiniz (1-3): ";
		cin >> hesap_turu;
		if (hesap_turu == 1)
		{
			cout << "Akım (A): ";
			cin >> akim;
			cout << "Direnç (R): ";
			cin >> direnç;
			gerilim = akim * direnç;
			cout << "Gerilim = " << gerilim << " V" << endl;
		}
		else if (hesap_turu == 2)
		{
			cout << "Gerilim (V): ";
			cin >> gerilim;
			cout << "Akım (A): ";
			cin >> akim;
			guc = gerilim * akim;
			cout << "Güç (P) = " << guc << " W" << endl;
		}
		else if (hesap_turu == 3)
		{
			cout << "Gerilim (V): ";
			cin >> gerilim;
			cout << "Akım (A): ";
			cin >> akim;
			direnç = gerilim / akim;
			cout << "Direnç (R) = " << direnç << " Ohm" << endl;
		}
		else
		{
			cout << "Geçersiz seçim!" << endl << endl;
			flag = 1;
		}
	}
	while (flag);

	return (0);
}
