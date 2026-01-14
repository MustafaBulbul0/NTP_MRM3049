//C++'da union (birlik), aynı bellek alanını paylaşan, birbirinden farklı türdeki verilerin tek bir veri yapısında
//toplanmasını sağlayan bir özelliktir. Birlikler, belirli bir anda yalnızca bir üyenin kullanılmasına olanak
//tanır. Bu özellik, belleğin verimli bir şekilde kullanılmasını sağlamak için kullanılır. C++'daki union veri tipi,
//yapılar (struct) ile benzer şekilde çalışır, ancak tüm üyelerinin aynı bellek alanını paylaştığı için bellek
//yönetimini farklı bir biçimde ele alır.

#include <iostream>
#include <string>

union Veri {
int intDeger;
float floatDeger;
char charDeger;
};

int main() {
Veri veri;

veri.intDeger = 42;
std::cout << "Integer Değer: " << veri.intDeger << std::endl;

veri.floatDeger = 3.14f;
std::cout << "Float Değer: " << veri.floatDeger << std::endl;

veri.charDeger = 'A';
std::cout << "Char Değer: " << veri.charDeger << std::endl;

    //std::cout << "Integer Değer: " << veri.intDeger << std::endl; // !!!çalışmaz çünkü veri.charDeger atandıktan sonra intDeger geçersiz olur


return 0;
}