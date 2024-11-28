#include <iostream>
using namespace std;
int main()
{
    int a[8] = {1, 2, 6, 4, 5, 89, 90, 78};
    for (int i = 0; i < 8 - 1; i++)
    {
        bool flag = true;

        for (int j = 0; j < 8 - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                flag = false;
            }
        }

        if (flag == true)
            break;
    }

    for (int i = 0; i < 8; i++)
    {
        cout << a[i] << " ";
    }
}