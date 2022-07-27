#include <iostream>

using namespace std;

int main()
{
    int a = 1, b = 0;
    cout << "a = " << a << ", b = " << b << endl
         << endl;

    cout << "AND logic:" << endl;
    cout << "(a && a) = " << (a && a) << " ( 1 == true)" << endl;
    cout << "(a && b) = " << (a && b) << " ( 0 == false)" << endl;
    cout << "(b && b) = " << (b && b) << " ( 0 == false )" << endl
         << endl;

    cout << "OR logic:" << endl;
    cout << "(a || a) = " << (a || a) << " ( 1 == true )" << endl;
    cout << "(a || b) = " << (a || b) << " ( 1 == true )" << endl;
    cout << "(b || b) = " << (b || b) << " ( 0 == false )" << endl
         << endl;

    cout << "NOT logic:" << endl;
    cout << "a = " << a << ", !a = " << !a << endl;
    cout << "b = " << b << ", !b = " << !b << endl;

    return 0;
}