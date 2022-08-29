#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string term = "100";
    int number = 100;
    int num;
    string text;
    stringstream stream;

    // Uses stream output operator to load string value into stringstream object
    stream << term;
    // Uses stream input operator to extract content from stringstream object
    stream >> num;
    cout << "string 'term' with value: " << term
         << " coverted to int with value: " << num << endl;
    num /= 4;
    cout << "int value after division by 4: " << num << endl;

    // Resets stringstream object for reuse;
    stream.str(""); // empties the contents
    stream.clear(); // empties the bit flags

    stream << number;
    stream >> text;
    text += " Per Cent";
    cout << "String value: " << text << endl;

    return 0;
}
