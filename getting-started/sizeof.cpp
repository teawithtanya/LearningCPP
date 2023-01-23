#include <iostream>

using namespace std;

int main()
{
    int num;
    int nums[50];
    int *nump;
    float decimal;
    bool isTrue;
    unsigned int max;
    char letter;
    char *letterp;
    double pi;
    short int number;
    char letters[26];

    cout << "sizeof int: " << sizeof num << endl;
    cout << "sizeof int[50] array: " << sizeof nums << endl;
    cout << "size of int* pointer: " << sizeof nump << endl;
    cout << "sizeof short int: " << sizeof number << endl;
    cout << "sizeof unsigned int: " << sizeof max << endl;
    cout << "sizeof float: " << sizeof decimal << endl;
    cout << "sizeof double: " << sizeof pi << endl;
    cout << "sizeof char: " << sizeof letter << endl;
    cout << "sizeof char*: " << sizeof letterp << endl;
    cout << "sizeof char[26] array: " << sizeof letters << endl;
    cout << "sizeof bool: " << sizeof isTrue << endl;

    return 0;
}