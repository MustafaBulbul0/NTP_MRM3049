//Kalıtım (Inheritance) Nedir?
//Kalıtım, Nesne Yönelimli Programlama’da (OOP) bir sınıfın (‘base class’ veya ‘parent class’) özelliklerini ve
//davranışlarını (üyeler ve metotlar) bir başka sınıfa (‘derived class’ veya ‘child class’) aktarımını sağlayan bir
//yapıdır.
//Temel Kavramlar:
//Parent Class (Base Class, Super Class): Özellikleri ve metotları kalıtım yoluyla aktarılan sınıftır.
//Child Class (Derived Class, Subclass): Parent class’tan kalıtım alarak oluşturulan yeni sınıftır.
//Reusability (Yeniden Kullanılabilirlik): Kod tekrardan kaçınılır, temel özellikler bir kez tanımlanıp alt
//sınıflar tarafından kullanılabilir.
//Extensibility (Genişletilebilirlik): Yeni özellikler kolayca eklenebilir.

//a) Tek Seviyeli Kalıtım (Single Level Inheritance)
//Bir sınıf, tek bir parent class’tan kalıtım alır.

#include <iostream>
using namespace std;

// Parent Class (Üst Sınıf)
class Hayvan {
public:
    void nefesAl() {
        cout << "Hayvan nefes alıyor." << endl;
    }
};

// Child Class (Alt Sınıf) - Hayvan sınıfından miras alıyor
class Kedi : public Hayvan {
public:
    void miyavla() {
        cout << "Kedi miyavlıyor." << endl;
    }
};

int main() {
    Kedi k;
    
    // Kedi nesnesi, Hayvan sınıfındaki metodu kullanabilir (Miras aldığı için)
    k.nefesAl(); 
    
    // Kedi nesnesi kendi sınıfındaki metodu kullanır
    k.miyavla(); 

    return 0;
}
