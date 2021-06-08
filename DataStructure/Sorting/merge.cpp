#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int n = r - l;
    int brr[r];
    int i = l;
    int j = mid + 1;
    int k = l;

    while (i <= mid && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            brr[k] = arr[i];
            i++;
        }
        else
        {
            brr[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        brr[k] = arr[i];
        i++;
        k++;
    }

    while (j <= r)
    {
        brr[k] = arr[j];
        j++;
        k++;
    }

    for (int i = l; i <= r; i++)
    {
        arr[i] = brr[i];
        //cout << arr[i] << " ";
    }
    // cout << endl;
}

void mergeSort(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int mid = l + (r - l) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
    // for (int i = l; i <= r; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    cout << endl;
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
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}