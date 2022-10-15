#include <iostream>

using namespace std;

int main()
{
    int num, num2;
    int &rNum = num;
    int &rNum2 = rNum; // references must be initialized and cannot be reassigned
    num2 = 5;
    rNum = 400;
    rNum2 = num2; // changes the value of num to num2

    cout << "Value direct: " << num << endl;
    cout << "Value via reference: " << rNum << endl;
    cout << "Value via reference of reference: " << rNum2 << endl
         << endl;

    cout << "Address direct: " << &num << endl;
    cout << "Address via reference: " << &rNum << endl;
    cout << "Address via reference of reference: " << &rNum2 << endl
         << endl;

    num *= 2;
    cout << "Value direct: " << num << endl;
    cout << "Value via reference: " << rNum << endl;
    cout << "Value via reference of reference: " << rNum2 << endl
         << endl;

    return 0;
}
