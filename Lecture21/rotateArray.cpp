#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    // if (nums.size() - k < k)
    // {
    //     int l = nums.size() - k;
    //     while (k > 0)
    //     {
    //         int temp = nums[0];
    //         for (int i = 0; i < nums.size() - 1; i++)
    //         {
    //             nums[i] = nums[i + 1];
    //         }
    //         nums[nums.size() - 1] = temp;
    //         k--;
    //     }
    // }
    // else
    // {
    //     while (k > 0)
    //     {
    //         int temp = nums[nums.size() - 1];
    //         for (int i = nums.size() - 1; i >= 1; i--)
    //         {
    //             nums[i] = nums[i - 1];
    //         }
    //         nums[0] = temp;
    //         k--;
    //     }
    // }
    vector<int> temp(nums.size());
    // vector<int> temp;
    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i + k) % nums.size()] = nums[i];
    }
    nums = temp;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    int k = 2;
    rotate(nums, k);
    for (auto i : nums)
    {
        cout << i << " ";
    }
    return 0;
}