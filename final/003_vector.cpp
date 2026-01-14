//Vektörlerin Avantajları
//1. Dinamik Bellek Yönetimi:
//Vektörler, çalışma zamanında boyutlarını otomatik olarak genişletip daraltabilir.
//Eklenen yeni elemanlarla birlikte, vektörün boyutu içsel olarak artırılır (genellikle iki katına çıkar).
//2. Eleman Ekleme ve Çıkarma:
//Dizilerde eleman ekleme ve çıkarma işlemleri manuel olarak yapılsa da, vektörler bunu hazır
//fonksiyonlar ile yapar.
//3. Esnek Kullanım:
//Dizilerde önceden boyut belirleme zorunluluğu varken, vektörler veri büyüklüğü değişse bile çalışmaya
//devam eder.
//4. STL Fonksiyonları ile Kolay Entegrasyon:
//Vektörler, STL algoritmaları ile kolayca kullanılabilir (örneğin sort() , find() gibi).

#include <iostream>
#include <vector>
using namespace std;
int main() {
// Boş bir tamsayı vektörü tanımlıyoruz
vector<int> sayilar;

// Vektöre eleman ekleme
sayilar.push_back(10);
sayilar.push_back(20);
sayilar.push_back(30);

cout << "Vektör elemanları: ";
for (int i = 0; i < sayilar.size(); i++) {
cout << sayilar[i] << " ";
}
cout << endl;

// Eleman çıkarma (son elemanı silme)
sayilar.pop_back();
cout << "Son eleman silindikten sonra: ";
for (int i = 0; i < sayilar.size(); i++) {
cout << sayilar[i] << " ";
}

cout << "Vektör boyutu: " << sayilar.size() << endl;

sayilar[1] = 50; // İkinci elemanı 50 yap
cout << "İkinci eleman: " << sayilar[1] << endl;

return 0;
}