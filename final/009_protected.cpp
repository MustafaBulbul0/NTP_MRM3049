//Açıklama:
//Korunan üyeler, sınıfın kendisi ve türetilmiş sınıflar tarafından erişilebilir.
//Sınıf dışındaki diğer kod tarafından erişilemez.
//Kullanım Alanları:
//Sınıf hiyerarşisinde verilerin miras alınarak kullanılmasını sağlamak.

#include <iostream>
using namespace std;

class Temel {
protected:
    string isim;
};

class Turetilmis : public Temel {
public:
    void setIsim(string yeniIsim) {
        isim = yeniIsim; // Protected üyeye türetilmiş sınıfta erişim
    }

    void yazdir() {
        cout << "İsim: " << isim << endl;
    }
};

int main() {
    Turetilmis obj;
    obj.setIsim("Ali");
    obj.yazdir();
    return 0;
}
