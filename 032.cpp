#include <iostream>
#include <string>

using namespace std;

class A {
public:
	virtual void f() {
		cout << "1" << endl;
	}
};

class B : public A {
public:
	void f() override{
		cout << "2" << endl;
	}
};


int main()
{
	B b;
	cout << "B sınıfından oluşturulan nesne ile çağrı: ";
	b.f();  // 2
	return 0;
}