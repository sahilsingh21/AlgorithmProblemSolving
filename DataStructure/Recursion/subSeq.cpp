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
    int code = ch;
    sub(s.substr(1), ans);
    sub(s.substr(1), ans + ch);

    sub(s.substr(1), to_string(code));
}

int main()
{

    sub("AB", "");

    return 0;
}