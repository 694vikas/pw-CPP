#include <iostream>
#include <string>
using namespace std;
int main()
{
    string arr[] = {"001", "0067", "008097", "0000008"};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = stoi(arr[0]);
    string maxS;
    for (int i = 1; i < n; i++)
    {
        int x = stoi(arr[i]);
        if (x > max)
        {
            max = x;
            maxS = arr[i];
        }
    }
    cout << "max elemnt" << " " << max << endl
         << maxS;
}