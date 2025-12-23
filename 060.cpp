#include <iostream>
#include <string>

using namespace std;

template <typename T>
class MotorKomutu
{
	private :
		T hiz[3];
		T pos[3];
		T tar[3];
	public :
		MotorKomutu(T pos1, T pos2 , T pos3)
		{
			pos[0] = pos1;
			pos[1] = pos2;
			pos[2] = pos3;
		}
		
		void setTar(T tar1, T tar2, T tar3)
		{
			tar[0] = tar1;
			tar[1] = tar2;
			tar[2] = tar3;
		}

		void setHiz(T hiz1, T hiz2, T hiz3)
		{
			hiz[0] = hiz1;
			hiz[1] = hiz2;
			hiz[2] = hiz3;
		}

		void komutGoster()
		{
			cout << "Pozisyon: (" << pos[0] << ", " << pos[1] << ", " << pos[2] << ")" << endl;
			cout << "Hiz: (" << hiz[0] << ", " << hiz[1] << ", " << hiz[2] << ")" << endl;
			cout << "Tarih: (" << tar[0] << ", " << tar[1] << ", " << tar[2] << ")" << endl;
		}

};

int main()
{
	MotorKomutu<int> motor1(10, 20, 30);
	motor1.setHiz(40, 50, 60);
	motor1.setTar(20, 6, 15);
	motor1.komutGoster();

	return 0;
}