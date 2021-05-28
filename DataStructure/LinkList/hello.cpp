#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void PrintList(Node *n)
{
    while (n->next != NULL)
    {
        cout << n->data << " ";
        n = n->next;
        cout << n << " " << n->next << " " << endl;
    }
}
void newNode(Node *h, int val)
{
    if (h == NULL)
    {
        h = new Node;
        h->data = val;
    }
}

void Create(Node *s)
{
    Node *temp = new Node;
    temp->next = NULL;
    if (s->next == NULL)
    {
        int a;
        cout << "Enter the first value :";
        cin >> a;
        newNode(s, a);
    }
    else
    {
        int a;
        cout << "Enter the value :";
        cin >> a;
        temp->next = s;
        s->next = temp;
        s->data = a;
    }
}

int main()
{
    Node *head = NULL;
    // Node *end = NULL;
    // Node *p = head;
    // head = new Node;
    // end = new Node;

    head->next = NULL;
    // end->next = NULL;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Create(head);
    }

    PrintList(head);

    return 0;
}