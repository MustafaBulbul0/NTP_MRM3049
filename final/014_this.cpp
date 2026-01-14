//Örnek 2: Zincirleme (Chaining) Fonksiyon Çağrıları
//this pointer, aynı nesneye referans döndürmek için kullanılabilir. Bu sayede zincirleme fonksiyon
//çağrıları yapılabilir.

#include <iostream>
#include <string>
using namespace std;

class Kisi {
private:
    string isim;
    int yas;

public:
    // Bu fonksiyon nesnenin referansını döndürür (Kisi&)
    Kisi& setIsim(string isim) {
        this->isim = isim;
        return *this; // Mevcut nesnenin kendisini (içeriğini) döndürür
    }

    Kisi& setYas(int yas) {
        this->yas = yas;
        return *this; // Mevcut nesnenin kendisini (içeriğini) döndürür
    }

    void yazdir() {
        cout << "Isim: " << isim << ", Yas: " << yas << endl;
    }
};

int main() {
    Kisi kisi;
    
    // ZİNCİRLEME ÇAĞRI:
    // 1. setIsim("Ayşe") çalışır ve 'kisi' nesnesinin referansını döndürür.
    // 2. Dönen referans üzerinden .setYas(25) çağrılır.
    // 3. En son .yazdir() çağrılır.
    kisi.setIsim("Ayşe").setYas(25).yazdir();

    return 0;
}
