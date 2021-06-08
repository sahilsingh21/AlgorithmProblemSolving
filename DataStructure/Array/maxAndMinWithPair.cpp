#include <bits/stdc++.h>
using namespace std;

int MaxMin(int arr[], int n)
{
    pair<int, int> m;
    int max = 0;
    int min = 10000;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    m.first = min;
    m.second = max;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    pair<int, int> m;
    m.first = 100000;
    m.second = 0;
    // int max = 0;
    // int min = 10000;
    for (int i = 0; i < n; i++)
    {
        if (m.second < arr[i])
        {
            m.second = arr[i];
        }
        if (m.first > arr[i])
        {
            m.first = arr[i];
        }
    }
    cout << "Minimun value is: " << m.first << "\n Maximum value is: " << m.second;

    return 0;
}