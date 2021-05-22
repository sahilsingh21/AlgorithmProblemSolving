#include <iostream>
#include <vector>
#include <array>
using namespace std;

void maxTill(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] < arr[i])
        {
            max = arr[i];
        }
        else if (arr[i - 1] >= arr[i])
        {
            max = arr[i - 1];
        }
        arr[i] = max;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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
    maxTill(arr, n);
    return 0;
}