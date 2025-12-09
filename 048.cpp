#include <iostream>
#include <string>

using namespace std;

class motor{
	private:
		int speed;
	public:
		virtual void calistir() = 0;
		virtual void durdur() = 0;
		virtual void setSpeed(int speed) = 0;
};

class DC : public motor {
	public:
		void calistir() override {
			cout << "DC motor calistirildi." <<  endl;
		}

		void durdur() override {
			cout << "DC motor durduruldu." << endl;
		}

		void setSpeed(int speed) override {
			cout << "DC motor hizi ayarlandi." << endl;
		}
};

class step : public motor {
	public:
		void calistir() override {
			cout << "Step motor calistirildi." <<  endl;
		}

		void durdur() override {
			cout << "Step motor durduruldu." << endl;
		}

		void setSpeed(int speed) override {
			cout << "Step motor hizi ayarlandi." << endl;
		}
};

class servo : public motor {
	public:
		void calistir() override {
			cout << "Servo motor calistirildi." <<  endl;
		}

		void durdur() override {
			cout << "Servo motor durduruldu." << endl;
		}

		void setSpeed(int speed) override {
			cout << "Servo motor hizi ayarlandi." << endl;
		}
};

int main()
{

	motor* motors[] = {new DC(), new step(), new servo()};

	for (motor* m : motors) {
		m->calistir();
		m->setSpeed(100);
		m->durdur();
		cout << endl;
		delete m;
	}

	return 0;
}