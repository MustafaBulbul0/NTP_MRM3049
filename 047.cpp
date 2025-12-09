#include <iostream>
#include <string>

using namespace std;

class IveriTbani{
	public:
		virtual void baglan() = 0;
		virtual void veriOku() = 0;
		virtual string veriYaz() = 0;
		virtual string baglantiyiKes() = 0;
		virtual ~IveriTbani() {}
};

class MySQL : public IveriTbani {
	public:
		void baglan() override {
			cout << "MySQL veritabanina baglanildi." <<  endl;
		}

		void veriOku() override {
			cout << "MySQL veritabanindan veri okunuyor." << endl;
		}

		string veriYaz() override {
			return "MySQL veritabanina veri yazildi.";
		}

		string baglantiyiKes() override {
			return "MySQL veritabani baglantisi kesildi.";
		}
};

int main()
{
	IveriTbani* vt = new MySQL();
	vt->baglan();
	vt->veriOku();
	cout << vt->veriYaz() << endl;
	cout << vt->baglantiyiKes() << endl;
	delete vt;

	return 0;
}