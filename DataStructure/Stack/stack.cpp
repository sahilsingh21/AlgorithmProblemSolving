#include <iostream>

using namespace std;
int c;

void add(int st[], int n, int val)
{
    if (c != n - 1 && c < n - 1)
    {
        cout << "enter the value :";
        cin >> val;
        cout << endl;
        c++;
        st[c] = val;
    }
    else
    {
        cout << "Stack is full " << endl;
    }
}

void delet(int st[])
{
    if (c != -1 && c >= 0)
    {
        st[c] = -1;
        c--;
    }
    else
    {
        cout << "Stack is empty " << endl;
    }
}

void print(int st[])
{
    if (c != -1)
    {
        cout << "Value of the stack is " << endl;
        for (int i = 0; i <= c; i++)
        {
            cout << st[i] << " ";
        }
    }
    else
    {
        cout << "Stack is NULL " << endl;
    }
    cout << endl;
}
int main()
{
    int n;
    c = -1;
    int a = 0;
    cout << "Enter the size of stack : ";
    cin >> n;
    cout << endl;
    int stack[n];

    while (a != 3)
    {
        int temp;
        int val;
        cout << "press 0 to add" << endl
             << "press 1 to delete" << endl
             << "press 2 to print" << endl
             << "press 3 to get out" << endl;
        cin >> temp;
        a = temp;
        if (a == 0)
        {
            add(stack, n, val);
        }
        else if (a == 1)
        {
            delet(stack);
        }
        else if (a == 2)
        {
            print(stack);
        }
    }

    return 0;
}