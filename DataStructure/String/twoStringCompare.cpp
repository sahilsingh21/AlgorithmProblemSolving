#include <bits/stdc++.h>

using namespace std;

bool compare(string s1, string s2)
{

    if (s1.size() != s2.size())
    {
        return false;
    }
    else
    {
        int n = s1.size();
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
            {
                char temp = s1[0];
                s1.erase(s1.begin());
                s1.push_back(temp);
                // cout << "i " << i << " " << s1 << endl;
            }
            for (int j = 0; j < n; j++)
            {
                if (s1[j] != s2[j])
                {
                    // cout << "j " << j << " " << s1 << endl;
                    c = 0;
                    break;
                }
                else
                {
                    c++;
                }
            }
        }
        if (c > 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    string s1 = "AACD";
    string s2 = "ACDA";
    bool a = compare(s1, s2);
    if (a == true)
    {
        cout << "Strings are rotations of each other";
    }
    else
    {
        cout << "Strings are not rotations of each other";
    }
    return 0;
}