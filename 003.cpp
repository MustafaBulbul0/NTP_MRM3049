#include <iostream>
#include <string>

using namespace std;

int main()
{
	string isim = "Ahmet";
	isim += "Mehmet";

	int uzunluk = isim.length();
	string alt_string = isim.substr(0, 5);

	cout << "isim giriniz: ";
	getline(cin, isim);

	return (0);
}
