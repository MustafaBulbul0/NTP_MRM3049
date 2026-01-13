#include <iostream>
#include <string>

using namespace std;

template <typename PozisyonTipi, typename HizTipi>

class MotorKomutu
{
	private :
		string eksenAdi;
		PozisyonTipi hedefPozisyon;
		HizTipi hiz;
	public :
		MotorKomutu(string eksenAdi, PozisyonTipi hedefPozisyon, HizTipi hiz)
			: eksenAdi(eksenAdi), hedefPozisyon(hedefPozisyon), hiz(hiz) {}
		void komutuCalistir()
		{
			cout << "[Motor] " << eksenAdi << " ekseni " << hedefPozisyon << " pozisyonuna "
				 << hiz << " hiz ile hareket ediyor." << endl;
		}
		
		PozisyonTipi getHedefPozisyon() const
		{
			return hedefPozisyon;
		}
		HizTipi getHiz() const
		{
			return hiz;
		}
	
};

int main()
{

	return 0;
}