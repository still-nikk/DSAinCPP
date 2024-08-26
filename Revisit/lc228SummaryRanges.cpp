#include <bits/stdc++.h>
using namespace std;

vector<string> summaryRanges(vector<int> &nums)
{
    vector<string> ans;
    if (nums.size() == 1)
    {
        string s = to_string(nums[0]);
        ans.push_back(s);
        return ans;
    }
    int i = 0;
    while (i < nums.size())
    {
        string temp = "";
        int tempi = i;
        temp += to_string(nums[i]);
        while (i < nums.size() - 1 && nums[i + 1] == (nums[i] + 1))
        {
            i++;
        }
        if (i == tempi)
        {
            ans.push_back(temp);
        }
        else
        {
            temp += "->";
            temp += to_string(nums[i]);
            ans.push_back(temp);
        }
        i++;
    }
    return ans;
}

int main()
{

    vector<int> nums = {0, 1};
    for (auto i : summaryRanges(nums))
    {
        cout << i << " ";
    }

    return 0;
}