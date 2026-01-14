//b) Çok Seviyeli Kalıtım (Multi-Level Inheritance)
//Bir sınıf, bir başka child class’ın parent class’ından kalıtım alır.

#include <iostream>
using namespace std;

// En Üst Sınıf (Grandparent)
class Canli {
public:
    void hareketEt() {
        cout << "Canli hareket ediyor." << endl;
    }
};

// Ara Sınıf (Parent) - Canli'dan miras alır
class Hayvan : public Canli {
public:
    void nefesAl() {
        cout << "Hayvan nefes alıyor." << endl;
    }
};

// En Alt Sınıf (Child) - Hayvan'dan miras alır
class Kedi : public Hayvan {
public:
    void miyavla() {
        cout << "Kedi miyavlıyor." << endl;
    }
};

int main() {
    Kedi k;

    k.hareketEt(); // Canli sınıfından geldi (Dededen toruna)
    k.nefesAl();   // Hayvan sınıfından geldi (Babadan oğula)
    k.miyavla();   // Kendi sınıfına ait metot

    return 0;
}