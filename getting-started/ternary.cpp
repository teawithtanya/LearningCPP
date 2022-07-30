#include <iostream>

using namespace std;

int main()
{
    int a, b, max;
    a = 1, b = 2;

    cout << "a: " << a << endl;
    cout << "a is " << ((a != 1) ? "not one, " : "one, ");
    cout << ((a % 2 != 0) ? "odd" : "even") << endl
         << endl;

    cout << "b: " << b << endl;
    cout << "b is " << ((b != 1) ? "not one, " : "one, ");
    cout << ((b % 2 != 0) ? "odd" : "even") << endl
         << endl;

    max = (a > b) ? a : b;
    cout << "Max of a and b is " << max << endl;

    return 0;
}