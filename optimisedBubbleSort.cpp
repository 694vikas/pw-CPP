#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                flag = false;
            }
        };
        if (flag == true)
            break;
    };
    for (int i = 0; i < n - 1; i++)
    {
        cout << "sorted array is:" << a[i] << " ";
    }
}