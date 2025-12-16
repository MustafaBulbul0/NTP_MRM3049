#include <iostream>
#include <cmath>

using namespace std;

class Konum3D {
	private:
		double x, y, z;
	public:
		Konum3D(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}
		Konum3D operator+(const Konum3D& diger) {
			return Konum3D(x + diger.x, y + diger.y, z + diger.z);
		}

		Konum3D operator-(const Konum3D& diger) {
			return Konum3D(x - diger.x, y - diger.y, z - diger.z);
		}

		double operator%(const Konum3D& diger) {
			double dx = x - diger.x;
			double dy = y - diger.y;
			double dz = z - diger.z;
			return sqrt(dx * dx + dy * dy + dz * dz);
		}

};


int main()
{
	Konum3D baslangicKonuu(1, 2, 3);
	Konum3D hedefKonum(4, 5, 6);
	Konum3D toplam = baslangicKonuu + hedefKonum;
	Konum3D fark = hedefKonum - baslangicKonuu;
	double uzaklik = baslangicKonuu % hedefKonum;

	

	return 0;
}