#include <iostream>
#include <string>

using namespace std;

float onceki_hata = 0;
float integral = 0;

float pifHesapla(float hedef, float mevcut, float Kp, float Ki, float Kd)
{
	float hata = hedef - mevcut;
	float P = Kp * hata;
	integral += hata;
	float I = Ki * integral;
	float turev = hata - onceki_hata;
	float D = Kd * turev;
	float pwm = P + I + D;
	onceki_hata = hata;
	return pwm;
}

int main()
{

	return (0);
}
