#include <iostream>
#include <string>

using namespace std;

int topla(int a, int b) {
	return a + b;
}

double topla(double a, int b ,int c = 2) {
	return a + b + c;
}

int main()
{
	cout << topla(5, 10) << endl;       // 15
	cout << topla(5.3, 10) << endl;  
	return 0;
}