#include <iostream>
#include <string>
using namespace std;

class Araba {
private:
    string marka;

public:
    Araba(string m) : marka(m) {}

    // İç Sınıf (Nested Class)
    class Motor {
    public:
        void calistir() {
            cout << "Motor calisiyor." << endl;
        }

        // Dış sınıfın private üyesine erişim
        void arabaMarkasi(const Araba& araba) {
            // C++11 ve sonrası standartlarda, iç sınıf dış sınıfın 
            // private üyelerine doğrudan erişebilir.
            cout << "Arabanin markasi: " << araba.marka << endl;
        }
    };
};

int main() {
    Araba araba("Toyota");        // Dış sınıf nesnesi
    Araba::Motor motor;           // İç sınıf nesnesi (Scope operatörü ile erişilir)

    motor.calistir();
    motor.arabaMarkasi(araba);    // Nesne referansı üzerinden private üyeye erişim

    return 0;
}
