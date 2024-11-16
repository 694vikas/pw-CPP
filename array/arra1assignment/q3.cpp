// Q3. Find the minimum value out of all elements in the array.
#include <iostream>
using namespace std;
int main()
{
    int num[5] = {1, 2, -2, 22, -1};
    int min = INT16_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    cout << "the minimum is " << min;
}