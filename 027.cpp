#include <iostream>
#include <string>

using namespace std;

const int ZAMAN_ADIMI = 20;

struct MotorVeri {
	float zaman;
	float hiz;
	float tork;
};

void motorProfilOlustur(MotorVeri profil[], int boyut) {
	for (int i = 0; i < boyut; i++) {
		if (i < boyut / 4)
		{
			profil[i].hiz = i * 100.0f;
			profil[i].tork = 5.0f;
		}
		else if (i < 3 * boyut / 4)
		{
			profil[i].hiz = (boyut / 4) * 100.0f;
			profil[i].tork = 2.0f;
		}
		else
		{
			profil[i].hiz = (boyut - i) * 100.0f;
			profil[i].tork = -3.0f;
		}
	}
}

void profilYazdir(const MotorVeri profil[], int boyut) {
	cout<< "\nZaman(s)\tHiz(rpm)\tTork(Nm)" << endl;
	cout << "=======================================" << endl;
	
	for (int i = 0; i < boyut; i++) {
		cout << profil[i].zaman << "\t\t"
			 << profil[i].hiz << "\t\t"
			 << profil[i].tork << endl;
	}
}

int main()
{
	MotorVeri motorProfil[ZAMAN_ADIMI];
	motorProfilOlustur(motorProfil, ZAMAN_ADIMI);
	profilYazdir(motorProfil, ZAMAN_ADIMI);

	return 0;
}