#include <bits/stdc++.h>

using namespace std;
#define Max 1000

bool has[Max + 1][2];

void insert(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            has[arr[i]][0] = 1;
        }
        else
        {
            arr[i] = abs(arr[i]);
            has[arr[i]][1] = 1;
        }
    }
}

bool search(int n)
{
    if (n >= 0)
    {
        if (has[n][0] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        n = abs(n);
        if (has[n][1] == 1)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "enter the size of Array :";
    cin >> n;
    int arr[n];
    cout << endl
         << "enter the Array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insert(arr, n);

    int key;
    cout << endl
         << "Enter the serching value :";
    cin >> key;
    bool get;
    get = search(key);
    if (get)
    {
        cout << endl
             << "Present";
    }
    else
    {
        cout << endl
             << "Not Present";
    }
    return 0;
}