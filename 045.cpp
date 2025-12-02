#include <iostream>
#include <string>

using namespace std;

class sekil {
	public:
		virtual void ciz() = 0;

		virtual ~sekil() {}

		void bilgi() {
			cout << "Bu bir sekildir." << endl;
		}
};

class daire : public sekil {
	public:
		void ciz() override {
			cout << "Daire ciziliyor..." << endl;
		}
};

class kare : public sekil {
	public:
		void ciz() override {
			cout << "Kare ciziliyor..." << endl;
		}
};

int main()
{
	sekil* sekiller[] = {new daire(), new kare()};

	for (sekil* s : sekiller) {
		s->ciz();
		s->bilgi();
		delete s;
	}

	return 0;
}