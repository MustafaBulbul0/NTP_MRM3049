#include <iostream>
#include <ctime>


using namespace std;

float sensorOku(int i)
{
	return (rand() % 1000) / 10.0;
}

int main()
{
	const int sensorSayısı = 10;
	float sensorler[sensorSayısı];
	float ortalama = 0;
	float max = 0;
	float min = 0;

	srand(time(0));

	for (int i = 0; i < sensorSayısı; i++)
	{
		sensorler[i] = sensorOku(i);
	}
	cout << endl;
	for (int i = 0; i < sensorSayısı; i++)
	{
		ortalama += sensorler[i];
	}
	ortalama = ortalama / sensorSayısı;
	max = sensorler[0];
	min = sensorler[0];
	for (int i = 1; i < sensorSayısı; i++)
	{
		if (sensorler[i] > max)
			max = sensorler[i];
		if (sensorler[i] < min)
			min = sensorler[i];
	}

	cout << "Ortalama: " << ortalama << endl;
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;

	return 0;
}
