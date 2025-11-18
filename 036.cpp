#include <iostream>
#include <string>

using namespace std;

class Ornek{
	private:
		static int sayac;
	public:
		Ornek() {
			sayac++;
		}
		static void goster() {
			cout << "Oluşturulan nesne sayısı: " << sayac << endl;
		}
};

int Ornek::sayac = 0;

int main()
{
	Ornek o1;
	Ornek o2;
	Ornek o3;

	Ornek::goster();

	return 0;
}