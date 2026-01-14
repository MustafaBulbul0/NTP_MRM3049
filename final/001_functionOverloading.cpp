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

int topla(int a, int b) {
return a + b;
}

double topla(double a, double b) {
return a + b;
}

int main()
{
cout << topla(5, 10);
cout << topla(5.5, 2.3);
}
