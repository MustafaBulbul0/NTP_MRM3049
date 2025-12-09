#include <iostream>
#include <string>

using namespace std;

class sensor {
	public:
		virtual void readData() = 0;
		virtual void calibrate() = 0;
};

class basinc : public sensor {
	public:
		void readData() override {
			cout << "Basinc sensoru verisi okunuyor." << endl;
		}

		void calibrate() override {
			cout << "Basinc sensoru kalibre ediliyor." << endl;
		}
};

class sicaklik : public sensor {
	public:
		void readData() override {
			cout << "Sicaklik sensoru verisi okunuyor." << endl;
		}

		void calibrate() override {
			cout << "Sicaklik sensoru kalibre ediliyor." << endl;
		}
};

int main()
{
	sensor* sensors[] = {new basinc(), new sicaklik()};

	for (sensor* s : sensors)
	{
		s->readData();
		s->calibrate();
		cout << endl;
		delete s;
	}

	return 0;
}