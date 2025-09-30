#include <iostream>
#include <string>

using namespace std;

int main()
{
	float gerilim;
	float yüzde;
	const float max_gerilim = 5.0;

	cout << "Sensör gerilim değeri (0 - 5V): ";
	cin >>gerilim;

	if (gerilim >= 0 && gerilim <= 5)
		cout << "Sensör değeri: %" << (gerilim / 5 * 100);
	else
		cout << "HATA: Geçersiz gerilim değeri!";

	return (0);
}
