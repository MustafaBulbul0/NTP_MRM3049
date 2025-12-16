#include <iostream>
#include <string>

using namespace std;

class MotorHiz{
	private:
		double hiz;
	public:
		MotorHiz(double h = 0) : hiz(h) {}

		MotorHiz operator+(const MotorHiz& diger) {
			return MotorHiz(hiz + diger.hiz);
		}
		MotorHiz operator/(double bolen) {
		if (bolen != 0) {
			return MotorHiz(hiz / bolen);
		}
		return MotorHiz(0);
		}
		bool operator>(const MotorHiz& diger) {
			return hiz > diger.hiz;
		}

		bool operator<(const MotorHiz& diger) {
			return hiz < diger.hiz;
		}

		MotorHiz& operator++() {
			hiz += 0.1;
			return *this;
		}
};

int main()
{
	MotorHiz m1(5);
	MotorHiz m2(7.5);

	MotorHiz toplam = m1 + m2;
	MotorHiz ortalama = toplam / 2;

	if (m1 > m2)
		cout << "m1 motor hizi m2'den daha yuksek." << endl;
	else if (m1 < m2)
		cout << "m1 motor hizi m2'den daha dusuk." << endl;
	else
		cout << "m1 ve m2 motor hizlari esit." << endl;

	return 0;
}