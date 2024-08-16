#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> ans;
    int a = 0;
    int b = 0;
    while (a < m && b < n)
    {
        if (nums1[a] <= nums2[b])
        {
            ans.push_back(nums1[a++]);
        }

        else
        {
            ans.push_back(nums2[b++]);
        }
    }
    while (a < m)
    {
        // cout << "nums1" << endl;
        ans.push_back(nums1[a++]);
    }

    while (b < n)
    {
        // cout << "nums2" << endl;
        ans.push_back(nums2[b++]);
    }

    cout << "Size of nums1 is: " << nums1.size() << endl;

    for (int i = 0; i < nums1.size(); i++)
    {
        // cout << "for" << endl;
        nums1[i] = ans[i];
    }
}

int main()
{

    vector<int> arr1 = {1, 2, 3, 0, 0, 0};
    vector<int> arr2 = {2, 5, 6};
    int m = 3;
    int n = 3;

    for (auto i : arr1)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i : arr2)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    merge(arr1, m, arr2, n);
    for (auto i : arr1)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}