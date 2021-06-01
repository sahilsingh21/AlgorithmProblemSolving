// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "126";
    string b = "35";
    string c;
    // int al = a.size();
    // int bl = b.size();
    int carry = 0;
    int mul = 1;
    // if (al < bl)
    // {
    //     swap(b, a);
    // }

    // reverse(a.begin(), a.end());
    // reverse(b.begin(), b.end());
    int n = a.size();
    int m = b.size();
    vector<char> st;
    vector<char> tp;
    int flag = 0;
    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            mul = (((a[j] - '0') * (b[i] - '0')) + carry);
            //cout << mul << " " << carry << endl;
            if (mul > 9)
            {
                carry = mul / 10;
                int temp = (mul % 10) + '0';
                st.push_back(temp);
                mul = 1;
            }
            else if (mul <= 9)
            {
                carry = 0;
                int temp = (mul % 10) + '0';
                st.push_back(temp);
                mul = 1;
            }
            // c = itos(mul);
        }
        carry = 0;
        for (int k = st.size() - 1; k >= 0; k--)
        {
            tp.push_back(st[k]);
        }
        for (int l = 0; l < flag; l++)
        {
            tp.push_back('0');
        }
        flag++;
        st.clear();

        tp.push_back('+');
    }

    // c = ((a[0] - '0') * (b[0] - '0'));
    // c = c[0] + '0';
    // cout << n << " " << m << " " << a << " " << b << endl;
    cout << endl
         << "string" << endl;
    for (int i = 0; i < tp.size(); i++)
    {
        cout << tp[i];
    }

    vector<char> pre;
    vector<char> curr;
    vector<char> store;
    bool fl = 0;

    for (int i = 0; i < tp.size() - 1; i++)
    {
        if (tp[i] != '+')
        {
            curr.push_back(tp[i]);
        }
        if (tp[i] == '+')
        {
            if (fl == false)
            {
                for (int j = 0; j < curr.size(); j++)
                {
                    pre.push_back(tp[j]);
                }
                curr.clear();
                fl = 1;
            }
            else if (fl == true)
            {
                int cr = 0;
                int q = 0;
                for (int h = curr.size() - 1; h >= 0; h--)
                {
                    if (q < pre.size())
                    {
                        int temp;
                        temp = (((curr[h] - '0') + (pre[h] - '0')) + cr);
                        cr = temp / 10;
                        store.push_back((temp % 10) + '0');
                    }
                    else
                    {
                        int temp;
                        temp = ((curr[h] - '0') + cr);
                        store.push_back(temp + '0');
                    }
                }
                pre.clear();
                curr.clear();
                cout << "helooooo";
                for (int u = 0; u < store.size(); u++)
                {
                    pre.push_back(store[u]);
                }
            }
        }
    }
    cout << "store" << endl;
    for (int i = 0; i < pre.size(); i++)
    {
        cout << pre[i] << " ";
    }

    return 0;
}