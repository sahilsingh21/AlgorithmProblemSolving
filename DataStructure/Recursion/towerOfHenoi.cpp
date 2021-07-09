#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char sor, char dest, char help)
{
    if (n == 0)
    {
        return;
    }

    towerOfHanoi(n - 1, sor, help, dest);
    cout << "Moving to " << sor << " to " << dest << endl;
    towerOfHanoi(n - 1, help, dest, sor);
}

int main()
{

    towerOfHanoi(3, 'A', 'C', 'B');
    return 0;
}