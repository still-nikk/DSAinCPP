#include <bits/stdc++.h>
using namespace std;


int partition(vector<int> &nums, int l, int r)
{
    int pivot = nums[r];
    int i = l - 1;

    for (int j = l; j < r; j++)
    {
        if (nums[j] < pivot)
        {
            i++;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[i+1], nums[r]);
    return i + 1;
}

void quickSort(vector<int> &nums, int l, int r)
{
    if (l < r)
    {
        int pi = partition(nums, l, r);
        quickSort(nums, l, pi - 1);
        quickSort(nums, pi + 1, r);
    }
}

int main()
{

    vector<int> nums = {5, 2, 3, 7, 1, 4};
    for (auto i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
    quickSort(nums, 0, nums.size() - 1);
    for (auto i : nums)
    {
        cout << i << " ";
    }

    return 0;
}