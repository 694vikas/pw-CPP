#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "mam";
    int start = 0;
    int end = s.size() - 1;
    bool flag = true; // palidrome
    while (start < end)
    {
        if (s[start] == s[end])
        {
            start++;
            end--;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << "the given string is palidrome ";
    }
    else
    {
        cout << "not palindrome";
    }
}