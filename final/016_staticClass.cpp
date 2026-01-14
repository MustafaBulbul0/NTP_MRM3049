//Statik Üyeler (Static Members)
//Statik Değişkenler (Static Variables)
//Bir sınıfa ait statik değişkenler sınıfın tüm nesneleri tarafından paylaşılır.
//Statik değişkenler sınıf düzeyinde tanımlanır ve tek bir kopya oluşturulur.
//Anahtar kelime: static .

#include <iostream>

class Araba {
public:
    static int toplamArabaSayisi; // Static değişken bildirimi

    Araba() {
        toplamArabaSayisi++; // Her yeni nesne oluşturulduğunda artır
    }
};

// Static değişkenlerin sınıf dışında başlatılması (initialization) gerekir
int Araba::toplamArabaSayisi = 0;

int main() {
    Araba a1;
    Araba a2;
    Araba a3;

    // Nesne üzerinden değil, sınıf ismiyle erişiyoruz
    std::cout << "Toplam Araba: " << Araba::toplamArabaSayisi << std::endl; // Çıktı: 3
    return 0;
}
