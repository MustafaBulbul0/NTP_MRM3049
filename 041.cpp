#include <iostream>
#include <string>

using namespace std;

class kuvvet {
	private:
		double x, y;
	public:
		kuvvet(double x = 0, double y = 0) : x(x), y(y) {}
		kuvvet operator + (const kuvvet& other) const {
			return kuvvet(x + other.x, y + other.y);
		}
		void yazdir()const{
			cout << "Kuvvet: (" << x << ", " << y << ")" << endl;
		}
};

int main()
{
	kuvvet f1(3, 4);
	kuvvet f2(1, 2);
	kuvvet toplam = f1 + f2;

	cout << "Birinci kuvvet: ";
	f1.yazdir();
	cout << "ikinci kuvvet: ";
	f2.yazdir();
	cout << "Toplam kuvvet: ";
	toplam.yazdir();
	return 0;
}