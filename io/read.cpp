#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // char letter;
    string line;
    int i;

    ifstream reader("poem.txt");
    if (!reader)
    {
        cout << "Error opening input file" << endl;
        return -1;
    }
    for (i = 0; !reader.eof(); i++)
    {
        // reader.get(letter);
        // cout << letter;
        getline(reader, line);
        cout << line << endl;
    }
    reader.close();
    cout << "Iterations: " << i << endl;

    return 0;
}
