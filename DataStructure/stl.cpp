#include <bits/stdc++.h>

using namespace std;

int main()
{

    pair<int, string> v;

    v.first = 100;
    v.second = "sahil";

    cout << v.first << " " << v.second;

    map<string, int> w;

    w["Singh"] = 500;

    map<string, int>::iterator itr;
    for (itr = w.begin(); itr != w.end(); ++itr)
    {
        cout << '\t' << itr->first << '\t' << itr->second << '\n';
    }

    return 0;
}