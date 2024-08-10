#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (i == j)
            {
                continue;
            }
            if (arr[i] + arr[j] == s)
            {
                vector<int> pair;
                if (arr[i] < arr[j])
                {
                    pair.push_back(arr[i]);
                    pair.push_back(arr[j]);
                }
                else
                {
                    pair.push_back(arr[j]);
                    pair.push_back(arr[i]);
                }
                ans.push_back(pair);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{

    vector<int> arr = {2, -3, 3, 3, -2};
    int s = 0;
    vector<vector<int>> ans = pairSum(arr, s);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}