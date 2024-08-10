#include <bits/stdc++.h>
using namespace std;

vector<int> findIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    // Not at all optimised code
    // vector<int> ans;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr1[i] == arr1[i - 1])
    //     {
    //         continue;
    //     }
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (arr2[j] == arr2[j - 1])
    //         {
    //             continue;
    //         }
    //         if (arr1[i] == arr2[j])
    //         {
    //             ans.push_back(arr1[i]);
    //         }
    //     }
    // }
    // return ans;

    // Optimised code:
    vector<int> ans;
    int i = 0, j = 0, counter = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main()
{

    vector<int> arr1 = {1, 2, 3, 4, 4, 4, 5, 6};
    vector<int> arr2 = {4, 4, 5, 6, 7, 8};

    vector<int> ans = findIntersection(arr1, arr1.size(), arr2, arr2.size());

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}