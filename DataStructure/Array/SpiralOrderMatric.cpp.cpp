#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    // top     bottom     left   right
    int T = 0, B = n - 1, L = 0, R = m - 1;
    int arr[n][m];
    int dir = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    while (T <= B && L <= R)
    {
        if (dir == 0) // going to Right
        {
            for (int i = L; i <= R; i++)
            {
                cout << arr[T][i] << " ";
            }
            T = T + 1;
            dir = 1;
        }
        else if (dir == 1) // going to down
        {
            for (int i = T; i <= B; i++)
            {
                cout << arr[i][R] << " ";
            }
            R--;
            dir = 2;
        }
        else if (dir == 2) // going to left
        {
            for (int i = R; i >= L; i--)
            {
                cout << arr[B][i] << " ";
            }
            B--;
            dir = 3;
        }
        else if (dir == 3) // going to up
        {
            for (int i = B; i >= T; i--)
            {
                cout << arr[i][L] << " ";
            }
            L++;
            dir = 0;
        }
    }

    return 0;
}

// class Solution
// {
// public:
//     vector<int> spiralOrder(const vector<vector<int>> &matrix)
//     {
//         int rows = matrix.size();
//         if (rows == 0)
//             return vector<int>();
//         int cols = matrix[0].size();
//         int row = 0, col = 0, layer = 0;
//         vector<int> res;
//         res.push_back(matrix[0][0]);
//         int dir = 1;
//         for (int step = 1; step < rows * cols; step++)
//         {
//             switch (dir)
//             {       // based on dir, check and change dir, then move on
//             case 1: // supposed to go right
//                 if (col == cols - layer - 1)
//                 { // reach right bound
//                     row++;
//                     dir = 2;
//                 }
//                 else
//                     col++;
//                 break;
//             case 2: // supposed to go down
//                 if (row == rows - layer - 1)
//                 { // reach downside bound
//                     col--;
//                     dir = 3;
//                 }
//                 else
//                     row++;
//                 break;
//             case 3: // supposed to go left
//                 if (col == layer)
//                 { // reach left bound
//                     row--;
//                     dir = 4;
//                 }
//                 else
//                     col--;
//                 break;
//             case 4: // supposed to go up
//                 if (row == layer + 1)
//                 { // reach upside bound
//                     col++;
//                     dir = 1;
//                     layer++;
//                 }
//                 else
//                     row--;
//                 break;
//             }
//             res.push_back(matrix[row][col]);
//         }
//         return res;
//     }
// };
