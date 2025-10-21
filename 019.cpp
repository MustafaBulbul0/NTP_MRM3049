#include <iostream>
#include <string>
#include <array>

using namespace std;


int main()
{
	array<int, 3> arr = {10, 20, 30};

	try {
	cout << arr.at(2) << endl;
	cout << arr.at(5) << endl;
	}
	catch (const out_of_range& e)
	{
		cerr << "Hata: " << e.what() << endl;
	}


	return (0);
}
