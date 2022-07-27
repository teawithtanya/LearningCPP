#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "Assign values: ";
	cout << "a = " << (a = 8) << "; ";
	cout << "b = " << (b = 4) << endl
		 << endl;

	cout << "Add & assign: ";
	cout << "a += b; a = " << (a += b) << endl;
	cout << "Subtract & assign: ";
	cout << "a -= b; a = " << (a -= b) << endl;
	cout << "Multiply & assign: ";
	cout << "a *= b; a = " << (a *= b) << endl;
	cout << "Divide & assign: ";
	cout << "a /= b; a = " << (a /= b) << endl;
	cout << "Modulus & assign: ";
	cout << "a %= b; a = " << (a %= b) << endl;

	return 0;
}