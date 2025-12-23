#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> yigin;

	yigin.push(10);
	yigin.push(20);
	yigin.push(30);

	cout << "Top Element: " << yigin.top() << endl;

	yigin.pop();
	cout << "Top after pop: " << yigin.top() << endl;

	cout << "Is stack empty? " << (yigin.empty() ? "Yes" : "No") << endl;
	return 0;
}