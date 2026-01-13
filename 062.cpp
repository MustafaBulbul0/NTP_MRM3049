#include <iostream>
#include <stdexcept>

void test(int deger)
{
	if (deger < 0)
		throw std::invalid_argument("Negatif deger hatasi");
}

int main()
{
	try {
		test(-5);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Standart hata: " << e.what() << std::endl;
	}
	

	return 0;
}