#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Operand to the left of = is called L-value (Location)
    // Operand to the right of = is called R-value (Read)
    int num = 100;
    double sum = 0.0123456789;
    string text = "C++ Fun";

    cout << "Integer variable starts at: " << &num << endl;
    cout << "Double variable starts at: " << &sum << endl;
    cout << "String variable starts at: " << &text << endl;

    return 0;
}
