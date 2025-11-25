#include <iostream>

using namespace std;

class sekil{
	private:
		int genislik;
		int yukseklik;

	public:
		sekil (int g = 0 ,int y = 0) : genislik(g), yukseklik(y){
			cout << "Sekil sinifi yapilandiricisi cagrildi." << endl;
		}
		void setGenislik(int g){
			genislik = g;
		}
		void setYukseklik(int y){
			yukseklik = y;
		}
		int getGenislik(){
			return genislik;
		}
		int getYukseklik(){
			return yukseklik;
		}
};

class deger
{
	private:
		int birimDeger;
	public:
		void setBirimDeger(int d){
			birimDeger = d;
		}
		int getBirimDeger(){
			return birimDeger;
		}
		int hesaplaDeger( int alan){
			return alan * birimDeger;
		}
};

class dikdortgen: public sekil, public deger
{
	public:
		dikdortgen(int g = 0, int y = 0) : sekil(g, y) {}
		int alanHesapla(){
			return getGenislik() * getYukseklik() * hesaplaDeger(4);
		}
};


int main()
{

	dikdortgen d(3, 2);

	d.setBirimDeger(5);
	d.setGenislik(3);
	d.setYukseklik(2);

	cout << d.alanHesapla();

	return 0;
}