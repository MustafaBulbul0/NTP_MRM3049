#include <iostream>
#include <string>

using namespace std;

class Enkoder{
	private:
		int adimSayisi;
	public:
		Enkoder() : adimSayisi(0) {}

		void operator++() {adimSayisi++;} // ++enkoder -> prefix

		void operator++(int) {adimSayisi++;} // enkoder++ -> postfix

		int oku() {return adimSayisi;}
};

int main()
{
	Enkoder enk;

	++enk;
	enk++;
	++enk;
	cout << "Enkoder adim sayisi: " << enk.oku() << endl;
	return 0;
}