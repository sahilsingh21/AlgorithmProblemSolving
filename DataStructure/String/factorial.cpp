#include <bits/stdc++.h>

using namespace std;

string add(string a, string b)
{
    string st = "";
    int carry = 0;
    if (b.size() > a.size())
    {
        swap(a, b);
    }
    int n1 = a.size();
    int n2 = b.size();

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for (int i = 0; i < n1; i++)
    {
        if (i < n2)
        {
            int temp;
            temp = ((a[i] - '0') + (b[i] - '0') + carry);
            carry = temp / 10;
            temp = (temp % 10);
            st.push_back(temp + '0');
        }
        else
        {
            int temp;
            temp = ((a[i] - '0') + carry);
            carry = temp / 10;
            temp = (temp % 10);
            st.push_back(temp + '0');
        }
    }
    reverse(st.begin(), st.end());
    return st;
}

string mult(string a, string b)
{
    string st = "";
    string ft = "0";
    int carry = 0;
    if (b.size() > a.size())
    {
        swap(a, b);
    }
    int n1 = a.size();
    int n2 = b.size();

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int flag = 1;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            int temp;
            temp = ((a[j] - '0') * (b[i] - '0')) + carry;
            carry = temp / 10;
            temp = temp % 10;
            st.push_back(temp + '0');
            if (j == n1 - 1)
            {
                st.push_back(carry + '0');
            }
        }
        carry = 0;
        // cout << st << " " << ft << endl;
        reverse(st.begin(), st.end());

        ft = add(st, ft);

        // cout << st << " " << ft << endl;

        st.clear();
        for (int k = 0; k < flag; k++)
        {
            st.push_back('0');
        }
        flag++;
    }
    return ft;
}

string factorial(int n)
{
    string store = "1";
    for (int i = 2; i <= n; i++)
    {
        //cout << store << endl;
        string temp = to_string(i);
        store = mult(temp, store);
    }
    int j = 0;
    while (store[j] == '0')
    {
        store.erase(store.begin() + 0);
    }
    return store;
}

int main()
{
    string p = factorial(100); //304671
    // string m = mult("4455", "99776"); // 444,502,080
    cout << endl
         << p;

    return 0;
}