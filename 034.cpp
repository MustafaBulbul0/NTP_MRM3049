#include <iostream>
#include <string>

using namespace std;

class A {
	private:
		int x = 5;
	public:
		void setX(int val) {
			x = val;
		}
		void getX(){
			cout << x << endl;
		}
};

class B {
	public:
		void degistir(int val) {
			A a;
			a.setX(val);
			a.getX();
		}
};

int main()
{
	B b;
	b.degistir(10);

	return 0;
}