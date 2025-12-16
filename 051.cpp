#include <iostream>
#include <string>

using namespace std;

class Batarya {
	private:
		int sarjYuzdesi;
	public:
		Batarya(int seviye): sarjYuzdesi(seviye){}

		bool operator==(const Batarya& diger){
			return this->sarjYuzdesi == diger.sarjYuzdesi;
		}

		bool operator<(const Batarya& diger){
			return this->sarjYuzdesi < diger.sarjYuzdesi;
		}
};

int main()
{
	Batarya b1(70);
	Batarya b2(50);

	if(b1 == b2)
		cout << "Batarya seviyeleri eşit." << endl;
	else if (b1 < b2)
		cout << "b1 bataryası b2'den az şarjlı." << endl;
	else
		cout << "b1 bataryası b2'den daha fazla şarjlı." << endl;
	
	return 0;
}