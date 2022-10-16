#include <iostream>

using namespace std;

// pointers and references are passed by reference
inline void add(int &a, int *b)
{
    cout << "Total: " << (a + *b) << endl;
}

int main()
{
    int num = 100, sum = 500;
    // always use a reference unless you need an uninitialized reference
    // or reassign a reference which can only be using a pointer.
    int &rNum = num;
    int *ptr = &num;
    void (*fn)(int &a, int *b) = add;

    cout << "Reference: " << rNum << endl;
    cout << "Pointer: " << *ptr << endl;

    ptr = &sum;
    cout << "Pointer now: " << *ptr << endl;
    fn(rNum, ptr);

    return 0;
}
