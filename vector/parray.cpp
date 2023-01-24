#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

// function that assumes `a` has ten elements and prints their values
void print_array10(ostream &os, int *a)
{
    for (int i = 0; i < 10; i++)
    {
        os << a[i] << endl;
    }
}

// function that assumes `a` has `n` elements and prints their values
void print_array(ostream &os, int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        os << a[i] << endl;
    }
}

void print_vector(ostream &os, vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        os << v.at(i) << endl;
    }
}

// Programming Principles and Practice Using C++
// Chapter 17 - Drill
int main()
{
    // allocates ten `int`s on the free store using new
    int *ip = new int[10];
    // prints all 10 unintialized elements
    for (int i = 0; i < 10; i++)
    {
        cout << "ip[" << i << "]: " << ip[i] << endl;
    }
    delete[] ip;

    int *ip2 = new int[10];
    for (int i = 0; i < 10; i++)
    {
        ip2[i] = 100 + i;
    }
    cout << "ip2: " << endl;
    // prints all 10 intialized elements
    print_array10(cout, ip2);
    delete[] ip2;

    int *ip3 = new int[11];
    for (int i = 0; i < 11; i++)
    {
        ip3[i] = 100 + i;
    }
    cout << "ip3: " << endl;
    // prints only 10 of 11 initialized elements
    print_array10(cout, ip3);
    delete[] ip3;

    int *ip4 = new int[20];
    for (int i = 0; i < 20; i++)
    {
        ip4[i] = 100 + i;
    }
    cout << "ip4: " << endl;
    // prints all 20 elements
    print_array(cout, ip4, 20);
    delete[] ip4;

    vector<int> iv;
    for (int i = 0; i < 10; i++)
    {
        iv.push_back(100 + i);
    }
    cout << "iv: " << endl;
    // prints all 10 elements
    print_vector(cout, iv);

    vector<int> iv2;
    for (int i = 0; i < 11; i++)
    {
        iv2.push_back(100 + i);
    }
    cout << "iv2: " << endl;
    // prints all 11 elements
    print_vector(cout, iv2);

    vector<int> iv3;
    for (int i = 0; i < 20; i++)
    {
        iv3.push_back(100 + i);
    }
    cout << "iv3: " << endl;
    // prints all 20 elements
    print_vector(cout, iv3);

    int i1 = 7;
    int *p1 = &i1;
    cout << "p1: " << p1 << ", *p1: " << *p1 << endl;

    int *p2 = new int[7];
    for (int i = 0; i < 7; i++)
    {
        p2[i] = pow(2, i);
    }
    cout << "p2: " << p2 << endl;
    print_array(cout, p2, 7);

    int *p3 = p2;
    p2 = p1;
    p2 = p3;
    cout << "p1: " << p1 << endl;
    cout << "*p1: " << *p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "*p2: " << *p2 << endl;
    print_array(cout, p2, 7);
    p3 = 0;
    delete[] p2;

    // allocates 10 `int`s and initializes with powers of 2
    p1 = new int[10];
    for (int i = 0; i < 10; i++)
    {
        p1[i] = pow(2, i);
    }

    // allocates 10 `int`s and copies p1 element values
    p2 = new int[10];
    for (int i = 0; i < 10; i++)
    {
        p2[i] = p1[i];
    }
    cout << "p2: " << endl;
    print_array(cout, p2, 10);
    delete[] p1;
    delete[] p2;

    vector<int> iv4;
    for (int i = 0; i < 10; i++)
    {
        iv4.push_back(pow(2, i));
    }
    vector<int> iv5;
    for (int i = 0; i < iv4.size(); i++)
    {
        iv5.push_back(iv4.at(i));
    }
    cout << "iv5: " << endl;
    // prints all 10 elements
    print_vector(cout, iv5);

    return 0;
}