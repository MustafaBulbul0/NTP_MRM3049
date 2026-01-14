//1. Saf Sanal Fonksiyon Nedir?
//Saf sanal fonksiyon (Pure Virtual Function), bir sınıf içinde yalnızca tanımı yapılmış ancak herhangi bir gövdesi
//(implementation) olmayan fonksiyondur. Bu tür fonksiyonlar, türetilmiş sınıflarda yeniden tanımlanmalıdır.
//Tanım
//Saf sanal fonksiyonlar, C++ dilinde bir sınıfı soyut sınıf haline getirir. Gövdesiz olarak tanımlanır ve = 0 ile
//işaretlenir.
//Özellikler
//Sadece bir prototip içerir, gövdesi yoktur.
//= 0 ile belirtilir.
//Bir sınıf en az bir saf sanal fonksiyon içeriyorsa, bu sınıf soyut sınıf (abstract class) olarak kabul edilir.
//Saf sanal fonksiyonlar, türetilmiş sınıflarda override edilmek zorundadır.
//
//1. Soyut Sınıflar (Abstract Classes)
//Tanım
//Soyut sınıflar, en az bir saf sanal fonksiyon (pure virtual function) içeren sınıflardır. Bu sınıflar, doğrudan bir
//nesne olarak oluşturulamaz ve türetilmiş sınıflar tarafından genişletilir. Soyut sınıflar, türetilmiş sınıflar için
//bir şablon görevi görür ve ortak davranışları zorunlu hale getirir.
//Özellikler
//Bir soyut sınıf en az bir saf sanal fonksiyon içerir.
//Saf sanal fonksiyonlar = 0 ile tanımlanır.
//Soyut sınıflar, genellikle türetilmiş sınıflar için bir temel sınıf olarak kullanılır.
//Türetilmiş sınıflar, soyut sınıftaki saf sanal fonksiyonları uygulamak (override etmek) zorundadır.
//Soyut sınıflar, hem saf sanal fonksiyonlar hem de normal fonksiyonlar içerebilir. Bu, türetilmiş sınıflara bazı
//ortak işlevler sağlar.

#include <iostream>
#include <vector>
using namespace std;

// Soyut Sınıf (Abstract Class)
class Sekil {
public:
    // Saf Sanal Fonksiyon (Pure Virtual Function)
    // = 0 ifadesi, bu fonksiyonun bu sınıfta gövdesi olmadığını belirtir.
    virtual void ciz() const = 0; 

    // Sanal Yıkıcı (Virtual Destructor)
    // Bellek sızıntısını önlemek için çok önemlidir!
    virtual ~Sekil() {
        cout << "Sekil nesnesi bellekten silindi." << endl;
    }

    void bilgi() const {
        cout << "Bu bir sekildir." << endl;
    }
};

class Daire : public Sekil {
public:
    void ciz() const override {
        cout << "Bir daire çiziliyor. (O)" << endl;
    }
    ~Daire() { cout << "Daire silindi." << endl; }
};

class Kare : public Sekil {
public:
    void ciz() const override {
        cout << "Bir kare çiziliyor. ([])" << endl;
    }
    ~Kare() { cout << "Kare silindi." << endl; }
};

int main() {
    // Soyut sınıftan nesne oluşturamazsın: Sekil s; // HATA!
    
    // Ama soyut sınıf işaretçisi (pointer) ile alt sınıf nesnelerini yönetebilirsin.
    Sekil* sekiller[] = { new Daire(), new Kare() };

    for (Sekil* s : sekiller) {
        s->ciz();   // Çalışma zamanında (runtime) hangi nesne olduğu anlaşılır (Polymorphism)
        s->bilgi(); 
        delete s;   // Sanal yıkıcı sayesinde doğru nesne silinir
    }

    return 0;
}

//2. Arayüzler (Interfaces)
//Tanım
//C++ dilinde, saf sanal fonksiyonlardan oluşan ve genellikle başka bir işlevsellik içermeyen soyut sınıflar
//"arayüz" (interface) olarak kabul edilir. Arayüzler, bir sınıfın belirli bir davranışı gerçekleştirebilmesi için
//gereken bir şablon sağlar.
//Özellikler
//Arayüzler yalnızca saf sanal fonksiyonlar içerir.
//Çoklu kalıtımı desteklemek için kullanılabilir.
//Diğer sınıflara yalnızca bir şablon veya protokol sunar.
//Bir sınıf birden fazla arayüzü uygulayabilir.
//Arayüzler genellikle sınıflar arası bağımlılığı azaltmak ve esneklik sağlamak için kullanılır.
//Neden Kullanılır?
//Farklı sınıfların aynı davranışı desteklemesini sağlamak.
//Kodun genişletilebilirliğini artırmak.
//Çoklu kalıtım durumlarında sınıf yapısını netleştirmek.
