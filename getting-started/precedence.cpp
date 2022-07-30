#include <iostream>

using namespace std;

int main() {
    int num = 1 + 4 * 3;
    cout << "Default order: 1 + 4 * 3 = " << num << endl;
    num = (1 + 4) * 3;
    cout << "Forced order: (1 + 4) * 3 =" << num << endl;
    num = 7 - 4 + 2;
    cout << "Default direction: 7 - 4 + 2 = " << num << endl;
    num = 7 - (4 + 2);
    cout << "Forced direction: 7 - (4 + 2) = " << num << endl;

    return 0;
}