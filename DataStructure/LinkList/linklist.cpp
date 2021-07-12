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
    if (temp == NULL)
    {
        cout << "Node is NULL" << endl;
        return;
    }
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

//deleting value by key
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

//deleting value by position number

void del(Node **head, int pos)
{
    int i = 0;
    Node *temp = *head;
    Node *pre = NULL;
    if (*head == NULL)
    {
        return;
    }

    if (i == pos)
    {
        *head = temp->next;
        delete temp;
        return;
    }

    while (temp != NULL && i != pos)
    {
        pre = temp;
        temp = temp->next;
        i++;
    }
    if (i != pos)
    {
        return;
    }

    if (i == pos)
    {
        pre->next = temp->next;
        delete temp;
        return;
    }
    return;
}

//Deleting all nodes in one call

void DeleteAll(Node **head)
{
    Node *curr = *head;

    while (curr != NULL)
    {
        *head = curr->next;
        free(curr);
        curr = *head;
    }
    *head = NULL;
}

//Find lenght of link list

void nodeSize(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << "Node size is : " << count << endl;
}

//search element
void find(Node *head, int val)
{
    Node *src = head;
    int count = 0;
    while (src != NULL)
    {
        count++;
        if (src->data == val)
        {
            cout << "Value is Found in position : " << count << endl;
            return;
        }
        src = src->next;
    }
    cout << "Value is not found" << endl;
    return;
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

    // DeleteAll(&head);
    //print(head);

    nodeSize(head);
    find(head, 6);
    find(head, 9);

    return 0;
}