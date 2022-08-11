#include <iostream>

using namespace std;

int computeFactorials(int, int);
int factorial(int);

int main()
{
    computeFactorials(1, 8);
    return 0;
}

int computeFactorials(int num, int max)
{
    cout << "Factorial of " << num << ": ";
    cout << factorial(num) << endl;
    num++;
    if (num > max)
        return 0;
    else
        computeFactorials(num, max);
}

inline int factorial(int n)
{
    return (n == 1) ? 1 : (factorial(n - 1) * n);
}

/*
int factorial(int n)
{
    int result;
    if (n == 1)
        result = 1;
    else
        result = (factorial(n - 1) * n);
    return result;
}
*/
