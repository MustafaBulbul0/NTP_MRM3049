#include <iostream>
#include <string>

using namespace std;

class sekil {
	public:
		virtual void ciz(){
			cout << "Sekil ciziliyor..." << endl;	
		}
};

class dikdortgen : public sekil {
	public:
		void ciz() override {
			cout << "Dikdortgen ciziliyor..." << endl;
		}
};

class cember : public sekil {
	public:
		void ciz() override {
			cout << "Cember ciziliyor..." << endl;
		}
};

int main()
{
	sekil* s1 = new dikdortgen();
	sekil* s2 = new cember();
	
	s1->ciz();
	s2->ciz();
	
	delete s1;
	delete s2;
	return 0;
}