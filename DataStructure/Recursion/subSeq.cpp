#include <bits/stdc++.h>
using namespace std;

void sub(string s, string ans)
{

    if (s.size() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];

    sub(s.substr(1), ans);
    sub(s.substr(1), ans + ch);
}

int main()
{

    sub("ABC", "");

    return 0;
}