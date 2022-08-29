#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text = "I can resist anything but temptation.";
    int num;

    num = text.find("resist", 0);
    cout << "Position of 'resist': " << num << endl;
    num = text.find("nonsuch", 0);
    cout << "Position of 'nonsuch': " << num << endl;
    num = text.find_first_of("If");
    cout << "First If: " << num << endl;
    num = text.find_first_not_of("If");
    cout << "First not If: " << num << endl;
    num = text.find_last_of("t");
    cout << "Last t: " << num << endl;
    num = text.find_last_not_of("t");
    cout << "Last not t: " << num << endl;

    return 0;
}