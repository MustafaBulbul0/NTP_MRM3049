//c) Çoklu Kalıtım (Multiple Inheritance)
//Bir sınıf, birden fazla parent class’tan kalıtım alabilir.

#include <iostream>
using namespace std;

// Birinci Üst Sınıf
class Baba {
public:
    void arabaSur() {
        cout << "Baba araba sürüyor." << endl;
    }
};

// İkinci Üst Sınıf
class Anne {
public:
    void yemekYap() {
        cout << "Anne yemek yapıyor." << endl;
    }
};

// Çoklu Kalıtım: Cocuk her iki sınıftan da miras alıyor
class Cocuk : public Baba, public Anne {
public:
    void oyna() {
        cout << "Cocuk oyun oynuyor." << endl;
    }
};

int main() {
    Cocuk c;

    c.arabaSur(); // Baba'dan geldi
    c.yemekYap(); // Anne'den geldi
    c.oyna();     // Kendisinden geldi

    return 0;
}
