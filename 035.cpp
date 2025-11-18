#include <iostream>
#include <string>

using namespace std;

class Araba {
private:
	string marka;
public:
	Araba(string m ) : marka(m) {}

	class Motor {
	public:
		void calistir() {
			cout << "Motor çalışıyor" << endl;
		}
		void arabaMarkasi(const Araba& araba) {
			cout << "Arabanın markası: " << araba.marka << endl;
		}
	};
};
		

int main()
{
	Araba araba("Toyota");
	Araba::Motor motor;
	motor.calistir();
	motor.arabaMarkasi(araba);
	return 0;
}