#include <bits/stdc++.h>
using namespace std;

string dup(string s)
{
    if (s.size() == 0)
    {
        return "";
    }

    char ch = s[0];

    string ans = dup(s.substr(1));

    if (ch == ans[0])
    {
        return ans;
    }
    return ch + ans;
}

int main()
{
    string bb = "aaaaaabbbbcccdddaafr";
    sort(bb.begin(), bb.end());
    cout << bb << endl;
    string ans = dup(bb);
    cout << ans;
    return 0;
}