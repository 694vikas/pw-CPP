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
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
void displayRev(Node *head)
{
    if (head == NULL)
        return;
    displayRev(head->next);
    cout << head->val << " ";
}
void displayRec(Node *head)
{
    if (head == NULL)
        return;
    cout << head->val << " ";
    displayRec(head->next);
}
int size(Node *head)
{
    int size = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
};
void isPresent(Node *head, int v)
{

    Node *temp = head;
    bool flag = false;
    while (temp != NULL)
    {
        if (temp->val == v)
            flag = true;
        temp = temp->next;
    }
    if (flag == true)
    {
        cout << v << " is present";
    }
    else
        cout << v << " is not present";
};
int main()
{
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    displayRec(n1);
    cout << endl;
    displayRev(n1);
    cout << endl;
    cout << size(n1);
    cout << endl;

    isPresent(n1, 30);
}