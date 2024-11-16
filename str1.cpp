#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
int main()
{ // sort ascii value k order me krke dega
    string str1 = "physicswallah";
    string str2 = "wallahphysics";
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if (str1 == str2)
    {
        cout << true;
    }
}