#include <iostream>

using namespace std;

int main()
{
    int num = 7, factor = 2;
    char letter = 'A';
    float result = 0.0;

    cout << "num = " << num << ", factor = " << factor << endl;
    cout << "Integer division - num / factor: " << (num / factor) << endl;
    result = (float)(num) / factor;
    cout << "Cast division - (float) num / factor : " << result << endl;
    num = static_cast<int>(letter);
    cout << "Cast charater to int - static_cast <int> ( 'A' ) : " << num << endl;
    letter = static_cast<char>(70);
    cout << "Cast integer to char - static_cast <char> ( 70 ) : " << letter << endl;

    return 0;
}
