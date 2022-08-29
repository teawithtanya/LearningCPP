#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    cout << "Please enter your full name: ";
    cin >> name;
    cout << "Welcome " << name << endl;
    // ignore any remaining content in input buffer
    cin.ignore(256, '\n');
    cout << "Please re-enter your full name: ";
    getline(cin, name);
    cout << "Thanks, " << name << endl;

    return 0;
}
