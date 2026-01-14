//Sanal fonksiyon, bir temel sınıfta bildirilen ve bir türetilmiş sınıfta yeniden tanımlanan (override edilen)
//üye fonksiyondur.
//Türetilmiş sınıfın sanal fonksiyonunu, temel sınıfa bir işaretçi veya referans kullanarak çağırabilirsiniz.
//Dinamik bağlama, sanal fonksiyonlarla uygulanır.

#include <iostream>
using namespace std;

class Temel {
public:
    // virtual anahtar kelimesi, bu fonksiyonun çalışma zamanında 
    // hangi nesneye aitse oradan çağrılacağını garanti eder.
    virtual void yazdir() {
        cout << "Temel sinif fonksiyonu." << endl;
    }
};

class Turetilmis : public Temel {
public:
    // override: Üst sınıftaki sanal fonksiyonu ezdiğimizi derleyiciye bildirir.
    void yazdir() override {
        cout << "Turetilmis sinif fonksiyonu." << endl;
    }
};

int main() {
    Temel* ptr;          // Temel sınıf tipinde bir işaretçi (pointer)
    Turetilmis obj;      // Türetilmiş sınıftan bir nesne
    
    ptr = &obj;          // İşaretçi, türetilmiş sınıf nesnesinin adresini tutuyor

    // ptr, Temel sınıf tipinde olsa bile, gösterdiği nesne Turetilmis 
    // olduğu için Turetilmis::yazdir() çalışır.
    ptr->yazdir(); 

    return 0;
}