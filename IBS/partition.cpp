#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<int> &nums, int start, vector<int> &current, vector<vector<int>> &result)
{
    result.push_back(current);
    for (int i = start; i < nums.size(); i++)
    {
        current.push_back(i);
        backtrack(nums, i + 1, current, result);
        current.pop_back();
    }
}

int greatPartitions(vector<int> &nums, int k)
{
    vector<vector<int>> result;
    vector<int> current;
    int start = 0;
    backtrack(nums, start, current, result);

    int count = 0;
    for (auto partition : result)
    {
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (find(partition.begin(), partition.end(), i) != partition.end())
            {
                sum1 += nums[i];
            }
            else
            {
                sum2 += nums[i];
            }
        }
        if (sum1 >= k && sum2 >= k)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int k = 4;
    vector<int> nums = {1, 2, 3, 4};
    cout << greatPartitions(nums, k) << endl;

    return 0;
}
