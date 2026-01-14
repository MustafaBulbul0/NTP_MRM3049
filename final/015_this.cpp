//Örnek 3: Nesne Karşılaştırması
//this pointer, bir nesneyi başka bir nesne ile karşılaştırmak için kullanılabilir.

#include <iostream>
using namespace std;

class Sayac {
private:
    int deger;

public:
    // Constructor (Yapıcı Metot)
    Sayac(int deger) : deger(deger) {}

    // Karşılaştırma fonksiyonu
    bool esittir(const Sayac& diger) {
        // this->deger: Fonksiyonun çağrıldığı nesnenin (soldaki) değeri
        // diger.deger: Parametre olarak gelen nesnenin (sağdaki) değeri
        return this->deger == diger.deger;
    }
};

int main() {
    Sayac sayac1(10);
    Sayac sayac2(10);
    Sayac sayac3(20);

    // sayac1 üzerinden esittir fonksiyonunu çağırıyoruz ve parametre olarak sayac2'yi veriyoruz.
    cout << "sayac1 ve sayac2 esit mi? " << (sayac1.esittir(sayac2) ? "Evet" : "Hayir") << endl;
    
    // sayac1 üzerinden çağırıp sayac3 ile karşılaştırıyoruz.
    cout << "sayac1 ve sayac3 esit mi? " << (sayac1.esittir(sayac3) ? "Evet" : "Hayir") << endl;

    return 0;
}


//this Pointer’ın Avantajları
//1. Üye Değişken ve Yerel Değişken Çakışmalarını Çözme:
//this pointer, çakışmaları çözmek için net bir yol sağlar.
//2. Zincirleme Fonksiyon Çağrıları:
//Aynı nesne üzerinde birden fazla işlemi tek bir satırda yapmayı mümkün kılar.
//3. Mevcut Nesneye Doğrudan Erişim:
//Çağrıyı yapan nesneye referans sağlar.
