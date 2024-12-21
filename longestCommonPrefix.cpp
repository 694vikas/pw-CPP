#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<string> st;
    st.push_back("flower");
    st.push_back("flight");
    st.push_back("flow");
    for (int i = 0; i < 3; i++)
    {
        cout << st[i] << endl;
    }
    sort(st.begin(), st.end());
    for (int i = 0; i < 3; i++)
    {
        cout << st[i] << endl;
    }
    string first = st[0];
    string last = st[2];

    string s = "";
    for (int i = 0; i < first.length(); i++)
    {
        if (first[i] == last[i])
        {
            s += first[i];
        }
    };
    cout << "common string is " << s;
}
