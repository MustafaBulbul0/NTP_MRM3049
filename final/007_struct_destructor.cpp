#include <iostream>
#include <string>

struct Calisan {
    int TCKN;
    std::string Adi;
    double Maas;

    // Constructor
    Calisan(int _Tckn, std::string _ad, double _maas) {
        TCKN = _Tckn;
        Adi = _ad;
        Maas = _maas;
        std::cout << "Calisan nesnesi oluşturuldu: " << Adi << std::endl;
    }

    // Destructor
    ~Calisan() {
        std::cout << "Calisan nesnesi yok ediliyor: " << Adi << std::endl;
    }
};

int main() {
    // new ile dinamik bellek tahsisi yapılıyor
    Calisan* calisan1 = new Calisan(12345678901, "Ahmet Yılmaz", 5000.0);

    // Nesneyle ilgili işlemler burada yapılabilir

    // delete ile bellekte ayrılan alanı serbest bırakıyoruz (destructor çağrılır)
    delete calisan1;

    return 0;
}
