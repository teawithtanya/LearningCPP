#include <iostream>

using namespace std;

int main()
{
    int a = 8, b = 16;
    int *aPtr = &a;
    int *bPtr = &b;

    cout << "Addresses of pointers ..." << endl;
    cout << "aPtr: " << &aPtr << endl;
    cout << "bPtr: " << &bPtr << endl
         << endl;

    cout << "Values in pointers ..." << endl;
    cout << "aPtr: " << aPtr << endl;
    cout << "bPtr: " << bPtr << endl
         << endl;

    cout << "Values in addresses pointed to ... " << endl;
    cout << "aPtr: " << *aPtr << endl;
    cout << "bPtr: " << *bPtr << endl;

    return 0;
}
