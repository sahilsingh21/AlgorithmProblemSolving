#include <bits/stdc++.h>

using namespace std;

int parentNode(int arr[], int v, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == v)
        {
            int t = (i - 1);
            if (t < 0)
            {
                return -1;
            }
            else
            {
                t = t / 2;
                return arr[t];
            }
        }
    }
    return -1;
}

int leftNode(int arr[], int v, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == v)
        {
            int t = (i * 2) + 1;
            if (t >= n)
            {
                return -1;
            }
            else
            {
                return arr[t];
            }
        }
    }
    return -1;
}

int rightNode(int arr[], int v, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == v)
        {
            int t = (i * 2) + 2;
            if (t >= n)
            {
                return -1;
            }
            else
            {
                return arr[t];
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of Array :";
    cin >> n;
    int arr[n];
    cout << endl
         << "Enter the values of arrays :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl
         << "Enter the searching value :";
    int v;
    cin >> v;
    cout << endl;
    int s = parentNode(arr, v, n);
    if (s == -1)
    {
        cout << "ROOT" << endl;
    }
    else
    {
        cout << "Parent is :" << s << endl;
    }
    int l = leftNode(arr, v, n);
    int r = rightNode(arr, v, n);
    if (l == -1)
    {
        cout << "NULL" << endl;
    }
    else
    {
        cout << "Left child is :" << l << endl;
    }

    if (r == -1)
    {
        cout << "NUll" << endl;
    }
    else
    {
        cout << "right child is :" << r << endl;
    }

    return 0;
}