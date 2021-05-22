#include <iostream>
using namespace std;

int main()
{
    int count;
    cin >> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    int curr = 0;
    for (int i = 0; i < count; i++)
    {
        curr = 0;
        for (int j = i; j < count; j++)
        {
            curr += arr[j];
            cout << curr << " ";
        }
        cout << endl;
    }

    return 0;
}