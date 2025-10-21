#include <iostream>
#include <vector>
#include <array>

using namespace std;


int main()
{
	vector<float> sensorVerileri;
	float veri;
	cout << "Sensör verierini girin (çıkmak için -1): " << endl;
	while (true)
	{
		cin >> veri;
		if (veri == -1) break;
		sensorVerileri.push_back(veri);
	}

	cout << "Toplam sensör verisi: " << sensorVerileri.size() << endl;
	cout << "Veriler: ";
	for (float v : sensorVerileri)
		cout << v << " ";
	cout << endl;
	return (0);
}
