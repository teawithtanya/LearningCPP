#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec(10);
    int i = 0;
    while (i < vec.size())
    {
        i++;
        if (i == 3)
        {
            cout << " | Skipped";
            continue;
        }
        if (i == 8)
        {
            cout << " | Done";
            break;
        }
        vec[i - 1] = i;
        cout << " | " << vec.at(i - 1);
    }
    cout << " | " << endl;

    return 0;
}
