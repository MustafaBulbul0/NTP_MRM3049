#include <iostream>
#include <string>

using namespace std;

int main()
{
	int dogum_yili;
	int mevcut_yil;

	cout << "YAŞ HESAPLAMA" << endl;

	cout << "Doğum yılınızı giriniz: ";
	cin >> dogum_yili;
	cout << "Mevcut yılı giriniz: ";
	cin >> mevcut_yil;

	cout << "Yaşınız: " << (mevcut_yil - dogum_yili) << endl;

	return (0);
}
