#include <bits/stdc++.h>
#include <string>
#include <cstdlib>
#include <sstream>
using namespace std;

string count(int n)
{
    string st = "";
    ostringstream tip;
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        if (st == "")
        {
            st = st + to_string(i);
            // cout << st << " st \n";
        }
        else
        {
            for (int j = 0; j < st.size(); j++)
            {
                string t;
                t.push_back(st[j]);
                // stringstream geek(st[j]);
                // int temp = stoi(st[j]);
                // cout << temp << endl;
                int num = stoi(t);
                arr[num] += 1;
                cout << st[j] << " \\\\ " << arr[num] << " //// " << num << endl;
            }
            for (int k = 0; k < st.size(); k++)
            {
                string t1;
                t1.push_back(st[k]);
                int t = stoi(t1);
                int v = arr[t];
                arr[t] = 0;

                // cout << t << " " << v << " ";
                if (v > 0)
                {
                    string tik = to_string(v);
                    // char tik2 = t;
                    tip = to_string(v).append(t);
                    // tip.push_back(v);
                    // tip.push_back(t);
                    // cout << tik << " " << tik2 << " "
                    //  << "IN " << tip << endl;
                }
            }
            // cout << tip << endl;
            st = tip;
            tip.clear();
        }
        // arr[10] = {0};
    }
    return st;
}

int main()
{
    int n;
    cin >> n;
    string sop = count(n);
    // cout << sop;
    return 0;
}