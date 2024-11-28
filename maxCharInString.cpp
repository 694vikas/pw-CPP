#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string st = "leetcode";
    vector<int> arr(26, 0);
    // string wala ko array me dalo (kaunsa char kitna baar gya hai)
    for (int i = 0; i < st.length(); i++)
    {
        char ch = st[i];
        int ascii = (int)ch;
        arr[ascii - 97]++;
    }
    // arry ka max find krna hai(array me iterate kro aur find kro max values of array[i])
    int mx = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > mx)
            mx = arr[i];
    }
    // max element bas find kiye hai na
    // actual char and max find krna hai
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == mx)
        {
            int ascii = i + 97;
            char ch = (int)ascii;
            cout << ch << " " << mx;
        }
    }
}