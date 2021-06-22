#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void Sort(int arr[], int n)
{
    int low = 0, mid = 0, high = (n - 1);
    int i = 0;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {

            int temp = arr[mid];
            arr[mid] = arr[low];
            arr[low] = temp;
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {

            mid++;
        }
        else if (arr[mid] == 2)
        {

            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << " BEFORE " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    Sort(arr, n);
    cout << endl
         << " AFTER " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}