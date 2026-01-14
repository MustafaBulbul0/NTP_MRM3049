#include <iostream>
using namespace std;

int main()
{
int* num = new int; // Bellek ayır
*num = 42; // Değer ata
cout << "Değer: " << *num << endl;
delete num; // Belleği serbest bırak


int* array = new int[5]; // Dizi için bellek ayır
for (int i = 0; i < 5; ++i) {
array[i] = i * 10; // Değer ata
}
for (int i = 0; i < 5; ++i) {
cout << array[i] << " "; // Değerleri yazdır
}
delete[] array; // Belleği serbest bırak

return 0;
}