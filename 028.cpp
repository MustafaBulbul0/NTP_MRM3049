#include <iostream>
#include <string>

using namespace std;

union Data {
	u_int32_t value;
	u_int8_t bytes[4];
};

int main()
{
	Data data;
	data.value = 0x12345678;

	cout << "Byte 1: " << hex << (int)data.bytes[0] << endl;
	cout << "Byte 2: " << hex << (int)data.bytes[1] << endl;
	cout << "Byte 3: " << hex << (int)data.bytes[2] << endl;
	cout << "Byte 4: " << hex << (int)data.bytes[3] << endl;

	return (0);
}
