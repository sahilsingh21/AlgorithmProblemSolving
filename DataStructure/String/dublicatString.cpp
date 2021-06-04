#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[27][2] = {0};
    string st = "GeeksForGeeks";

    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] >= 65 && st[i] <= 90)
        {
            int temp = (st[i] - 65);
            temp = temp % 27;
            arr[temp][1]++;
        }
        else if (st[i] >= 97 && st[i] <= 122)
        {
            int temp = (st[i] - 97);
            temp = temp % 27;
            arr[temp][1]++;
        }
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