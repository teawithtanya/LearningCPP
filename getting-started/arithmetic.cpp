#include <iostream>

using namespace std;

int main()
{
	int a = 8, b = 4;

	cout << "a: " << a << ", b: " << b << endl;
	cout << "Addition result (a+b): " << (a + b) << endl;
	cout << "Subtraction result (a-b): " << (a - b) << endl;
	cout << "Multiplication result (a*b): " << (a * b) << endl;
	cout << "Division result (a/b): " << (a / b) << endl;
	cout << "Modulus result (a%b): " << (a % b) << endl
		 << endl;

	cout << "Postfix increment (a++): " << a++ << endl;
	cout << "Postfix result (a): " << a << endl;
	cout << "Prefix increment (++b): " << ++b << endl;
	cout << "Prefix result (b): " << b << endl
		 << endl;

	return 0;
}