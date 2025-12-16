#include <iostream>
#include <string>

using namespace std;

class Kuvvet{
	double x, y;
	public:
		Kuvvet(double _x, double _y) : x(_x), y(_y) {}

		Kuvvet operator+(const Kuvvet& k) {
			return Kuvvet(x + k.x, y + k.y);
		}

		Kuvvet operator*(const Kuvvet& k) {
			return Kuvvet(x * k.x, y * k.y);
		}

		friend ostream& operator<<(ostream& os, const Kuvvet& k) {
			os << "F(" << k.x << "N, " << k.y << "N)";
			return os;
		}
};

int main()
{
	Kuvvet k1(5, 10);
	Kuvvet k2(15, 20);
	Kuvvet k3 = k1 + k2;
	Kuvvet k4 = k1 * k2;

	cout << "Toplam Kuvvet: " << k3 << endl;
	cout << "Carpim Kuvvet: " << k4 << endl;
	return 0;
}