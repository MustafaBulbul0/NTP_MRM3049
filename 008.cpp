#include <iostream>
#include <string>

using namespace std;

int main()
{
	const float	max_gerilim = 5.0;
	float		gerilim;
	float		yüzde;
	int			flag;

	flag = 1;
	while (flag)
	{
		cout << "Sensör gerilim değeri (0 - 5V): ";
		cin >>gerilim;
		if (gerilim >= 0 && gerilim <= 5)
		{
			cout << "Sensör değeri: %" << (gerilim / 5 * 100) << endl;
			flag = 0;
		}
		else
			cout << "HATA: Geçersiz gerilim değeri!" << endl;
	}
	return (0);
}
