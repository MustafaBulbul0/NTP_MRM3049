#include <iostream>
#include <string>

using namespace std;

class A{
	public:
		int x = 10;
	protected:
		int y = 20;
	private:
		int z = 30;
};

class B: public A
{
	public:
		void yazdir(){
			cout << x << endl;
			cout << y << endl;
			// cout << z;
		}
};
int main()
{

	B b;

	b.yazdir();

	cout << b.x;
	//cout << b.y; // y ye erişilemez

	return 0;
}