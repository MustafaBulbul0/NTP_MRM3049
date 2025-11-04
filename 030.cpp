#include <iostream>
#include <string>

using namespace std;

class Hayvan {
public:
	virtual void sesCikar() {
		cout << "Hayvan ses cikariyor" << endl;
	}
};

class Kopek : public Hayvan {
public:
	void sesCikar() override {
		cout << "Hav hav!" << endl;
	}
};

class Kedi : public Hayvan {
public:
	void sesCikar() override {
		cout << "Miyav miyav!" << endl;
	}
};

int main()
{
	Hayvan* hayvanPtr;
	Kopek kopekObj;
	Kedi kediObj;

	hayvanPtr = &kopekObj;
	hayvanPtr->sesCikar();

	hayvanPtr = &kediObj;
	hayvanPtr->sesCikar();

	return 0;
}