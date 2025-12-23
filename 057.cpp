#include <iostream>
#include <string>

using namespace std;

class Komut
{
	public:
		string hareket;
		Komut *sonraki;
		Komut(string hareket) : hareket(hareket), sonraki(nullptr) {}
};

typedef struct KomutListesi
{

} Komutlar;

int main()
{

	return 0;
}