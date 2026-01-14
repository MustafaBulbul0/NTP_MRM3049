//1. Çalışma Zamanında Bağlama (Dynamic Binding):
//Sanal fonksiyonlar, çalışma zamanında çağrıyı doğru fonksiyona bağlar.
//Bu, dinamik bağlama (late binding) olarak adlandırılır.
//2. Türetilmiş Sınıf Üzerinde Kontrol:
//Temel sınıfın bir işaretçisi veya referansı kullanılarak türetilmiş sınıfın kendi fonksiyonları çağrılabilir.
//3. Temel Sınıfta Deklarasyon:
//Sanal fonksiyonlar, temel sınıfta virtual anahtar kelimesiyle bildirilir.
//4. Türetilmiş Sınıfta Yeniden Tanımlama (Override):
//Türetilmiş sınıflar, temel sınıfta tanımlanan bir sanal fonksiyonu kendi ihtiyaçlarına göre yeniden
//tanımlayabilir.
//5. Sanallık Otomatik Devam Eder:
//Bir sanal fonksiyon türetilmiş sınıfta yeniden tanımlandığında, bu tanım otomatik olarak sanal olur.

#include <iostream>
#include <vector>

using namespace std;

class Hayvan {
public:
    // virtual: Bu fonksiyonun alt sınıflarda yeniden tanımlanabileceğini söyler.
    virtual void sesCikar() {
        cout << "Hayvan bir ses cikariyor." << endl;
    }
    
    // Virtual destructor (Yıkıcı): Bellek sızıntısını önlemek için iyi bir pratiktir.
    virtual ~Hayvan() {} 
};

class Kopek : public Hayvan {
public:
    // override: Yanlışlıkla imza hatası yapmanı (örn: sesCikar(int x)) engeller.
    void sesCikar() override {
        cout << "Kopek havliyor." << endl;
    }
};

class Kedi : public Hayvan {
public:
    void sesCikar() override {
        cout << "Kedi miyavliyor." << endl;
    }
};

int main() {
    Hayvan* hayvanPtr; // Temel sınıf türünde bir pointer (işaretçi)

    Kopek kopekObj;
    Kedi kediObj;

    // 1. Durum: Köpek nesnesine işaret ediyor
    hayvanPtr = &kopekObj;
    hayvanPtr->sesCikar(); // Çıktı: Kopek havliyor.

    // 2. Durum: Kedi nesnesine işaret ediyor
    hayvanPtr = &kediObj;
    hayvanPtr->sesCikar(); // Çıktı: Kedi miyavliyor.

    return 0;
}