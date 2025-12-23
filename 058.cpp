#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Pair
{
	private:
		T first;
		T second;
	public:
		Pair(T f, T s) : first(f), second(s) {}

		void setFirst(T f) {first = f;}
		void setSecond(T s) {second = s;}

		T getFirst() const {return first;}
		T getSecond() const {return second;}
		T getSum() const;
};

template <typename T>
T Pair<T>::getSum() const
{
	return first + second;
}

int main()
{
	Pair<int> intPair(3, 4);
	cout << "Integer Pair:(" << intPair.getFirst() << ", " << intPair.getSecond() << ")" << endl;
	cout << "Sum: " << intPair.getSum() << endl;

	cout << "--------------------------" << endl;

	Pair<double> doublePair(5.5, 4.5);
	cout << "Double Pair:(" << doublePair.getFirst() << ", " << doublePair.getSecond() << ")" << endl;
	cout << "Sum: " << doublePair.getSum() << endl;

	cout << "--------------------------" << endl;

	Pair<string> stringPair("Hello, ", "World!");
	cout << "String Pair:(" << stringPair.getFirst() << ", " << stringPair.getSecond() << ")" << endl;
	cout << "Concatenated: " << stringPair.getSum() << endl;

	return 0;
}