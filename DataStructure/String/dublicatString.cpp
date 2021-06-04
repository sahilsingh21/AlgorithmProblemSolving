#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[27][2] = {0};
    string st = "GEEKSFORGEEKS";

    for (int i = 0; i < st.size(); i++)
    {
        int temp = (st[i] - 65);
        // cout << temp << " ";
        temp = temp % 27;
        // cout << temp << endl;
        arr[temp][1]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i][1] > 1)
        {
            char temp = 'A' + i;
            char a = temp;
            cout << a << ", count = " << arr[i][1] << endl;
        }
    }

    return 0;
}