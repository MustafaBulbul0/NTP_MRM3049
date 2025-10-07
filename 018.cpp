#include <iostream>
#include <string>

using namespace std;

void	motorKontrol(bool calistir)
{
	if (calistir)
		cout << "Motor çalıştırıldı." << endl;
	else
		cout << "Motor durduruldu." << endl;
}

void motorKontrol(int pwm)
{
	if (pwm < 0 || pwm > 255)
		cout << "Hata: PWM değeri 0-255 arasında olmalı!" << endl;
	else
		cout << "Motor hızı: " << pwm << " PWM" << endl;
}

void motorKontrol(int pwm, bool ileri)
{
	if (pwm < 0 || pwm > 255)
	{
		cout << "Hata: PWM değeri 0-255 arasında olmalı!" << endl;
	return ;
	}
	string yon = ileri ? "İleri" : "Geri";
	cout << "Motor " << yon << " yönde, " << pwm << " PWM" << endl;
}

int main()
{
	motorKontrol(true);
	motorKontrol(150);
	motorKontrol(200, false);

	return (0);
}
