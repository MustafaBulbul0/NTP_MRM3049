#include <iostream>
using namespace std;

class Kuvvet {
private:
    double x, y; // Kuvvetin X ve Y bileşenleri (Newton cinsinden)

public:
    // Yapıcı Fonksiyon (Constructor)
    Kuvvet(double x = 0, double y = 0) : x(x), y(y) {}

    // + Operatörünün Aşırı Yüklenmesi
    Kuvvet operator+(const Kuvvet& other) const {
        // İki vektörün bileşenlerini ayrı ayrı topluyoruz
        return Kuvvet(x + other.x, y + other.y);
    }

    // Kuvveti ekrana yazdırma fonksiyonu
    void yazdir() const {
        cout << "(" << x << "N, " << y << "N)" << endl;
    }
};

int main() {
    // İki farklı kuvvet tanımlıyoruz
    Kuvvet f1(10, 5); // X: 10N, Y: 5N
    Kuvvet f2(3, 7);  // X: 3N, Y: 7N

    // Operatör aşırı yükleme sayesinde vektörel toplama yapıyoruz
    Kuvvet toplam = f1 + f2;

    // Sonuçları yazdır
    cout << "Birinci Kuvvet: ";
    f1.yazdir();

    cout << "Ikinci Kuvvet: ";
    f2.yazdir();

    cout << "Bileske (Toplam) Kuvvet: ";
    toplam.yazdir(); // Çıktı: (13N, 12N)

    return 0; // Program burada biter, kodlar bunun üzerinde olmalı
}