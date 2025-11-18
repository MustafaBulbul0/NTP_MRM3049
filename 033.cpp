#include <iostream>
#include <string>

using namespace std;

class DisSinif {
	private:
		int veri;
	public:
		DisSinif(int deger) : veri(deger) {}

		class IcSinif {
			public:
				void yazdir(const DisSinif& disObj) {
					cout << "DisSinif'in veri üyesi: " << disObj.veri << endl;
				}
		};
};

int main()
{
	DisSinif disObj(42);
	DisSinif::IcSinif icObj;
	icObj.yazdir(disObj);

	return 0;
}