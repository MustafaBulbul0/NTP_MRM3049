#include <iostream>
#include <string>

using namespace std;

template <typename T>
class SensorBuffer
{
	private :
		T sicaklik;
		T nem;
	public :
		SensorBuffer(T sicaklik, T nem) : sicaklik(sicaklik), nem(nem) {}
		void ortalama()
		{
			cout << "Ortalama: " << (sicaklik + nem) / 2 << endl;
		}
};

int main()
{
	SensorBuffer<int> intBuffer(25, 60);
	intBuffer.ortalama();

	return 0;
}