#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / 4;
    bool flag = true; // is sorted by default
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            flag = false;
        }
    }
    if (flag == true)
    {
        cout << "sorted";
    }
    else
    {
        cout << "not sorted";
    }
}