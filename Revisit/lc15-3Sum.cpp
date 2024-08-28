#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 2; i++)
    {
        if (i != 0 && nums[i] == nums[i - 1])
        {
            // i++;
            continue;
        }
        int l = i + 1;
        int r = nums.size() - 1;
        int remain = 0 - nums[i];
        // bool isZero = false;
        while (l < r)
        {
            if (nums[l] + nums[r] == remain)
            {
                vector<int> temp;
                // isZero = true;
                temp.push_back(nums[i]);
                temp.push_back(nums[l]);
                temp.push_back(nums[r]);
                sort(temp.begin(), temp.end());
                ans.push_back(temp);
                l++;
                r--;
            }
            else if (nums[l] + nums[r] < remain)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        // if(isZero) {
        //     sort(temp.begin(), temp.end());
        //     ans.push_back(temp);
        // }
    }
    return ans;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    sort(nums.begin(), nums.end());
    for (auto i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i : threeSum(nums))
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}