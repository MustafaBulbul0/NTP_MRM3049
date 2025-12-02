#include <iostream>
#include <string>

using namespace std;

class person {
	public:
		person() {
			cout << "Person constructor called." << endl;
		}
		void yuru(){
			cout << "Person is walking." << endl;
		}
};

class ogrenci: virtual public person {  // virtual yokken hata veriyor
	public:
		ogrenci() {
			cout << "Ogrenci constructor called." << endl;
		}
};

class calisan: virtual public person {	// virtual yokken hata veriyor
	public:
		calisan() {
			cout << "Calisan constructor called." << endl;
		}
};

class yariZamanliOgrenci: public ogrenci, public calisan {
	public:
		yariZamanliOgrenci() {
			cout << "YariZamanliOgrenci constructor called." << endl;
		}
};

int main()
{
	yariZamanliOgrenci yzo;

	yzo.yuru();

	return 0;
}