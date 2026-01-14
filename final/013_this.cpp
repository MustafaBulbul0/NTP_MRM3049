//this Pointer’ın Özellikleri
//1. Her Nesne için Benzersizdir:
//Her nesne, kendi this pointer’ına sahiptir ve bu pointer o nesneyi işaret eder.
//2. Mevcut Nesneye Erişim Sağlar:
//Sınıf üyesi fonksiyonlar içinde, çağrıyı yapan nesneye erişmek için kullanılır.
//3. Kapsülleme için Kullanılır:
//Üye değişkenlerle aynı ada sahip yerel değişkenleri ayırt etmek için kullanılır.
//
//Örnek 1: Yerel Değişkenler ile Çakışma

#include <iostream>
#include <string>

using namespace std;

class Kisi {
private:
    string isim; // Üye değişken

public:
    // Parametre ismi (string isim) ile sınıfın üye ismi (this->isim) çakıştığında:
    void setIsim(string isim) {
        // 'isim = isim' yazsaydık derleyici parametreyi seçecekti (Shadowing).
        // 'this->isim' diyerek bu nesneye ait olan değişkeni işaret ediyoruz.
        this->isim = isim; 
    }

    void yazdir() {
        // Burada isim çakışması olmadığı için 'this' kullanımı opsiyoneldir.
        cout << "Isim: " << this->isim << endl;
    }
};

int main() {
    Kisi kisi;
    kisi.setIsim("Ali");
    kisi.yazdir();

    return 0;
}