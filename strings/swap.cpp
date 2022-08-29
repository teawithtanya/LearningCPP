#include <iostream>
#include <string>

using namespace std;

int main()
{
    string front;
    string back;
    string text =
        "Always laugh when you can. It\'s cheap medicine.";

    front.assign(text);
    cout << endl
         << "Front: " << front << endl
         << endl;

    front.assign(text, 0, 27);
    cout << "Front: " << front << endl
         << endl;

    back.assign(text, 27, text.size());
    cout << "Back: " << back << endl
         << endl;

    back.swap(front);
    cout << "Front: " << front << endl;
    cout << "Back: " << back << endl;

    return 0;
}
