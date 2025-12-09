#include <iostream>
#include <cmath>

using namespace std;

class Sekil {
	protected:
		string renk;
	public:
		Sekil(string r) : renk (r){}		

	virtual double alanHesapla() = 0;
	virtual double cevreHesapla() = 0;
	virtual void bilgiYazdir() = 0;

	string getRenk() const {
		return renk;
	}
};

class Daire : public Sekil {
	private:
		double yaricap;
	public:
		Daire (string r, double y) : Sekil(r), yaricap(y){}

		double alanHesapla() override  {return 3.24 * yaricap * yaricap;}

		double cevreHesapla() override {return 2 * 3.14 * yaricap;}
		
		void bilgiYazdir() override {
			cout << "Daire - Renk: " << renk << endl;
			cout << "Yaricap: " << yaricap << endl;
			cout << "Alan: " << alanHesapla() << endl;
			cout << "Cevre: " << cevreHesapla() << endl;
		}
};

class Dikdortgen : public Sekil {
	private:
		double en, boy;
	public:
		Dikdortgen(string r, double e, double b) : Sekil(r), en(e), boy(b) {}

		double alanHesapla() override {return en * boy;}

		double cevreHesapla() override {return 2 * (en + boy);}

		void bilgiYazdir() override {
			cout << "Dikdortgen - Renk: " << renk << endl;
			cout << "En: " << en << ", Boy: " << boy << endl;
			cout << "Alan: " << alanHesapla() << endl;
			cout << "Cevre: " << cevreHesapla() << endl;
		}
};

int main()
{
	Sekil* sekilPtr[] = {new Daire("Kirmizi", 3), new Dikdortgen("Mavi", 4, 5)};

	for (Sekil* sekil : sekilPtr) {
		sekil->bilgiYazdir();
		cout << endl;
		delete sekil;
	}

	delete[] sekilPtr;

	return 0;
}