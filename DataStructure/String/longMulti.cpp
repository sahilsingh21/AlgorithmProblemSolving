// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

string add(string a, string b)
{
    if (b.length() > a.length())
    {
        swap(b, a);
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int n1 = a.length();
    int n2 = b.length();
    int carry = 0;
    string c = "";

    for (int i = 0; i < n2; i++)
    {
        int temp;
        temp = ((a[i] - '0') + (b[i] - '0')) + carry;
        carry = temp / 10;
        temp = (temp % 10) + '0';
        c.push_back(temp);
    }
    for (int i = n2; i < n1; i++)
    {
        int temp;
        temp = (a[i] - '0') + carry;
        carry = temp / 10;
        temp = (temp % 10) + '0';
        c.push_back(temp);
    }
    reverse(c.begin(), c.end());
    return c;
}

int main()
{
    string a = "9999999999";
    string b = "55555555";
    cout << "Value of x :";
    cin >> a;
    cout << endl
         << "Value of y :";
    cin >> b;
    string c;
    int al = a.size();
    int bl = b.size();
    int carry = 0;
    if (al < bl)
    {
        swap(b, a);
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int n = a.size();
    int m = b.size();
    string st;
    string tp;
    int flag = 0;
    for (int i = 0; i < b.size(); i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            int mul;
            mul = (((a[j] - '0') * (b[i] - '0')) + carry);
            if (j != (a.size() - 1))
            {
                carry = mul / 10;
                int temp = (mul % 10);
                temp = temp + '0';
                st.push_back(temp);
                mul = 1;
            }
            else if (j == (a.size() - 1))
            {
                carry = mul / 10;
                int temp = (mul % 10) + '0';
                st.push_back(temp);
                st.push_back((carry % 10) + '0');
                mul = 1;
                carry = 0;
            }
        }

        for (int k = (st.size() - 1); k >= 0; k--)
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

    string pre = "";
    string curr = "";
    string store = "";
    bool fl = 0;

    for (int i = 0; i <= tp.size() - 1; i++)
    {
        if (tp[i] != '+')
        {
            curr.push_back(tp[i]);
        }
        if (tp[i] == '+')
        {

            string temp = "";
            temp = add(pre, curr);
            pre = temp;
            curr.clear();
        }
    }

    cout << endl
         << "Multiply of x and y :" << pre;
    return 0;
}
