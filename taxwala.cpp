#include <iostream>
#include <vector>
using namespace std;
int removeDuplicate(int k, int arr[])
{
    vector<int> result;
    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (arr[i] == arr[j])
            {
                int common = arr[i];
                result.push_back(common);
            }
        }
    }
}

int main()
{
    int a[8] = {1, 1, 3, 2, 1, 4, 5, 4};
    cout << removeDuplicate(8, a);
}