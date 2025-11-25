#include <iostream>
#include <string>

using namespace std;

class sayilar{
	int deger;
	public:
		sayilar(int d) : deger(d){}
		sayilar operator + (sayilar obj){
			return sayilar(deger + obj.deger);
		}
		void yazdir(){
			cout << "Deger: " << deger << endl;
		}
};

int main()
{
	sayilar s1(10), s2(20);
	sayilar s3 = s1 + s2;

	s3.yazdir();

	return 0;
}