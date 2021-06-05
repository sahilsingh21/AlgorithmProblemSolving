#include <bits/stdc++.h>
using namespace std;

vector<string> findMissingRanges(vector<int> &nums, int lower, int upper)
{
    // write your code here
    int n = nums.size() - 1;
    if (nums[0] > lower)
    {
        reverse(nums.begin(), nums.end());
        nums.push_back(lower - 1);
        reverse(nums.begin(), nums.end());
    }
    if (nums[n] < upper)
    {
        nums.push_back(upper + 1);
    }

    vector<string> st;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int j = i + 1;
        if (nums[i] + 1 != nums[j])
        {
            int temp = nums[i] + 1;
            if (nums[j] - 1 != nums[i])
            {
                int temp1 = nums[j] - 1;
                if (temp != temp1 && temp >= lower - 1 && temp <= upper + 1 && temp1 >= lower - 1 && temp1 <= upper + 1)
                {
                    st.push_back(to_string(temp) + "->" + to_string(temp1));
                }
                else
                {
                    if (temp >= lower - 1 && temp <= upper + 1)
                    {
                        st.push_back(to_string(temp));
                    }
                }
            }
        }
    }
    return st;
}

int main()
{
    vector<string> set;
    vector<int> nums = {0, 1, 2, 3, 7};
    int lower = 0;
    int upper = 7;

    set = findMissingRanges(nums, lower, upper);

    for (int i = 0; i < set.size(); i++)
    {
        cout << set[i] << " ";
    }

    return 0;
}