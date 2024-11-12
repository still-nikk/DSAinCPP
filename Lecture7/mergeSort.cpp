#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums, int l, int m, int r)
{
    // create 2 temporary arrays
    vector<int> arr1(m - l + 1);
    vector<int> arr2(r - m);

    // fill in the values in the arrays
    for (int i = 0; i < arr1.size(); i++)
    {
        arr1[i] = nums[l + i];
    }

    for (int i = 0; i < arr2.size(); i++)
    {
        arr2[i] = nums[m + 1 + i ];
    }

    // initialize 2 pointers for both subarrays
    int a = 0, b = 0;
    // initialize another pointer for the main array
    int k = l;

    // compare the two sub arrays and merge them
    while (a < arr1.size() && b < arr2.size())
    {
        if (arr1[a] < arr2[b])
        {
            nums[k++] = arr1[a++];
        }
        else
        {
            nums[k++] = arr2[b++];
        }
    }

    while (a < arr1.size())
    {
        nums[k++] = arr1[a++];
    }

    while (b < arr2.size())
    {
        nums[k++] = arr2[b++];
    }
}

void mergeSort(vector<int> &nums, int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(nums, l, m);
        mergeSort(nums, m + 1, r);

        merge(nums, l, m, r);
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
    mergeSort(nums, 0, nums.size() - 1);
    for (auto i : nums)
    {
        cout << i << " ";
    }
    return 0;
}