//Operatör Aşırı Yükleme (Operator Overloading)
//Operatörlerin özel anlamlarla yeniden tanımlanmasıdır.

#include <iostream>
using namespace std;

class Sayilar {
private:
    int deger;

public:
    // Yapıcı metot (Constructor)
    Sayilar(int d) : deger(d) {}

    // + Operatörünün aşırı yüklenmesi
    Sayilar operator + (const Sayilar& obj) {
        // Yeni bir Sayilar nesnesi döndürüyoruz
        return Sayilar(deger + obj.deger);
    }

    void yazdir() {
        cout << "Deger: " << deger << endl;
    }
};

int main() {
    Sayilar s1(10);
    Sayilar s2(20);

    // Derleyici burada s1.operator+(s2) fonksiyonunu çağırır
    Sayilar s3 = s1 + s2; 

    s3.yazdir(); // Çıktı: Deger: 30

    return 0;
}
