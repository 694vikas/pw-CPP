#include <iostream>
using namespace std;
class Stack
{
public:
    int arr[5];
    int idx;

    Stack()
    {
        idx = -1;
    }
    void push(int val)
    {
        if (idx == (sizeof(arr) / 4) - 1)
        {
            cout << "the stack is full";
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop()
    {
        if (idx == -1)
        {
            cout << "the stack is empty ";
            return;
        }
        idx--;
    }
    int top()
    {
        if (idx == -1)
        {
            cout << "the stack is empty ";
            return -1;
        }
        return arr[idx];
    }
    int size()
    {
        return idx + 1;
    }
    void display()
    {
        for (int i = 0; i <= idx; i++)
        {
            cout << arr[i] << " ";
        }
    }
    void displayRev()
    {
        for (int i = idx; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
    }
    void displayRec()
    {
        if (idx == -1)
            return;
        cout << arr[idx] << " ";

        displayRec();
        idx--;
    }
};
int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.display();
    cout << endl;
    st.displayRev();
    cout << st.top();
    cout << endl;
    cout << endl;
    st.displayRec();
}