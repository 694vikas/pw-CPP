#include <iostream>
using namespace std;
int main()
{
    int a[] = {20, 102, 33, 22, 2};
    int n = 5;
    // bubble sort
    cout << "Before Sorted Array is :";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
    cout << endl;
    cout << "Sorted Array is :";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}