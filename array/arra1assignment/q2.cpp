// Q2. Find the second largest element in the given Array in one pass.
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int smax = INT16_MIN;
    int max = INT16_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > smax && arr[i] != max)
            smax = arr[i];
    }
    cout << "max is " << max << endl
         << "secondmax is" << smax;
}