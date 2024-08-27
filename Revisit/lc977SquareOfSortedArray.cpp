#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int> &nums)
{
    vector<int> ans;
    if (nums.empty())
        return ans;
    int s = 0;
    int e = nums.size() - 1;
    while (s <= e)
    {
        int squares = nums[s] * nums[s];
        int squaree = nums[e] * nums[e];
        if (squares > squaree)
        {
            ans.push_back(squares);
            s++;
        }
        else
        {
            ans.push_back(squaree);
            e--;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> nums = {-4, -1, 0, 3, 10};
    for (auto i : sortedSquares(nums))
    {
        cout << i << " ";
    }

    return 0;
}