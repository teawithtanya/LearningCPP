#include <iostream>
#include <string>

using namespace std;

int main()
{
    string lang = "C++";
    string term = " Programming";
    string text = "C++ Programming";

    cout << "Concatenated: " << (lang + term) << endl;
    cout << "Original: " << lang << endl
         << endl;

    cout << "Appended: " << lang.append(term) << endl;
    cout << "Original: " << lang << endl
         << endl;

    cout << "Differ: " << (lang == term) << endl;
    cout << "Match: " << (lang == text) << endl
         << endl;

    cout << "Match: " << lang.compare(text) << endl;
    cout << "Differ: " << lang.compare(term) << endl;
    cout << "Lower ASCII: " << lang.compare("zzzzz") << endl
         << endl;

    string ad = "ad";
    string bc = "bc";
    cout << "Compare ad and bc: " << ad.compare(bc) << endl;

    return 0;
}
