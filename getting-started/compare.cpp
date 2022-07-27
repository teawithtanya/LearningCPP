#include <iostream>

using namespace std;

int main() {
    int nil = 0, num = 0, max = 1;
    char cap = 'A', low = 'a';

    cout << "nil: " << nil << ", num: " << num << ", max: " << max << endl;
    cout << "cap: " << cap << ", low: " << low << endl << endl;

    cout << "Equality comparisons: ";
    cout << "(nil == num)? " << (nil == num) << endl;
    cout << "(cap == low)? " << (cap == low) << endl << endl;

    cout << "Inequality comparison: ";
    cout << "(nil != max)? " << (nil != max) << endl;
    cout << "Greater than comparison: ";
    cout << "(nil > max)? " << (nil > max) << endl;
    cout << "Lesser than comparison: ";
    cout << "(nil < max)? " << (nil < max) << endl;
    cout << "Greater or equal comparison: ";
    cout << "(nil >= num)? " << (nil >= num) << endl;
    cout << "Lesser or equal comparison: ";
    cout << "(max <= num)? " << (max <= num) << endl;

    return 0;
}