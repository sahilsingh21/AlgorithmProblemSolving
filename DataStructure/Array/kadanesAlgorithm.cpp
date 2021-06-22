#include <bits/stdc++.h>

using namespace std;

int kadane(int arr[], int n)
{
    int max = 0, maxEnd = 0;
    for (int i = 0; i < n; i++)
    {
        max = max + arr[i];
        if (max > 0 && maxEnd < max)
        {
            maxEnd = max;
        }
        else if (max < 0)
        {
            max = 0;
        }
    }
    return maxEnd;
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};

    cout << kadane(arr, 8);
    return 0;
}