#include <iostream>
using namespace std;
int main()
{
    //      Ques : Count the number of elements in given array
    //   greater than a given number x.
    int arr[5] = {1, 2, 3, 4, 5};
    int count = 0;
    int check = 2;
    for (int i = 0; i <= 4; i++)
    {
        if (check < arr[i])
            count++;
    }
    cout << count; // 3
}
