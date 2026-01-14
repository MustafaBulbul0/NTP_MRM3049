//C++ programlama dilinde, fonksiyon aşırı yükleme (function overloading), aynı ada sahip birden fazla
//fonksiyon tanımlayabilme özelliğidir. Bu fonksiyonlar farklı parametre listelerine sahip olmalıdır. Yani, aynı
//işi yapan ancak farklı veri tiplerinde veya farklı sayıda parametre alan fonksiyonları aynı isimle
//tanımlayabiliriz.

//Neden Fonksiyon Aşırı Yükleme Kullanılır?
//Kodun Okunabilirliği: Aynı işlemi farklı veri tiplerinde yapan fonksiyonlar için aynı isim kullanarak
//kodun okunabilirliğini artırır.
//Esneklik: Aynı işlemi farklı durumlarda farklı parametrelerle gerçekleştirebilme imkanı sunar.
//Kullanım Kolaylığı: Programcı, parametrelerin tipine göre hangi fonksiyonun çağrılacağını düşünmek
//zorunda kalmaz.

//Önemli Notlar:
//Derleyici Nasıl Karar Verir: Derleyici, fonksiyon çağrısı sırasında verilen parametrelerin tiplerine
//bakarak hangi fonksiyonun çağrılacağını belirler. En uygun eşleşmeyi bulmaya çalışır.
//Ambiguite: Eğer derleyici, hangi fonksiyonun çağrılacağına karar veremezse, "ambiguous call" hatası verir.
//Default Parametreler: Fonksiyon aşırı yükleme ile default parametreler bir arada kullanılamaz.

#include <iostream>
using namespace std;

class Matematik {
public:
    // İki parametreli toplama
    int topla(int a, int b) {
        return a + b;
    }

    // Üç parametreli toplama (Aynı isim, farklı parametre sayısı)
    int topla(int a, int b, int c) {
        return a + b + c;
    }

    // Farklı tipte parametreli toplama (Aynı isim, farklı veri tipi)
    double topla(double a, double b) {
        return a + b;
    }
};

int main() {
    Matematik m;

    cout << "2 sayinin toplami: " << m.topla(5, 10) << endl;       // 1. fonksiyon çalışır
    cout << "3 sayinin toplami: " << m.topla(5, 10, 15) << endl;   // 2. fonksiyon çalışır
    cout << "Ondalikli toplam: " << m.topla(2.5, 3.5) << endl;    // 3. fonksiyon çalışır

    return 0;
}
