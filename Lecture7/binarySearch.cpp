#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &nums, int key)
{
    int s = 0;
    int e = nums.size() - 1;
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if (nums[m] == key)
        {
            return m;
        }
        else if (nums[m] > key)
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
    }

    return -1;
}

int recursiveBinarySearch(vector<int> &nums, int key, int s, int e)
{
    if (s > e)
        return -1;

    int m = s + (e - s) / 2;

    if (nums[m] == key)
        return m;
    else if (nums[m] > key)
        return recursiveBinarySearch(nums, key, s, m - 1);
    else
        return recursiveBinarySearch(nums, key, m + 1, e);
}

int main()
{

    vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int key = 0;

    cout << binarySearch(nums, key) << endl;

    return 0;
}