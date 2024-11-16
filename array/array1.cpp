#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array";
    cin >> n;
    int num[n];
    int max = INT16_MIN;
    int smax = INT16_MIN;
    // filling into array
    cout << endl
         << "enter the element in array";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> num[i];
    }
    // printing array max
    for (int i = 0; i <= n - 1; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    cout << "max is " << max;
    // printing array smax
    for (int i = 0; i <= n - 1; i++)
    {
        if (smax < num[i] && num[i] != max)
        {
            smax = num[i];
        }
    }
    cout << "smax is " << smax;
}