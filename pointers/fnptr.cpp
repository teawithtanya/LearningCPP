#include <iostream>

using namespace std;

void writeOutput(int *);
void computeTriple(int *);

int main()
{
    int num = 5;
    int *ptr = &num;

    cout << "Address of ptr: " << &ptr << endl;
    cout << "Value of ptr: " << ptr << endl;

    writeOutput(ptr);
    *ptr += 15;
    writeOutput(ptr);
    computeTriple(ptr);
    writeOutput(ptr);
    return 0;
}

void writeOutput(int *value1)
{
    cout << "Address of value1 pointer: " << &value1 << endl;
    cout << "Value of value1 pointer: " << value1 << endl;
    cout << "Current value of value1 pointer reference: " << *value1 << endl;
}

void computeTriple(int *value)
{
    cout << "Address of value pointer: " << &value << endl;
    cout << "Value of value pointer: " << value << endl;
    *value *= 3;
}
