#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
    // int k = nums.size();
    // while (k > 0)
    // {
    //     bool isRotated = true;
    //     vector<int> temp(nums.size());
    //     for (int i = 0; i < nums.size(); i++)
    //     {
    //         temp[(i + k) % nums.size()] = nums[i];
    //     }

    //     for (int i = 0; i < temp.size() - 1; i++)
    //     {
    //         if (temp[i + 1] < temp[i])
    //         {
    //             isRotated = false;
    //             break;
    //         }
    //     }

    //     if (isRotated)
    //     {
    //         return true;
    //     }

    //     k--;
    // }
    // return false;

    int count = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i + 1] < nums[i])
        {
            count++;
        }
    }
    if (nums[nums.size() - 1] > nums[0])
    {
        count++;
    }
    return count <= 1;
}

int main()
{

    vector<int> nums = {1, 2, 3};
    if (check(nums))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}