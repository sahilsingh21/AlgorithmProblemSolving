#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;
};

void print(Node *temp)
{
    while (temp != NULL)
    {
        cout << "->" << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

void insertHead(Node **head, int val)
{
    Node *temp = new Node;
    temp->data = val;

    temp->next = *head;
    *head = temp;
}

void insertTail(Node **head, int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->next = NULL;

    Node *last = *head;

    if (*head == NULL)
    {
        *head = temp;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = temp;
    return;
}

void Delete(Node **head, int key)
{
    Node *temp = *head;
    Node *pre = NULL;

    if (temp != NULL && temp->data == key)
    {
        *head = temp->next;
        delete temp;
    }
    else
    {
        while (temp != NULL && temp->data != key)
        {
            pre = temp;
            temp = temp->next;
        }
        if (temp == NULL)
        {
            return;
        }

        pre->next = temp->next;
        delete temp;
    }
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node;
    second = new Node;
    third = new Node;

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    print(head);

    insertHead(&head, 4);
    insertHead(&head, 5);

    print(head);

    insertTail(&head, 6);
    insertTail(&head, 7);

    print(head);

    Delete(&head, 3);
    print(head);

    return 0;
}