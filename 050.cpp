#include <iostream>
#include <string>

using namespace std;

class Konum {
	public:
		double x, y;
		Konum(double _x, double _y) : x(_x), y(_y) {}

		Konum operator+(const Konum& diger) {
			Konum yeniKonum (0, 0);
			yeniKonum.x = this->x + diger.x;
			yeniKonum.y = this->y + diger.y;
			return yeniKonum;
		}
		void yazdir()
		{
			cout << "Konum: (" << x << ", " << y << ")" << endl;
		}
};



int main()
{
	Konum k1(1, 2);
	Konum k2(3, 4);

	Konum k3 = k1 + k2;
	k3.yazdir();

	return 0;
}