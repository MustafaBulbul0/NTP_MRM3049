// Klasik C dizileri ile bellek sınır hataları oluşabilir.
// std::array , boyut bilgisi ve sınır kontrolleri sunarak güvenlik sağlar.
// Sabit boyutlu verilere ihtiyaç duyulduğunda kullanılır.
// STL algoritmalarıyla uyumludur.

#include <iostream>
#include <array>
using namespace std;

int main() {
std::array<int, 5> numbers = {1, 2, 3, 4, 5};
// Elemanlara erişim
cout << "İlk eleman: " << numbers.front() << endl;
cout << "Son eleman: " << numbers.back() << endl;
// Boyut bilgisi
cout << "Dizi boyutu: " << numbers.size() << endl;

numbers.fill(3);
for (int i = 0 ; i < 5 ; i++)
    cout << numbers[i] << " ,";

return 0;
}
