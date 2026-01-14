#include <iostream>
using namespace std;

class Hayvan {
public:
    // virtual: Alt sınıfların bu fonksiyonu ezmesine (override) izin verir
    virtual void sesCikar() {
        cout << "Bir hayvan ses cikariyor." << endl;
    }

    // ÖNEMLİ: Miras alınan sınıflarda mutlaka sanal yıkıcı olmalıdır!
    virtual ~Hayvan() {
        cout << "Hayvan yok edildi." << endl;
    }
};

class Kedi : public Hayvan {
public:
    // override: Üst sınıftaki fonksiyonu ezdiğimizi netleştirir (C++11)
    void sesCikar() override {
        cout << "Kedi miyavliyor." << endl;
    }

    ~Kedi() {
        cout << "Kedi yok edildi." << endl;
    }
};

class Kopek : public Hayvan {
public:
    void sesCikar() override {
        cout << "Köpek havliyor." << endl;
    }

    ~Kopek() {
        cout << "Köpek yok edildi." << endl;
    }
};

int main() {
    // Üst sınıf işaretçisi ile alt sınıf nesnelerini yönetmek:
    Hayvan* h1 = new Kedi();
    Hayvan* h2 = new Kopek();

    // Dinamik Bağlama (Dynamic Binding) sayesinde doğru fonksiyon çağrılır
    h1->sesCikar(); // Kedi miyavliyor.
    h2->sesCikar(); // Köpek havliyor.

    // Belleği serbest bırakma
    delete h1; 
    delete h2;

    return 0;
}