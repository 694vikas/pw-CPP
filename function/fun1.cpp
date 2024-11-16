#include <iostream>
using namespace std;
void star(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    star(3);
    star(4);
    star(5);
}