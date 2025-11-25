#include <iostream>
#include <string>

using namespace std;

class vektor3d {
	private:
		double x, y, z;
	public:
		vektor3d(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}
		vektor3d operator + (const vektor3d& other) const {
			return vektor3d(x + other.x, y + other.y, z + other.z);
		}
		vektor3d operator - (const vektor3d& other) const {
			return vektor3d(x - other.x, y - other.y, z - other.z);
		}
		
		friend ostream& operator<<(ostream& os, const vektor3d& v) {
			os << "Vektor: (" << v.x << ", " << v.y << ", " << v.z << ")";
			return os;
		}
};

int main()
{
	vektor3d v1(3, 4, 5);
	vektor3d v2(1, 2, 3);
	vektor3d toplam = v1 + v2;
	vektor3d fark = v1 - v2;
	
	cout << "Birinci vektor: ";
	cout << v1 << endl;
	cout << "Ikinci vektor: ";
	cout << v2 << endl;

	cout << "Toplam: ";
	cout << toplam << endl;
	cout << "Fark: ";
	cout << fark << endl;
	return 0;
}