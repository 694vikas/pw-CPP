#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int v)
    {
        val = v;
        next = NULL;
    }
};
class Stack
{
public:
    Node *head = NULL;
    int size;
    void push(int v)
    {
        Node *t = new Node(v);
        t->next = head;
        head = t;
        size++;
    }
    void pop()
    {
        if (head == NULL)
        {
            cout << "the stack is empty";
            return;
        }
        head = head->next;
        size--;
    }
    int top()
    {
        if (head == NULL)
        {
            cout << "the stack is empty";
            return -1;
        }
        return head->val;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        temp = head;
    }

    Stack()
    {
        size = 0;
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
    st.display();
    cout << endl;
    cout << st.size;
    cout << endl;
    st.display();
    cout << endl;
}