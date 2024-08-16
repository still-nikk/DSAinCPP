#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    if (nums.size() == 1)
    {
        return;
    }
    int start = 0;
    int e = nums.size() - 1;
    while (nums[start] != 0 && start < e)
    {
        start++;
    }
    int end = start + 1;
    while (end < nums.size() && start < nums.size())
    {
        while (nums[end] == 0)
        {
            end++;
            if (end >= nums.size())
            {
                return;
            }
        }
        if (end >= nums.size())
        {
            break;
        }
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end++;
    }
}

int main()
{

    vector<int> nums = {1};
    moveZeroes(nums);
    for (auto i : nums)
    {
        cout << i << " ";
    }

    return 0;
}